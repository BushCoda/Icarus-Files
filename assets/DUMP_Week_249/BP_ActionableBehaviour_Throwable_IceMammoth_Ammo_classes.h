// BlueprintGeneratedClass BP_ActionableBehaviour_Throwable_IceMammoth_Ammo.BP_ActionableBehaviour_Throwable_IceMammoth_Ammo_C
struct UBP_ActionableBehaviour_Throwable_IceMammoth_Ammo_C : UBP_ActionableBehaviour_Throwable_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FItemsStaticRowHandle AmmoItemData; 
	struct UFMODEvent* NoAmmoSound; 
	bool HasShownNoAmmoMessage; 

	void GetCurrentAmmoInfo(struct TSoftObjectPtr<UTexture2D>& AmmoIcon, struct FText& CurrentAmmo, struct FText& TotalAmmo, struct FText& AmmoTextOverride, bool& HideReload, bool& IsFluid, struct FIcarusResourcesRowHandle& Resource, float& Percent); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShowNoAmmoWarning(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayNoAmmoSound(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool ShouldConsumeActionInput(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void HasIceAmmo(bool& GotIce); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CanThrow(bool& CanThrow); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Consume Ice Ammo(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void WantsBowMode(bool& bWantsBowMode); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void WantsShowCrosshair(bool& bShowCrosshair); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void DoThrow(struct FTransform SpawnTransform, float Power); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup(struct AActor* OwningActor); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Throwable_IceMammoth_Ammo(int32_t EntryPoint); // (Final|UbergraphFunction)
};

