// BlueprintGeneratedClass BP_Building_Floor.BP_Building_Floor_C
struct ABP_Building_Floor_C : ABP_Building_Base_C {
	struct UBPC_EnvironmentalBuildup_C* BPC_EnvironmentalBuildup; 
	struct UNiagaraComponent* NS_spreadableFire_floor; 
	struct UStaticMeshComponent* SM_XPlane1; 
	struct UStaticMeshComponent* SM_XPlane; 

	void ShouldRotate(enum class RotationalDirections Direction, struct FTransform GridSpaceTrans, struct ABP_Building_Base_C* NewBuilding, float HitDistanceFromCenter, struct FVector Dots, struct FRotator WorldRotToTest, struct FRotator GridspaceRotTestAgainst, struct FVector RawHitNormal, struct ACharacter* Player, struct FTransform& Shifted, bool& WantsBlockLikePlacement, struct FTransform& BlockLikePlacementExtra); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

