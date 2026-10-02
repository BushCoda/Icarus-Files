#pragma once

#include "CoreMinimal.h"
#include "BuildingSnapRole.h"
#include "BuildingSnapPoint.generated.h"

/**
 * Defines a local attachment point on a building piece.
 * 
 * The transform is relative to the owning building actor's pivot point.
 * Multiple snap points can be defined per piece for flexible placement options.
 * 
 * Example Usage:
 *   Floor piece has 5 snap points:
 *     - FloorSurface (center, for stacking)
 *     - FloorEdge_Front, Back, Left, Right (for wall attachment)
 * 
 *   Wall piece has 3 snap points:
 *     - WallBottom (attaches to floor edges)
 *     - WallTop (for roof/support pieces)
 *     - WallSide_Front (for windows/doors)
 */
USTRUCT(BlueprintType)
struct FBuildingSnapPoint
{
	GENERATED_BODY()

public:
	FBuildingSnapPoint()
		: SnapRole(EBuildingSnapRole::Custom)
		, SnapDistance(150.0f)
		, bAllowMultipleAttachments(false)
		, MinimumSupportStability(0.0f)
		, RotationConstraint(0.0f)
	{
	}

	// ===== REQUIRED FIELDS =====

	/** 
	 * Local transform relative to the building piece actor's root.
	 * This defines where the snap point is positioned and its orientation.
	 * The forward direction (X-axis) can be used to control approach vectors.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point")
		FTransform LocalTransform = FTransform::Identity;

	/** 
	 * Role/type of this snap point.
	 * Defines what function this attachment serves.
	 * Example: WallBottom, FloorEdge_Front, BeamEnd, etc.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point")
		EBuildingSnapRole SnapRole = EBuildingSnapRole::Custom;

	/** 
	 * Roles that are accepted by this snap point.
	 * When another piece tries to attach, its SnapRole must be in this array.
	 * 
	 * Example:
	 *   FloorEdge_Front accepts: WallBottom, BeamEnd, FrameCorner
	 *   This means walls, beams, and frames can attach to floor edges.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point")
		TArray<EBuildingSnapRole> CompatibleRoles;

	// ===== OPTIONAL FIELDS =====

	/** 
	 * Maximum preview distance at which this snap point can be selected.
	 * When player looks for nearby attachment points, this snap won't be
	 * considered if it's farther than SnapDistance from the trace point.
	 * 
	 * Typical values:
	 *   - Tightly constrained: 50-100 units
	 *   - Moderate snapping: 100-200 units
	 *   - Loose snapping: 200-300 units
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point",
		meta = (ClampMin = "0.0", ClampMax = "1000.0"))
		float SnapDistance = 150.0f;

	/** 
	 * Allow multiple pieces to attach to this snap point simultaneously.
	 * Set to false for most structural attachments (pillars, critical supports).
	 * Set to true for distributed loads (beam tops, ramp surfaces).
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point")
		bool bAllowMultipleAttachments = false;

	/** 
	 * Minimum stability the target piece must have to support an attachment.
	 * Prevents weak pieces from supporting heavy loads.
	 * 
	 * Example:
	 *   - Thatch floor (Tier 1): MinimumSupportStability = 1.0
	 *   - Stone frame (Tier 6): MinimumSupportStability = 5.0
	 *   - Concrete floor (Tier 8): MinimumSupportStability = 10.0
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point",
		meta = (ClampMin = "0.0", ClampMax = "100.0"))
		float MinimumSupportStability = 0.0f;

	/** 
	 * Optional rotation constraint in degrees.
	 * If > 0, the attaching piece must align within this angle of the snap point's forward direction.
	 * 
	 * Examples:
	 *   - 0.0 = no rotation constraint (any rotation allowed)
	 *   - 45.0 = piece must be within 45° of snap forward direction
	 *   - 5.0 = very strict alignment required
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point",
		meta = (ClampMin = "0.0", ClampMax = "180.0"))
		float RotationConstraint = 0.0f;

	/** 
	 * Editor/debug description explaining this snap point's purpose.
	 * Helps designers understand what pieces should attach here.
	 * 
	 * Example: "Front-left corner for wall attachment with bracing beam"
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point")
		FString Description;

	// ===== UTILITY FUNCTIONS =====

	/**
	 * Check if this snap point accepts a specific role.
	 * Used during placement validation.
	 */
	bool AcceptsRole(const EBuildingSnapRole InRole) const
	{
		return CompatibleRoles.Contains(InRole);
	}

	/**
	 * Check if this snap point has a rotation constraint.
	 */
	bool HasRotationConstraint() const
	{
		return RotationConstraint > 0.0f;
	}

	/**
	 * Get the world position of this snap point.
	 * Transforms the local snap transform by the owner actor's transform.
	 */
	FVector GetWorldLocation(const FTransform& OwnerTransform) const
	{
		return OwnerTransform.TransformPosition(LocalTransform.GetLocation());
	}

	/**
	 * Get the world rotation of this snap point.
	 */
	FRotator GetWorldRotation(const FTransform& OwnerTransform) const
	{
		return (OwnerTransform * LocalTransform).Rotator();
	}

	/**
	 * Get the world transform of this snap point.
	 */
	FTransform GetWorldTransform(const FTransform& OwnerTransform) const
	{
		return OwnerTransform * LocalTransform;
	}
};
