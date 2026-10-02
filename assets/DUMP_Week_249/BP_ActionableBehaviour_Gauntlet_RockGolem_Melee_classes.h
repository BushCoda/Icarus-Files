// BlueprintGeneratedClass BP_ActionableBehaviour_Gauntlet_RockGolem_Melee.BP_ActionableBehaviour_Gauntlet_RockGolem_Melee_C
struct UBP_ActionableBehaviour_Gauntlet_RockGolem_Melee_C : UBP_ActionableBehaviour_Gauntlet_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	int32_t CurrentChargeCount; 
	enum class EVoxelResourceCategory CurrentChargeType; 
	int32_t LastModifierUID; 
	struct AVoxelResource* LastHitVoxelResource; 

	void GetCurrentAmmoInfo(struct TSoftObjectPtr<UTexture2D>& AmmoIcon, struct FText& CurrentAmmo, struct FText& TotalAmmo, struct FText& AmmoTextOverride, bool& HideReload, bool& IsFluid, struct FIcarusResourcesRowHandle& Resource, float& Percent); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ResetLastHitVoxel(); // (Public|BlueprintCallable|BlueprintEvent)
	void ApplyVoxelChargeModifier(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool ShouldConsumeActionInput(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ConsumeCharge(); // (Public|BlueprintCallable|BlueprintEvent)
	void MaxChargeCount(int32_t& MaxCharges); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void OnRep_CurrentChargeType(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_CurrentChargeCount(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnActionHitEvent(struct AActor* Invoking Actor, struct UPrimitiveComponent* OverlappedComponent , struct FHitResult& SweepResult, struct UTraitBehaviour* TraitBehaviour); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void MULTI_Play Collect Ammo Audio(struct FVector Location); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void Client_WrongVoxelType(); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Gauntlet_RockGolem_Melee(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

