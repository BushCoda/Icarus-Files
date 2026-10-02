// BlueprintGeneratedClass BP_Building_Ramp.BP_Building_Ramp_C
struct ABP_Building_Ramp_C : ABP_Building_Base_C {
	struct UBPC_EnvironmentalBuildup_C* BPC_EnvironmentalBuildup; 
	struct UNiagaraComponent* Niagara; 
	struct UStaticMeshComponent* SM_XPlane1; 
	struct UStaticMeshComponent* SM_XPlane; 

	void GetBlockingBypass(struct ABP_Building_Base_C* BuildingClass, struct TArray<struct FVectorPair>& BlockingPreRotate, struct FTransform GridSpaceTransform, struct TArray<struct FVectorPair>& BypassBlocking); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShouldRotate(enum class RotationalDirections Direction, struct FTransform GridSpaceTrans, struct ABP_Building_Base_C* NewBuilding, float HitDistanceFromCenter, struct FVector Dots, struct FRotator WorldRotToTest, struct FRotator GridspaceRotTestAgainst, struct FVector RawHitNormal, struct ACharacter* Player, struct FTransform& Shifted, bool& WantsBlockLikePlacement, struct FTransform& BlockLikePlacementExtra); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

