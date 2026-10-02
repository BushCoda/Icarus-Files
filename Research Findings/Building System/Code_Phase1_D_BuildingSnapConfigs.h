#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BuildingSnapPoint.h"
#include "D_BuildingSnapConfigs.generated.h"

/**
 * DataTable entry defining all snap points for a specific building piece type.
 * 
 * This is the data-driven configuration that designers use to define
 * how pieces can attach to each other.
 * 
 * Usage:
 *   1. Create entries in a DataTable with RowStructure = FBuildingSnapConfig
 *   2. One entry per piece type (Floor, Wall_Solid, Beam_Vertical, etc.)
 *   3. In D_BuildingPieces table, reference the snap config for each piece
 *   4. At runtime, pieces load their snap points from this configuration
 * 
 * Example Rows:
 *   - Row Name: "Floor_Default" → defines snap points for all floors
 *   - Row Name: "Wall_Solid_Default" → defines snap points for solid walls
 *   - Row Name: "Beam_Vertical_Default" → defines snap points for vertical beams
 */
USTRUCT(BlueprintType)
struct ICARUS_API FBuildingSnapConfig : public FTableRowBase
{
	GENERATED_BODY()

public:
	FBuildingSnapConfig()
		: GlobalSnapDistanceMultiplier(1.0f)
	{
	}

	// ===== IDENTIFICATION =====

	/** 
	 * Human-readable display name for this snap configuration.
	 * Appears in editor details for debugging.
	 * Example: "Floor Snap Configuration"
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Snap Config | Identity")
		FText DisplayName;

	/** 
	 * The building piece type this config applies to.
	 * Must match entries in D_BuildingLookup table.
	 * Examples: "Floor", "Wall_Solid", "Beam_Vertical", "Frame_Pillar"
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Snap Config | Identity")
		FName PieceTypeName;

	/** 
	 * Optional description of this configuration.
	 * For designers to understand the snap setup.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Snap Config | Identity")
		FString Description;

	// ===== SNAP POINT DEFINITIONS =====

	/** 
	 * All snap points for this piece type.
	 * Each entry defines a location and role where other pieces can attach.
	 * 
	 * Design Tips:
	 *   - Floors typically have 5+ points (center + 4 edges)
	 *   - Walls typically have 3 points (bottom, top, side)
	 *   - Beams typically have 2 points (ends) or 3 (ends + mid)
	 *   - Pillars typically have 2 points (top, bottom)
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Config | Points")
		TArray<FBuildingSnapPoint> SnapPoints;

	// ===== CONFIGURATION =====

	/** 
	 * Global multiplier for all snap distances in this config.
	 * Useful for tuning snap-ability across a whole piece type.
	 * 
	 * Example:
	 *   - 1.0 = use defined SnapDistance values as-is
	 *   - 0.5 = make all snaps stricter (half the distance)
	 *   - 1.5 = make all snaps more lenient (50% more distance)
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Config | Config",
		meta = (ClampMin = "0.1", ClampMax = "3.0"))
		float GlobalSnapDistanceMultiplier = 1.0f;

	// ===== UTILITY FUNCTIONS =====

	/** Get the number of snap points defined. */
	UFUNCTION(BlueprintPure, Category = "Snap Config")
		int32 GetSnapPointCount() const
	{
		return SnapPoints.Num();
	}

	/** Get a specific snap point by index. Returns nullptr if index is invalid. */
	UFUNCTION(BlueprintPure, Category = "Snap Config")
		const FBuildingSnapPoint* GetSnapPoint(int32 Index) const
	{
		return SnapPoints.IsValidIndex(Index) ? &SnapPoints[Index] : nullptr;
	}

	/** Find the first snap point with a specific role. Returns INDEX_NONE if not found. */
	UFUNCTION(BlueprintPure, Category = "Snap Config")
		int32 FindSnapPointByRole(EBuildingSnapRole Role) const
	{
		for (int32 i = 0; i < SnapPoints.Num(); ++i)
		{
			if (SnapPoints[i].SnapRole == Role)
			{
				return i;
			}
		}
		return INDEX_NONE;
	}

	/** Find all snap points with roles that accept a specific role. */
	UFUNCTION(BlueprintPure, Category = "Snap Config")
		void FindCompatibleSnapPoints(
			EBuildingSnapRole SourceRole,
			TArray<int32>& OutSnapPointIndices) const
	{
		OutSnapPointIndices.Reset();
		for (int32 i = 0; i < SnapPoints.Num(); ++i)
		{
			if (SnapPoints[i].AcceptsRole(SourceRole))
			{
				OutSnapPointIndices.Add(i);
			}
		}
	}

	/** Apply the global multiplier to a snap distance. */
	UFUNCTION(BlueprintPure, Category = "Snap Config")
		float GetEffectiveSnapDistance(float BaseSnapDistance) const
	{
		return BaseSnapDistance * GlobalSnapDistanceMultiplier;
	}

	/** Check if this config is valid for use. */
	UFUNCTION(BlueprintPure, Category = "Snap Config")
		bool IsValid() const
	{
		return !PieceTypeName.IsEmpty() && SnapPoints.Num() > 0;
	}
};
