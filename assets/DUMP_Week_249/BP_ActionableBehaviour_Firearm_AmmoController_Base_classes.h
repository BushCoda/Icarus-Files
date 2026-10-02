// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C : UBP_ActionableBehaviour_Firearm_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FTimerHandle ReloadTimer; 
	int32_t LocalCurrentAmmo; 
	bool Reloading; 
	bool RadialOpen; 
	struct FMulticastInlineDelegate OnReloadPressed; 
	struct FMulticastInlineDelegate NotifyReloadStart; 
	struct FMulticastInlineDelegate NotifyReloadEnd; 
	bool AbortReloadRequested; 
	bool AwaitingAutoReload; 
	struct UContextMenuWidget* CurrentContextMenu; 
	struct FName QuickbarInventoryActionId; 
	struct FName BackpackInventoryActionId; 
	struct FName ScaleReloadAnimMontageSectionName; 
	int32_t AmmoSlotIndex; 
	struct FItemData LastAmmoData; 
	struct FItemData ClientAmmoType; 
	bool OwnerReady; 
	bool InventoryReady; 
	int32_t CachedAmmoCount; 
	struct TSoftObjectPtr<UTexture2D> CachedAmmoIcon; 

	void GetCurrentAmmoInfo(struct TSoftObjectPtr<UTexture2D>& AmmoIcon, struct FText& CurrentAmmo, struct FText& TotalAmmo, struct FText& AmmoTextOverride, bool& HideReload, bool& IsFluid, struct FIcarusResourcesRowHandle& Resource, float& Percent); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetProjectileMeshOverride(struct TSoftObjectPtr<UStreamableRenderAsset>& OverrideMesh); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Get Ammo Warning Desc(struct FText& OutText); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnSprintUpdated(bool Sprinting); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateCachedAmmoInfo(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ClientCheckAmmoTypeChanged(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FindItemAndMoveToAmmoContainerFromInventory(int32_t Amount, struct FItemData ItemToFind, struct UInventory* SourceInventory, struct UInventory* DestinationInventory, int32_t& RemainingAmount); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TransferAmmoContainerToInventory(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TransferItemToAmmoContainer(struct FItemData ItemType, int32_t Amount); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FindValidAmmoData(struct FItemData AmmoType, bool& Found, struct FItemData& ItemType); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetCurrentAmmoItem(bool& SlotValid, struct FItemData& AmmoItemRef); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetWeaponInventoryContainer(struct UInventory*& Inventory); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetFiredProjectileInfo(bool& HasBallisticData, struct FBallisticData& BallisticData, int32_t& ProjectileCount, struct FVector2D& ProjectileAccuracy); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool WantsAutoReload(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetAutoReloadTime(float& FireRate); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void FindAmmoTypeToSwapTo(bool& FoundType, struct FItemData& AmmoType); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdatePersistentAudio(); // (Public|BlueprintCallable|BlueprintEvent)
	struct UInventory* GetInventoryFromName(struct FName InventoryName); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct FName GetNameForInventory(struct UInventory* Inventory); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ContextMenuAmmoSelected(struct FName ID, int32_t Payload); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ContextMenuUnloadSelected(struct FName ID, int32_t Payload); // (Public|BlueprintCallable|BlueprintEvent)
	void Open Ammo Select Menu(bool AsRadial, bool& Opened); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsAwaitingAutoReload(bool& waitingReload); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CanAbortReload(bool& CanAbort); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnAbortReloadRequested(); // (Public|BlueprintCallable|BlueprintEvent)
	void AutoReload(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheckReload(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FindValidAmmoDataByStatic(struct FItemsStaticRowHandle AmmoType, bool& Found, struct FItemData& ItemType); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetCurrentAmmoType(struct FItemData AmmoType); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup(struct AIcarusActor* ForOwner); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_Reloading(); // (BlueprintCallable|BlueprintEvent)
	void HandleShotRollback(); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckAmmo(bool bInitial); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateLocalAmmo(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TryReload(bool Force, bool ForceIfReloading); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ServerFinishReload(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	float GetReloadAnimPlayRate(struct UAnimMontage* Montage); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	float GetReloadTimeMultiplier(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ConsumeAmmo(int32_t Amount); // (Public|BlueprintCallable|BlueprintEvent)
	void SetCurrentAmmoCount(int32_t CurrentAmmo); // (Public|BlueprintCallable|BlueprintEvent)
	void GetInventoryAmmoCount(struct FItemData& ItemType, int32_t& Count); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	int32_t GetAmmoCapacity(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetCurrentAmmoCount(int32_t& CurrentAmmoCount); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void HasAnyReserveAmmo(bool& HasAnyReserve); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsReloading(bool& Reloading); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CanReload(bool& CanReload); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void HasAmmo(bool& HasAmmo); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnLoaded_3BD9368B4FF435E753B9509E9B0FBB43(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void OnInventoryItemAdded(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void OnTraitAnimNotify(struct FAnimNotifyEvent& Notify, struct AActor* AnimInstancePawn); // (Event|Public|HasOutParms|BlueprintEvent)
	void OnReloadStart(); // (BlueprintCallable|BlueprintEvent)
	void OnReloadEnd(); // (BlueprintCallable|BlueprintEvent)
	void HandleReloadAnimNotify(struct FString NotifyName); // (BlueprintCallable|BlueprintEvent)
	void LoadAndPlayReloadAnims(); // (BlueprintCallable|BlueprintEvent)
	void OnAmmoTypeChanged(); // (BlueprintCallable|BlueprintEvent)
	void Server_UnloadAmmoType(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Server_RequestNewAmmoType(struct FItemData NewAmmoType); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Client_ForceReload(); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void OnWeaponFired(); // (BlueprintCallable|BlueprintEvent)
	void LateSetup(); // (BlueprintCallable|BlueprintEvent)
	void Server_TryReload(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void TryAbortReload(); // (BlueprintCallable|BlueprintEvent)
	void Server_TryAbortReload(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void OnAmmoUnloaded(); // (BlueprintCallable|BlueprintEvent)
	void PlayReload(); // (BlueprintCallable|BlueprintEvent)
	void Local_PlayReload(); // (BlueprintCallable|BlueprintEvent)
	void OnShotRollback(); // (BlueprintCallable|BlueprintEvent)
	void MC_PlayReload(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void SprintToReload(); // (BlueprintCallable|BlueprintEvent)
	void OnWeaponInventoryAvailable(); // (BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void OnWeaponInventoryUpdated(); // (BlueprintCallable|BlueprintEvent)
	void Client_OnReloadEnd(int32_t NewAmmoCount); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void Server_TryReloadWithTimeStamp(float RequestTime); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Server_ClientSetReady(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Server_CheckInitComplete(); // (BlueprintCallable|BlueprintEvent)
	void OwningPlayerInventoryUpdated(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void Client_OnItemsUpdated(); // (BlueprintCallable|BlueprintEvent)
	void OnActionInsufficientDurability(enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void NotifyReloadEnd__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void NotifyReloadStart__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnReloadPressed__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

