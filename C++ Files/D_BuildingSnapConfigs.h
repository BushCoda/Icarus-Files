#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BuildingSnapPoint.h"
#include "D_BuildingSnapConfigs.generated.h"

/**
 * DataTable entry defining snap points for a building piece type.
 * Designers create rows in a DataTable with this structure.
 *
 * Example:
 *   Row Name: "Floor_Default"
 *   PieceTypeName: "Floor"
 *   SnapPoints: [FloorSurface, FloorEdge_Front, FloorEdge_Back, ...]
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

    /** Human-readable name for this config. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Snap Config")
        FText DisplayName;

    /**
     * The piece type this applies to. Must match D_BuildingLookup entries.
     * Example: "Floor", "Wall_Solid", "Beam_Vertical"
     */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Snap Config")
        FName PieceTypeName;

    /** Description for designers. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Snap Config")
        FString Description;

    /** Array of snap points for this piece type. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Config")
        TArray<FBuildingSnapPoint> SnapPoints;

    /**
     * Global multiplier for all snap distances in this config.
     * 1.0 = use defined SnapDistance values
     * 0.5 = make snaps stricter (half distance)
     * 1.5 = make snaps more lenient
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Config",
        meta = (ClampMin = "0.1", ClampMax = "3.0"))
        float GlobalSnapDistanceMultiplier = 1.0f;

    // Utility functions for designers/code
    int32 GetSnapPointCount() const
    {
        return SnapPoints.Num();
    }

    const FBuildingSnapPoint* GetSnapPoint(int32 Index) const
    {
        return SnapPoints.IsValidIndex(Index) ? &SnapPoints[Index] : nullptr;
    }

    bool IsValid() const
    {
        return PieceTypeName != NAME_None && SnapPoints.Num() > 0;
    }
};