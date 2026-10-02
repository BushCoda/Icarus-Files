// BlueprintGeneratedClass BP_Building_Beam_Cross_Diagnal.BP_Building_Beam_Cross_Diagnal_C
struct ABP_Building_Beam_Cross_Diagnal_C : ABP_Building_Beam_Diagnal_C {

	void GetBlockingBypass(struct ABP_Building_Base_C* BuildingClass, struct TArray<struct FVectorPair>& BlockingPreRotate, struct FTransform GridSpaceTransform, struct TArray<struct FVectorPair>& BypassBlocking); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShouldRotate(enum class RotationalDirections Direction, struct FTransform GridSpaceTrans, struct ABP_Building_Base_C* NewBuilding, float HitDistanceFromCenter, struct FVector Dots, struct FRotator WorldRotToTest, struct FRotator GridspaceRotTestAgainst, struct FVector RawHitNormal, struct ACharacter* Player, struct FTransform& Shifted, bool& WantsBlockLikePlacement, struct FTransform& BlockLikePlacementExtra); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

