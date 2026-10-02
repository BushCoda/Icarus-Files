#include "WorldGridFrame.h"

UWorldGridFrame::UWorldGridFrame()
	: GridOrigin(FVector::ZeroVector)
	, GridRotation(FRotator::ZeroRotator)
	, GridSpacing(FVector(300.0f, 300.0f, 300.0f))
{
}

FVector UWorldGridFrame::WorldToGridLocal(const FVector& WorldPosition) const
{
	const FQuat GridQuat = GridRotation.Quaternion();
	return GridQuat.Inverse().RotateVector(WorldPosition - GridOrigin);
}

FVector UWorldGridFrame::GridLocalToWorld(const FVector& LocalPosition) const
{
	return GridOrigin + GridRotation.Quaternion().RotateVector(LocalPosition);
}

FVector UWorldGridFrame::QuantizeToGrid(const FVector& WorldPosition) const
{
	const FVector LocalPosition = WorldToGridLocal(WorldPosition);

	const FVector SafeSpacing(
		FMath::Max(FMath::Abs(GridSpacing.X), KINDA_SMALL_NUMBER),
		FMath::Max(FMath::Abs(GridSpacing.Y), KINDA_SMALL_NUMBER),
		FMath::Max(FMath::Abs(GridSpacing.Z), KINDA_SMALL_NUMBER));

	const FVector SnappedLocal(
		FMath::RoundToFloat(LocalPosition.X / SafeSpacing.X) * SafeSpacing.X,
		FMath::RoundToFloat(LocalPosition.Y / SafeSpacing.Y) * SafeSpacing.Y,
		FMath::RoundToFloat(LocalPosition.Z / SafeSpacing.Z) * SafeSpacing.Z);

	return GridLocalToWorld(SnappedLocal);
}

FIntVector UWorldGridFrame::GetGridCell(const FVector& WorldPosition) const
{
	const FVector LocalPosition = WorldToGridLocal(WorldPosition);

	const FVector SafeSpacing(
		FMath::Max(FMath::Abs(GridSpacing.X), KINDA_SMALL_NUMBER),
		FMath::Max(FMath::Abs(GridSpacing.Y), KINDA_SMALL_NUMBER),
		FMath::Max(FMath::Abs(GridSpacing.Z), KINDA_SMALL_NUMBER));

	return FIntVector(
		FMath::RoundToInt(LocalPosition.X / SafeSpacing.X),
		FMath::RoundToInt(LocalPosition.Y / SafeSpacing.Y),
		FMath::RoundToInt(LocalPosition.Z / SafeSpacing.Z));
}