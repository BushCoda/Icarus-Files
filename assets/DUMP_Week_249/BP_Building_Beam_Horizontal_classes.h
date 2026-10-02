// BlueprintGeneratedClass BP_Building_Beam_Horizontal.BP_Building_Beam_Horizontal_C
struct ABP_Building_Beam_Horizontal_C : ABP_Building_Beam_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void DecideShifting(struct FRotator RotationToTest(world), struct FRotator RotationTestingAgainst(gridspace), struct FTransform GridSpaceLOCHitPlaneRot, struct ABP_Building_Base_C* Building Class, float DistanceBetweenHitAndCenter, struct FVector RawHitNormal, struct ACharacter* Player, struct FTransform& GridSpaceLOCWithGridSpaceRot, enum class RotationalDirections& RelativeRotationEnum, bool& WantsBlockLikePlacement, struct FTransform& BlockLikePlacementExtraDelta); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShouldRotate(enum class RotationalDirections Direction, struct FTransform GridSpaceTrans, struct ABP_Building_Base_C* NewBuilding, float HitDistanceFromCenter, struct FVector Dots, struct FRotator WorldRotToTest, struct FRotator GridspaceRotTestAgainst, struct FVector RawHitNormal, struct ACharacter* Player, struct FTransform& Shifted, bool& WantsBlockLikePlacement, struct FTransform& BlockLikePlacementExtra); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Building_Beam_Horizontal(int32_t EntryPoint); // (Final|UbergraphFunction)
};

