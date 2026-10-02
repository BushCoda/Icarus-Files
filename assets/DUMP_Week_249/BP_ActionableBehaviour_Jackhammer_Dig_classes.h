// BlueprintGeneratedClass BP_ActionableBehaviour_Jackhammer_Dig.BP_ActionableBehaviour_Jackhammer_Dig_C
struct UBP_ActionableBehaviour_Jackhammer_Dig_C : UBP_ActionableBehaviour_Chainsaw_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float TICK_RATE; 

	void GetCurrentAmmoInfo(struct TSoftObjectPtr<UTexture2D>& AmmoIcon, struct FText& CurrentAmmo, struct FText& TotalAmmo, struct FText& AmmoTextOverride, bool& HideReload, bool& IsFluid, struct FIcarusResourcesRowHandle& Resource, float& Percent); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ConditionalRepDotHit(bool GotHit); // (Public|BlueprintCallable|BlueprintEvent)
	void InvokeHit(struct FHitResult Hit); // (Public|BlueprintCallable|BlueprintEvent)
	void GetStatAdjustedDamageTimerFreq(float& TickTime); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool CheckEnoughFuel(int32_t& FuelUsed); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Jackhammer_Dig(int32_t EntryPoint); // (Final|UbergraphFunction)
};

