// BlueprintGeneratedClass BP_ActionableBehaviour_Gauntlet_RockGolem_BiofuelMelee.BP_ActionableBehaviour_Gauntlet_RockGolem_BiofuelMelee_C
struct UBP_ActionableBehaviour_Gauntlet_RockGolem_BiofuelMelee_C : UBP_ActionableBehaviour_Gauntlet_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FTimerHandle NoFuelTimerHandle; 

	void GetCurrentAmmoInfo(struct TSoftObjectPtr<UTexture2D>& AmmoIcon, struct FText& CurrentAmmo, struct FText& TotalAmmo, struct FText& AmmoTextOverride, bool& HideReload, bool& IsFluid, struct FIcarusResourcesRowHandle& Resource, float& Percent); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void HasFuel(bool& HasFuel); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ProcessFuel(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnActionHit(struct AActor* InvokingActor, struct UPrimitiveComponent* OverlappedComponent, struct FHitResult& SweepResult, struct UTraitBehaviour* InstigatingBehaviour); // (Event|Public|HasOutParms|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Gauntlet_RockGolem_BiofuelMelee(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

