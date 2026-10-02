#include "WorldGridPlacementComponent.h"
#include "Engine/DataTable.h"

UWorldGridPlacementComponent::UWorldGridPlacementComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	bUseWorldGrid = true;
	GridFrame = nullptr;
	PieceSnapData = nullptr;
}

void UWorldGridPlacementComponent::BeginPlay()
{
	Super::BeginPlay();
}

FTransform UWorldGridPlacementComponent::MakeGroundPlacementTransform(
	const FVector& DesiredLocation,
	const FRotator& DesiredRotation) const
{
	FTransform Result(DesiredRotation, DesiredLocation);

	if (bUseWorldGrid && GridFrame)
	{
		Result.SetLocation(GridFrame->QuantizeToGrid(DesiredLocation));
	}

	return Result;
}

FWorldGridSnapCandidate UWorldGridPlacementComponent::FindBestSnapCandidate(
	AActor* TargetActor,
	const FVector& TracePoint) const
{
	FWorldGridSnapCandidate BestCandidate;

	if (!TargetActor || !PieceSnapData)
	{
		return BestCandidate;
	}

	UWorldGridPlacementComponent* TargetComponent =
		TargetActor->FindComponentByClass<UWorldGridPlacementComponent>();

	if (!TargetComponent ||
		!TargetComponent->PieceSnapData)
	{
		return BestCandidate;
	}

	float BestDistance = BIG_NUMBER;

	const FTransform TargetActorTransform =
		TargetActor->GetActorTransform();

	for (int32 TargetIndex = 0;
		TargetIndex < TargetComponent->PieceSnapData->SnapPoints.Num();
		++TargetIndex)
	{
		const FBuildingSnapPoint& TargetSnap =
			TargetComponent->PieceSnapData->SnapPoints[TargetIndex];

		if (!TargetSnap.bAllowMultipleAttachments &&
			IsSnapPointOccupied(TargetActor, TargetIndex))
		{
			continue;
		}

		const FVector TargetWorldLocation =
			TargetActorTransform.TransformPosition(
				TargetSnap.LocalTransform.GetLocation());

		for (int32 SourceIndex = 0;
			SourceIndex < PieceSnapData->SnapPoints.Num();
			++SourceIndex)
		{
			const FBuildingSnapPoint& SourceSnap =
				PieceSnapData->SnapPoints[SourceIndex];

			if (!TargetSnap.AcceptsRole(SourceSnap.Role))
			{
				continue;
			}

			const float Distance =
				FVector::Dist(TargetWorldLocation, TracePoint);

			const float AllowedDistance =
				FMath::Min(TargetSnap.SnapDistance, SourceSnap.SnapDistance);

			if (Distance > AllowedDistance || Distance >= BestDistance)
			{
				continue;
			}

			BestCandidate.bIsValid = true;
			BestCandidate.TargetSnapIndex = TargetIndex;
			BestCandidate.SourceSnapIndex = SourceIndex;
			BestCandidate.DistanceToTracePoint = Distance;

			BestCandidate.ActorTransform =
				CalculateSnapTransform(
					TargetActorTransform,
					TargetSnap,
					SourceSnap);

			BestDistance = Distance;
		}
	}

	return BestCandidate;
}

FTransform UWorldGridPlacementComponent::CalculateSnapTransform(
	const FTransform& TargetActorTransform,
	const FBuildingSnapPoint& TargetSnap,
	const FBuildingSnapPoint& SourceSnap) const
{
	/**
	 * TargetWorldSnap is the desired world transform of the target point.
	 * The child actor transform is calculated so its source point occupies
	 * the same transform.
	 */
	const FTransform TargetWorldSnap =
		TargetActorTransform * TargetSnap.LocalTransform;

	return TargetWorldSnap *
		SourceSnap.LocalTransform.Inverse();
}

void UWorldGridPlacementComponent::MarkSnapPointOccupied(
	AActor* TargetActor,
	const int32 TargetSnapIndex)
{
	if (!TargetActor || TargetSnapIndex == INDEX_NONE)
	{
		return;
	}

	OccupiedSnapPoints.FindOrAdd(TargetActor).Add(TargetSnapIndex);
}

void UWorldGridPlacementComponent::ClearRuntimeOccupancy()
{
	OccupiedSnapPoints.Empty();
}

bool UWorldGridPlacementComponent::IsSnapPointOccupied(
	AActor* TargetActor,
	const int32 TargetSnapIndex) const
{
	const TSet<int32>* Occupied =
		OccupiedSnapPoints.Find(TargetActor);

	return Occupied && Occupied->Contains(TargetSnapIndex);
}

float UWorldGridPlacementComponent::GetEffectiveSnapDistance(float BaseSnapDistance) const
{
	// For now, return the base distance unchanged.
	// Later in phase 3, we'll read this from D_BuildingSnapConfigs.
	return BaseSnapDistance;
}

FBuildingSnapConfig* UWorldGridPlacementComponent::LoadSnapConfig(const FName& RowName)
{
	if (!SnapConfigDataTable)
	{
		UE_LOG(LogTemp, Warning, TEXT("SnapConfigDataTable is not assigned"));
		return nullptr;
	}

	FBuildingSnapConfig* Config = SnapConfigDataTable->FindRow<FBuildingSnapConfig>(
		RowName,
		TEXT("WorldGridPlacementComponent::LoadSnapConfig"));

	if (!Config)
	{
		UE_LOG(LogTemp, Warning, TEXT("Snap Config Row '%s' not found in DataTable"),
			*RowName.ToString());
		return nullptr;
	}

	return Config;
}