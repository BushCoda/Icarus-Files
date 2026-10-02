#include "BuildingSnapPlacementHelper.h"
#include "BuildingPieceSnapData.h"

bool UBuildingSnapPlacementHelper::IsSnapRoleCompatible(
	const FBuildingSnapPoint& TargetSnapPoint,
	EBuildingSnapRole SourceRole)
{
	return TargetSnapPoint.CompatibleSnapRoles.Contains(SourceRole);
}

float UBuildingSnapPlacementHelper::GetSnapPointDistance(
	const FBuildingSnapPoint& SourceSnap,
	const FBuildingSnapPoint& TargetSnap,
	const FTransform& SourceTransform,
	const FTransform& TargetTransform)
{
	FVector SourceWorldPos = SourceSnap.GetWorldLocation(SourceTransform);
	FVector TargetWorldPos = TargetSnap.GetWorldLocation(TargetTransform);
	return FVector::Dist(SourceWorldPos, TargetWorldPos);
}

bool UBuildingSnapPlacementHelper::IsDistanceWithinSnapThreshold(
	float Distance,
	float BaseSnapDistance,
	float GlobalMultiplier)
{
	float EffectiveDistance = BaseSnapDistance * GlobalMultiplier;
	return Distance <= EffectiveDistance;
}

void UBuildingSnapPlacementHelper::GetCompatibleSnapPoints(
	UBuildingPieceSnapData* PieceSnapData,
	EBuildingSnapRole SourceRole,
	const FTransform& PieceTransform,
	const FVector& TestLocation,
	float MaxDistance,
	TArray<int32>& OutValidSnapIndices)
{
	OutValidSnapIndices.Reset();

	if (!PieceSnapData)
	{
		return;
	}

	const int32 NumSnaps = PieceSnapData->GetSnapPointCount();
	for (int32 i = 0; i < NumSnaps; ++i)
	{
		const FBuildingSnapPoint* SnapPoint = PieceSnapData->GetSnapPoint(i);
		if (!SnapPoint || !IsSnapRoleCompatible(*SnapPoint, SourceRole))
		{
			continue;
		}

		// Real world-space distance from the test location to this snap point
		const FVector SnapWorldPos = SnapPoint->GetWorldLocation(PieceTransform);
		const float Distance = FVector::Dist(TestLocation, SnapWorldPos);

		// Must be within the point's own range AND the caller's limit
		const float AllowedDistance = FMath::Min(SnapPoint->SnapDistance, MaxDistance);
		if (Distance <= AllowedDistance)
		{
			OutValidSnapIndices.Add(i);
		}
	}
}

int32 UBuildingSnapPlacementHelper::FindClosestCompatibleSnap(
	UBuildingPieceSnapData* PieceSnapData,
	EBuildingSnapRole SourceRole,
	const FTransform& PieceTransform,
	const FVector& TestLocation,
	float MaxDistance)
{
	if (!PieceSnapData)
	{
		return INDEX_NONE;
	}

	int32 ClosestIndex = INDEX_NONE;
	float ClosestDistance = TNumericLimits<float>::Max();

	const int32 NumSnaps = PieceSnapData->GetSnapPointCount();
	for (int32 i = 0; i < NumSnaps; ++i)
	{
		const FBuildingSnapPoint* SnapPoint = PieceSnapData->GetSnapPoint(i);
		if (!SnapPoint || !IsSnapRoleCompatible(*SnapPoint, SourceRole))
		{
			continue;
		}

		// Use the piece's actual world transform, not Identity
		const FVector SnapWorldPos = SnapPoint->GetWorldLocation(PieceTransform);
		const float Distance = FVector::Dist(TestLocation, SnapWorldPos);

		const float AllowedDistance = FMath::Min(SnapPoint->SnapDistance, MaxDistance);
		if (Distance <= AllowedDistance && Distance < ClosestDistance)
		{
			ClosestDistance = Distance;
			ClosestIndex = i;
		}
	}

	return ClosestIndex;
}

float UBuildingSnapPlacementHelper::GetSnapRotationDifference(
	const FBuildingSnapPoint& SourceSnap,
	const FBuildingSnapPoint& TargetSnap,
	const FRotator& SourceRotation,
	const FRotator& TargetRotation)
{
	FRotator SourceSnapRotation = SourceSnap.GetWorldRotation(FTransform(SourceRotation, FVector::ZeroVector));
	FRotator TargetSnapRotation = TargetSnap.GetWorldRotation(FTransform(TargetRotation, FVector::ZeroVector));

	// Calculate difference in forward direction
	FVector SourceForward = SourceSnapRotation.Vector();
	FVector TargetForward = TargetSnapRotation.Vector();

	float DotProduct = FVector::DotProduct(SourceForward, TargetForward);
	DotProduct = FMath::Clamp(DotProduct, -1.0f, 1.0f);

	float AngleDifference = FMath::Acos(DotProduct);
	return FMath::RadiansToDegrees(AngleDifference);
}

bool UBuildingSnapPlacementHelper::IsRotationWithinConstraint(
	float RotationDifference,
	float RotationConstraint)
{
	if (RotationConstraint <= 0.0f)
	{
		return true; // No constraint
	}

	return RotationDifference <= RotationConstraint;
}