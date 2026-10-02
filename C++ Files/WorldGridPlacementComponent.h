#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WorldGridFrame.h"
#include "BuildingPieceSnapData.h"
#include "BuildingSnapRole.h"
#include "D_BuildingSnapConfigs.h"
#include "WorldGridPlacementComponent.generated.h"

USTRUCT(BlueprintType)
struct FWorldGridSnapCandidate
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadOnly, Category = "Snap Candidate")
		bool bIsValid = false;

	UPROPERTY(BlueprintReadOnly, Category = "Snap Candidate")
		FTransform ActorTransform = FTransform::Identity;

	UPROPERTY(BlueprintReadOnly, Category = "Snap Candidate")
		int32 TargetSnapIndex = INDEX_NONE;

	UPROPERTY(BlueprintReadOnly, Category = "Snap Candidate")
		int32 SourceSnapIndex = INDEX_NONE;

	UPROPERTY(BlueprintReadOnly, Category = "Snap Candidate")
		float DistanceToTracePoint = BIG_NUMBER;
};

UCLASS(ClassGroup = (IcarusWorldGrid), Blueprintable, meta = (BlueprintSpawnableComponent))
class ICARUS_API UWorldGridPlacementComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UWorldGridPlacementComponent();

	/** Optional world-grid settings for ground placement. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Grid")
		UWorldGridFrame* GridFrame;

	/** Snap data for the actor this component belongs to. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap")
		UBuildingPieceSnapData* PieceSnapData;

	/** Enables terrain/world-grid snapping. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Grid")
		bool bUseWorldGrid;

	/** Reference to the DataTable containing snap configurations for this piece type. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Config")
		class UDataTable* SnapConfigDataTable = nullptr;

	/** Returns a ground-placement transform. */
	UFUNCTION(BlueprintCallable, Category = "World Grid")
		FTransform MakeGroundPlacementTransform(
			const FVector& DesiredLocation,
			const FRotator& DesiredRotation) const;

	/**
	 * Finds the best compatible attachment between this component's piece
	 * and a target actor that also has a placement component.
	 */
	UFUNCTION(BlueprintCallable, Category = "Snap")
		FWorldGridSnapCandidate FindBestSnapCandidate(
			AActor* TargetActor,
			const FVector& TracePoint) const;

	/** Marks a target snap point as occupied for this runtime session. */
	UFUNCTION(BlueprintCallable, Category = "Snap")
		void MarkSnapPointOccupied(AActor* TargetActor, int32 TargetSnapIndex);

	/** Clears all runtime occupancy data. */
	UFUNCTION(BlueprintCallable, Category = "Snap")
		void ClearRuntimeOccupancy();

	/**
	* Gets the effective snap distance after applying the global multiplier.
	* Used by validation to account for config-wide snap distance adjustments.
	*/
	UFUNCTION(BlueprintPure, Category = "Snap")
		float GetEffectiveSnapDistance(float BaseSnapDistance) const;

	/**
	 * C++ only: loads snap configuration from the DataTable.
	 * Returns a pointer to the row, or nullptr if not found.
	 */
	FBuildingSnapConfig* LoadSnapConfig(const FName& RowName);

protected:
	virtual void BeginPlay() override;

private:
	/** Runtime occupancy is intentionally not stored in the Data Asset. */
	TMap<TWeakObjectPtr<AActor>, TSet<int32>> OccupiedSnapPoints;

	bool IsSnapPointOccupied(AActor* TargetActor, int32 TargetSnapIndex) const;

	FTransform CalculateSnapTransform(
		const FTransform& TargetActorTransform,
		const FBuildingSnapPoint& TargetSnap,
		const FBuildingSnapPoint& SourceSnap) const;
};