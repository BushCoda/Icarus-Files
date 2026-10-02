#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuildingSnapValidator.generated.h"

class AActor;
class UWorldGridPlacementComponent;
struct FBuildingSnapPoint;

/**
 * Result of a snap placement validation check.
 * Tells the server whether a placement is allowed and why not (if rejected).
 */
UENUM(BlueprintType)
enum class ESnapValidationResult : uint8
{
	Valid UMETA(DisplayName = "Valid - Can Place"),
	InvalidCollision UMETA(DisplayName = "Invalid - Collision Detected"),
	InvalidStability UMETA(DisplayName = "Invalid - Insufficient Support"),
	InvalidRole UMETA(DisplayName = "Invalid - Role Incompatible"),
	InvalidOccupancy UMETA(DisplayName = "Invalid - Snap Point Occupied"),
	InvalidMaterial UMETA(DisplayName = "Invalid - Material Tier Mismatch"),
	InvalidDistance UMETA(DisplayName = "Invalid - Too Far"),
	ErrorUnknown UMETA(DisplayName = "Error - Unknown Issue")
};

/**
 * Detailed validation result with reason and debug info.
 */
USTRUCT(BlueprintType)
struct FSnapValidationInfo
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadOnly, Category = "Validation")
		ESnapValidationResult Result = ESnapValidationResult::Valid;

	UPROPERTY(BlueprintReadOnly, Category = "Validation")
		FText Message;

	UPROPERTY(BlueprintReadOnly, Category = "Validation")
		float SupportStability = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Validation")
		TArray<AActor*> CollidingActors;

	bool IsValid() const
	{
		return Result == ESnapValidationResult::Valid;
	}
};

/**
 * Validates snap placement requests on the server.
 * Performs all checks needed before confirming a snap placement:
 * - Role compatibility
 * - Snap point occupancy
 * - Collision detection
 * - Stability support
 * - Material tier compatibility
 */
UCLASS()
class ICARUS_API UBuildingSnapValidator : public UObject
{
	GENERATED_BODY()

public:
	/**
	 * Main validation function. Call this before allowing a snap placement.
	 * Performs all validation checks and returns detailed result.
	 */
	UFUNCTION(BlueprintCallable, Category = "Snap Validation")
		static FSnapValidationInfo ValidateSnapPlacement(
			AActor* SourceActor,
			AActor* TargetActor,
			int32 SourceSnapIndex,
			int32 TargetSnapIndex,
			const FTransform& ProposedTransform);

	/**
	 * Checks for collision overlap with existing pieces.
	 * Returns all colliding actors if any are found.
	 */
	UFUNCTION(BlueprintCallable, Category = "Snap Validation")
		static bool CheckCollisionOverlap(
			AActor* SourceActor,
			AActor* TargetActor,
			const FTransform& ProposedTransform,
			TArray<AActor*>& OutCollidingActors);

	/**
	 * Checks if target actor has sufficient stability to support source.
	 * (Placeholder for Phase 3 when we integrate with vanilla BuildingSubsystem)
	 */
	UFUNCTION(BlueprintCallable, Category = "Snap Validation")
		static bool CheckStabilitySupport(
			AActor* TargetActor,
			float& OutStability,
			FText& OutReason);

	/**
	 * Checks if material tiers are compatible.
	 * (Placeholder for Phase 3 when we integrate with vanilla D_BuildingStability)
	 */
	UFUNCTION(BlueprintCallable, Category = "Snap Validation")
		static bool CheckMaterialTierCompatibility(
			AActor* SourceActor,
			AActor* TargetActor,
			FText& OutReason);

	/**
	 * Checks if snap points are still available (not occupied).
	 */
	UFUNCTION(BlueprintCallable, Category = "Snap Validation")
		static bool CheckSnapPointOccupancy(
			AActor* TargetActor,
			int32 TargetSnapIndex,
			bool bAllowMultiple,
			FText& OutReason);

private:
	static int32 GetMaterialTier(AActor* BuildingActor);
	static float GetActorStability(AActor* BuildingActor);
};