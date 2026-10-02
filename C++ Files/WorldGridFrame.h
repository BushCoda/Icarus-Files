#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WorldGridFrame.generated.h"

UCLASS(BlueprintType, Blueprintable)
class ICARUS_API UWorldGridFrame : public UObject
{
	GENERATED_BODY()

public:
	UWorldGridFrame();

	/** Stable origin of the world grid. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Grid")
		FVector GridOrigin;

	/** Rotation of the world-grid coordinate frame. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Grid")
		FRotator GridRotation;

	/** Cell spacing in local grid coordinates. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Grid",
		meta = (ClampMin = "0.001"))
		FVector GridSpacing;

	/** Converts a world-space position to local grid coordinates. */
	UFUNCTION(BlueprintPure, Category = "World Grid")
		FVector WorldToGridLocal(const FVector& WorldPosition) const;

	/** Converts a local grid position to world space. */
	UFUNCTION(BlueprintPure, Category = "World Grid")
		FVector GridLocalToWorld(const FVector& LocalPosition) const;

	/** Rounds a world position to the nearest grid cell. */
	UFUNCTION(BlueprintPure, Category = "World Grid")
		FVector QuantizeToGrid(const FVector& WorldPosition) const;

	/** Returns the integer grid cell for a world position. */
	UFUNCTION(BlueprintPure, Category = "World Grid")
		FIntVector GetGridCell(const FVector& WorldPosition) const;
};