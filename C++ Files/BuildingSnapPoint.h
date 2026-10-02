#pragma once

#include "CoreMinimal.h"
#include "BuildingSnapRole.h"
#include "BuildingSnapPoint.generated.h"

/**
 * A local attachment point on a building piece.
 *
 * The transform is relative to the owning building actor.
 * The forward direction can be used later to control valid approach
 * directions and rotations.
 */
USTRUCT(BlueprintType)
struct FBuildingSnapPoint
{
	GENERATED_BODY()

public:
	FBuildingSnapPoint()
		: Role(TEXT("Default"))
		, SnapDistance(150.0f)
		, bAllowMultipleAttachments(false)
	{
	}

	/** Local transform relative to the building piece actor. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point")
		FTransform LocalTransform = FTransform::Identity;

	/**
	 * Role of this point, for example:
	 * FloorEdge, WallTop, WallBottom, BeamEnd, FoundationSide.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point")
		FName Role;

	/**
	 * Roles that are accepted by this point.
	 * Example: a FloorEdge may accept WallBottom.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point")
		TArray<FName> CompatibleRoles;

	/** Maximum preview distance at which this point may be selected. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point",
		meta = (ClampMin = "0.0"))
		float SnapDistance;

	/**
	 * Allows multiple pieces to use this point.
	 * Keep false for most structural attachment points.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point")
		bool bAllowMultipleAttachments;

	/** Optional editor/debug description. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point")
		FString Description;

	/** Role/type of this snap point (NEW - complementss existing FName Role). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point")
		EBuildingSnapRole SnapRole = EBuildingSnapRole::Custom;

	/** Enum-based roles accepted by this point ( new sysytem, alongside FName Compatible Roles. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point")
		TArray<EBuildingSnapRole> CompatibleSnapRoles;

	/** Minimum stability the target piece must have to support an attachment. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Snap Point",
		meta = (ClampMin = "0.0", ClampMax = "100.0"))
		float MinimumSupportStability = 0.0f;

	bool AcceptsRole(const FName& SourceRole) const
	{
		return CompatibleRoles.Contains(SourceRole);
	}

	/** Get the world position of this snap point. */
	FVector GetWorldLocation(const FTransform& OwnerTransform) const
	{
		return OwnerTransform.TransformPosition(LocalTransform.GetLocation());
	}

	/** Get the world rotation of this snap point. */
	FRotator GetWorldRotation(const FTransform& OwnerTransform) const
	{
		return (OwnerTransform * LocalTransform).Rotator();
	}

	/** Get the world transform of this snap point. */
	FTransform GetWorldTransform(const FTransform& OwnerTransform) const
	{
		return OwnerTransform * LocalTransform;
	}
};