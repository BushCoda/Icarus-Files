// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C
struct UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C : UBP_ActionableBehaviour_Firearm_AmmoController_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusItem* PreviewItem; 

	void RefundAmmo(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetupPlayer(); // (Public|BlueprintCallable|BlueprintEvent)
	void ConsumeAmmo(int32_t Amount); // (Public|BlueprintCallable|BlueprintEvent)
	void AttachPreviewItem(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetPreviewItem(struct AIcarusItem* NewPreviewItem); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdatePreviewItem(bool Show); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CleanupPreviewItem(); // (Public|BlueprintCallable|BlueprintEvent)
	int32_t GetAmmoCapacity(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetPreviewItemVisible(bool Visible); // (Public|BlueprintCallable|BlueprintEvent)
	void OnReloadStart(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void OnAmmoTypeChanged(); // (BlueprintCallable|BlueprintEvent)
	void OnWeaponFired(); // (BlueprintCallable|BlueprintEvent)
	void OnAmmoUnloaded(); // (BlueprintCallable|BlueprintEvent)
	void OnWeaponInventoryUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

