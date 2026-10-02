#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BuildingSnapPoint.h"
#include "D_BuildingSnapConfigs.h"
#include "BuildingPieceSnapData.generated.h"

UCLASS(BlueprintType)
class ICARUS_API UBuildingPieceSnapData : public UDataAsset
{
	GENERATED_BODY()

public:
	/** Display name used while debugging. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Snap Data")
		FText DisplayName;

	/** Snap points belonging to this piece. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Snap Data")
		TArray<FBuildingSnapPoint> SnapPoints;

	/** Total number of snap points on this piece. */
	UFUNCTION(BlueprintPure, Category = "Snap Data")
		int32 GetSnapPointCount() const
	{
		return SnapPoints.Num();
	}

	/** C++ only: returns the snap point at Index, or nullptr if out of bounds. */
	const FBuildingSnapPoint* GetSnapPoint(const int32 Index) const
	{
		return SnapPoints.IsValidIndex(Index)
			? &SnapPoints[Index]
			: nullptr;
	}
};