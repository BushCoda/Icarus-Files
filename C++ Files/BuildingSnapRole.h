// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BuildingSnapRole.generated.h"

/** Describes the purpose of a building piece attachment point. */
UENUM(BlueprintType)
enum class EBuildingSnapRole : uint8
{
	FloorSurface,
	FloorEdge_Front,
	FloorEdge_Back,
	FloorEdge_Left,
	FloorEdge_Right,
	FloorCorner,

	WallBottom,
	WallTop,
	WallSide_Front,
	WallSide_Back,
	WallCorner,

	BeamEnd,
	BeamMid,
	BeamCorner,
	FrameCorner,
	FrameCenter,
	PillarTop,
	PillarBottom,

	RampBase,
	RampTop,
	RampEdge,

	DoorOpening,
	WindowOpening,

	Custom
};
