// BlueprintGeneratedClass BP_Building_Frame.BP_Building_Frame_C
struct ABP_Building_Frame_C : ABP_Building_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBPC_EnvironmentalBuildup_C* BPC_EnvironmentalBuildup; 
	struct UNiagaraComponent* Niagara; 
	struct UStaticMeshComponent* SM_XPlane5; 
	struct UStaticMeshComponent* SM_XPlane4; 
	struct UStaticMeshComponent* SM_XPlane3; 
	struct UStaticMeshComponent* SM_XPlane2; 
	struct UStaticMeshComponent* SM_XPlane1; 
	struct UStaticMeshComponent* SM_XPlane; 
	bool TopOrBottomHit; 
	bool TopHit; 
	bool Bottomhit; 
	struct TMap<struct ABP_Building_Base_C*, int32_t> RemoteAnchorBuildingDistanceMap; 

	int32_t ExtraSoftHeightCalc(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ApplySoftHeightLimits(); // (Public|BlueprintCallable|BlueprintEvent)
	void CalculateDistanceToRealAnchor(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CombineRemoteAnchorDistanceMaps(struct ABP_Building_Base_C* OtherBuilding); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReinitAllAbove(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShouldRotate(enum class RotationalDirections Direction, struct FTransform GridSpaceTrans, struct ABP_Building_Base_C* NewBuilding, float HitDistanceFromCenter, struct FVector Dots, struct FRotator WorldRotToTest, struct FRotator GridspaceRotTestAgainst, struct FVector RawHitNormal, struct ACharacter* Player, struct FTransform& Shifted, bool& WantsBlockLikePlacement, struct FTransform& BlockLikePlacementExtra); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OptionallyRotateCenterUpToInpactNormal(struct FVector HitNormal, struct FRotator& CenterWorldRotation, struct FRotator& ZRotatedDifference, bool& ImpactWasAlreadyRotated); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GrabLowerAnchorBaseReferences(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SpreadAnchorBaseReferencesUp(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void StartDestruction(struct AIcarusPlayerController* TriggeringPlayer, enum class EBuildingDestroyReason DestroyReason); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void InitAnchorStability(); // (Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Building_Frame(int32_t EntryPoint); // (Final|UbergraphFunction)
};

