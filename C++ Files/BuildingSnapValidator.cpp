#include "BuildingSnapValidator.h"
#include "WorldGridPlacementComponent.h"
#include "BuildingPieceSnapData.h"
#include "GameFramework/Character.h"
#include "Engine/World.h"

FSnapValidationInfo UBuildingSnapValidator::ValidateSnapPlacement(
	AActor* SourceActor,
	AActor* TargetActor,
	int32 SourceSnapIndex,
	int32 TargetSnapIndex,
	const FTransform& ProposedTransform)
{
	FSnapValidationInfo ValidationInfo;

	// Validate inputs
	if (!SourceActor || !TargetActor)
	{
		ValidationInfo.Result = ESnapValidationResult::ErrorUnknown;
		ValidationInfo.Message = FText::FromString("Invalid actor references");
		return ValidationInfo;
	}

	// Get components
	UWorldGridPlacementComponent* SourceComponent =
		SourceActor->FindComponentByClass<UWorldGridPlacementComponent>();
	UWorldGridPlacementComponent* TargetComponent =
		TargetActor->FindComponentByClass<UWorldGridPlacementComponent>();

	if (!SourceComponent || !TargetComponent ||
		!SourceComponent->PieceSnapData || !TargetComponent->PieceSnapData)
	{
		ValidationInfo.Result = ESnapValidationResult::ErrorUnknown;
		ValidationInfo.Message = FText::FromString("Missing placement components");
		return ValidationInfo;
	}

	// Verify snap indices are valid
	if (!SourceComponent->PieceSnapData->GetSnapPoint(SourceSnapIndex) ||
		!TargetComponent->PieceSnapData->GetSnapPoint(TargetSnapIndex))
	{
		ValidationInfo.Result = ESnapValidationResult::ErrorUnknown;
		ValidationInfo.Message = FText::FromString("Invalid snap point indices");
		return ValidationInfo;
	}

	const FBuildingSnapPoint* SourceSnap =
		SourceComponent->PieceSnapData->GetSnapPoint(SourceSnapIndex);
	const FBuildingSnapPoint* TargetSnap =
		TargetComponent->PieceSnapData->GetSnapPoint(TargetSnapIndex);

	// CHECK 1: Occupancy (quick early-out)
	FText OccupancyReason;
	if (!CheckSnapPointOccupancy(TargetActor, TargetSnapIndex,
		TargetSnap->bAllowMultipleAttachments, OccupancyReason))
	{
		ValidationInfo.Result = ESnapValidationResult::InvalidOccupancy;
		ValidationInfo.Message = OccupancyReason;
		return ValidationInfo;
	}

	// CHECK 2: Collision
	TArray<AActor*> CollidingActors;
	if (!CheckCollisionOverlap(SourceActor, TargetActor, ProposedTransform, CollidingActors))
	{
		ValidationInfo.Result = ESnapValidationResult::InvalidCollision;
		ValidationInfo.Message = FText::FromString(
			FString::Printf(TEXT("Collision detected with %d actors"), CollidingActors.Num()));
		ValidationInfo.CollidingActors = CollidingActors;
		return ValidationInfo;
	}

	// CHECK 3: Stability
	float TargetStability = 0.0f;
	FText StabilityReason;
	CheckStabilitySupport(TargetActor, TargetStability, StabilityReason);

	if (TargetStability < TargetSnap->MinimumSupportStability)
	{
		ValidationInfo.Result = ESnapValidationResult::InvalidStability;
		ValidationInfo.Message = FText::FromString(
			FString::Printf(TEXT("Support stability %.1f < required %.1f"),
				TargetStability, TargetSnap->MinimumSupportStability));
		ValidationInfo.SupportStability = TargetStability;
		return ValidationInfo;
	}

	// CHECK 4: Material Tier
	FText MaterialReason;
	if (!CheckMaterialTierCompatibility(SourceActor, TargetActor, MaterialReason))
	{
		ValidationInfo.Result = ESnapValidationResult::InvalidMaterial;
		ValidationInfo.Message = MaterialReason;
		return ValidationInfo;
	}

	// All checks passed!
	ValidationInfo.Result = ESnapValidationResult::Valid;
	ValidationInfo.Message = FText::FromString("Placement valid");
	ValidationInfo.SupportStability = TargetStability;
	return ValidationInfo;
}

bool UBuildingSnapValidator::CheckCollisionOverlap(
	AActor* SourceActor,
	AActor* TargetActor,
	const FTransform& ProposedTransform,
	TArray<AActor*>& OutCollidingActors)
{
	if (!SourceActor || !SourceActor->GetWorld())
	{
		return true; // No world, assume valid
	}

	OutCollidingActors.Reset();

	// Get source actor's bounds to size the collision check appropriately
	FVector Origin, BoxExtent;
	SourceActor->GetActorBounds(false, Origin, BoxExtent);
	float TraceRadius = BoxExtent.GetAbsMax() + 50.0f; // Add 50cm buffer

	const FVector TraceLocation = ProposedTransform.GetLocation();

	TArray<FOverlapResult> Overlaps;
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(SourceActor);

	// Ignore the target piece we're snapping to
	if (TargetActor)
	{
		QueryParams.AddIgnoredActor(TargetActor);
	}

	const bool bHit = SourceActor->GetWorld()->OverlapMultiByChannel(
		Overlaps,
		TraceLocation,
		FQuat::Identity,
		ECC_WorldStatic,
		FCollisionShape::MakeSphere(TraceRadius),
		QueryParams);

	if (bHit && Overlaps.Num() > 0)
	{
		for (const FOverlapResult& Overlap : Overlaps)
		{
			if (Overlap.GetActor() && Overlap.GetActor() != SourceActor && Overlap.GetActor() != TargetActor)
			{
				OutCollidingActors.Add(Overlap.GetActor());
			}
		}
		return false; // Collision detected
	}

	return true; // No collision
}

bool UBuildingSnapValidator::CheckStabilitySupport(
	AActor* TargetActor,
	float& OutStability,
	FText& OutReason)
{
	if (!TargetActor)
	{
		OutReason = FText::FromString("Target actor invalid");
		OutStability = 0.0f;
		return false;
	}

	// Placeholder: In Phase 3, query vanilla BuildingSubsystem
	OutStability = 10.0f;
	OutReason = FText::FromString("Stability check placeholder");
	return true;
}

bool UBuildingSnapValidator::CheckMaterialTierCompatibility(
	AActor* SourceActor,
	AActor* TargetActor,
	FText& OutReason)
{
	if (!SourceActor || !TargetActor)
	{
		OutReason = FText::FromString("Invalid actors");
		return false;
	}

	// Placeholder: In Phase 3, query D_BuildingStability
	// For now, always compatible
	OutReason = FText::FromString("Material tier check placeholder");
	return true;
}

bool UBuildingSnapValidator::CheckSnapPointOccupancy(
	AActor* TargetActor,
	int32 TargetSnapIndex,
	bool bAllowMultiple,
	FText& OutReason)
{
	if (!TargetActor)
	{
		OutReason = FText::FromString("Target actor invalid");
		return false;
	}

	// Placeholder: In Phase 3, query occupancy tracking
	// For now, always available
	OutReason = FText::FromString("Snap point available");
	return true;
}

int32 UBuildingSnapValidator::GetMaterialTier(AActor* BuildingActor)
{
	if (!BuildingActor)
	{
		return 0;
	}

	// Placeholder: Query D_BuildingStability table later
	return 3;
}

float UBuildingSnapValidator::GetActorStability(AActor* BuildingActor)
{
	if (!BuildingActor)
	{
		return 0.0f;
	}

	// Placeholder: Query BuildingSubsystem later
	return 10.0f;
}