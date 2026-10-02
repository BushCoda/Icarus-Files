#pragma once

#include "CoreMinimal.h"
#include "BuildingSnapPoint.h"
#include "BuildingSnapRole.h"
#include "BuildingSnapPlacementHelper.generated.h"

/**
 * Helper utilities for snap placement checks.
 * Lightweight functions for distance, compatibility, and snap point queries.
 * Used by both placement preview and server validation.
 */
UCLASS()
class ICARUS_API UBuildingSnapPlacementHelper : public UObject
{
	GENERATED_BODY()

public:
	/**
	 * Check if a source snap role is compatible with a target snap point.
	 * Returns true if the target point accepts the source role.
	 */
	UFUNCTION(BlueprintPure, Category = "Snap Placement")
		static bool IsSnapRoleCompatible(
			const FBuildingSnapPoint& TargetSnapPoint,
			EBuildingSnapRole SourceRole);

	/**
	 * Calculate the distance between source and target snap points.
	 * Uses world transforms to get accurate 3D distance.
	 */
	UFUNCTION(BlueprintPure, Category = "Snap Placement")
		static float GetSnapPointDistance(
			const FBuildingSnapPoint& SourceSnap,
			const FBuildingSnapPoint& TargetSnap,
			const FTransform& SourceTransform,
			const FTransform& TargetTransform);

	/**
	 * Check if distance is within the snap threshold.
	 * Compares against effective snap distance (accounting for multiplier).
	 */
	UFUNCTION(BlueprintPure, Category = "Snap Placement")
		static bool IsDistanceWithinSnapThreshold(
			float Distance,
			float BaseSnapDistance,
			float GlobalMultiplier = 1.0f);

	/**
	 * Get all snap points on a piece that accept SourceRole and are within range of TestLocation.
	 * A point counts as in range if it is within both its own SnapDistance and MaxDistance.
	 */
	UFUNCTION(BlueprintCallable, Category = "Snap Placement")
		static void GetCompatibleSnapPoints(
			class UBuildingPieceSnapData* PieceSnapData,
			EBuildingSnapRole SourceRole,
			const FTransform& PieceTransform,
			const FVector& TestLocation,
			float MaxDistance,
			TArray<int32>& OutValidSnapIndices);

	/**
	 * Find the closest snap point (in world space) that accepts SourceRole.
	 * Returns the snap index, or -1 if none is in range.
	 */
	UFUNCTION(BlueprintCallable, Category = "Snap Placement")
		static int32 FindClosestCompatibleSnap(
			class UBuildingPieceSnapData* PieceSnapData,
			EBuildingSnapRole SourceRole,
			const FTransform& PieceTransform,
			const FVector& TestLocation,
			float MaxDistance);

	/**
	 * Calculate rotation difference between source and target snap points.
	 * Used for rotation constraint checks.
	 */
	UFUNCTION(BlueprintPure, Category = "Snap Placement")
		static float GetSnapRotationDifference(
			const FBuildingSnapPoint& SourceSnap,
			const FBuildingSnapPoint& TargetSnap,
			const FRotator& SourceRotation,
			const FRotator& TargetRotation);

	/**
	 * Check if rotation difference is within constraint.
	 * Returns true if within allowed rotation range.
	 */
	UFUNCTION(BlueprintPure, Category = "Snap Placement")
		static bool IsRotationWithinConstraint(
			float RotationDifference,
			float RotationConstraint);
};