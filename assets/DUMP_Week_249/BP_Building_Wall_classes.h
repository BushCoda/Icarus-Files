// BlueprintGeneratedClass BP_Building_Wall.BP_Building_Wall_C
struct ABP_Building_Wall_C : ABP_Building_Base_C {
	struct UNiagaraComponent* Niagara; 
	struct UStaticMeshComponent* SM_XPlane1; 
	struct UStaticMeshComponent* SM_XPlane; 

	void DecideShifting(struct FRotator RotationToTest(world), struct FRotator RotationTestingAgainst(gridspace), struct FTransform GridSpaceLOCHitPlaneRot, struct ABP_Building_Base_C* Building Class, float DistanceBetweenHitAndCenter, struct FVector RawHitNormal, struct ACharacter* Player, struct FTransform& GridSpaceLOCWithGridSpaceRot, enum class RotationalDirections& RelativeRotationEnum, bool& WantsBlockLikePlacement, struct FTransform& BlockLikePlacementExtraDelta); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool IsBuildingOutside(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShouldRotate(enum class RotationalDirections Direction, struct FTransform GridSpaceTrans, struct ABP_Building_Base_C* NewBuilding, float HitDistanceFromCenter, struct FVector Dots, struct FRotator WorldRotToTest, struct FRotator GridspaceRotTestAgainst, struct FVector RawHitNormal, struct ACharacter* Player, struct FTransform& Shifted, bool& WantsBlockLikePlacement, struct FTransform& BlockLikePlacementExtra); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

