// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C
struct UBP_ActionableBehaviour_Firearm_C : UActionableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusActor* OwningActor; 
	struct ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer; 
	int32_t LocalCurrentAmmo; 
	struct FFirearmData FirearmData; 
	bool CanFireSemiAuto; 
	bool Reloading; 
	struct FTimerHandle ReloadTimer; 
	bool Firing; 
	struct FTimerHandle FireCheckHandle; 
	float FireTime; 
	float AimAlpha; 
	bool RadialOpen; 
	int32_t ReloadAmount; 
	float ChargePower; 
	float LastChargePower; 
	float FullChargePowerTimeStamp; 
	bool LocalChargeCancel; 
	struct UMatineeCameraShake* CameraShake; 
	struct TArray<struct UObject*> LoadedAssets; 
	bool AssetsLoaded; 
	struct FItemsStaticRowHandle LocalAmmoType; 
	struct AIcarusItem* PreviewItem; 
	bool FireAnimPlaying; 
	struct FMulticastInlineDelegate ProjectileFired; 
	struct TMap<struct UFMODAudioComponent*, struct FFirearmSoundData> PersistentAudioComponents; 
	bool StaminaUsed; 
	struct FName QuickbarInventoryActionId; 
	struct FName BackpackInventoryActionId; 
	struct UContextMenuWidget* CurrentContextMenu; 
	int32_t HoldModifierUID; 

	void GetCurrentAmmoInfo(struct TSoftObjectPtr<UTexture2D>& AmmoIcon, struct FText& CurrentAmmo, struct FText& TotalAmmo, struct FText& AmmoTextOverride, bool& HideReload, bool& IsFluid, struct FIcarusResourcesRowHandle& Resource, float& Percent); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAmmorWarningDesc(struct FText& OutText); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FRotator ApplySpread(struct FRotator BaseAim); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void RemoveHoldModifier(); // (Public|BlueprintCallable|BlueprintEvent)
	void AddHoldModifier(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayUseWhenBrokenSound(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct UInventory* GetInventoryFromName(struct FName InventoryName); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct FName GetNameForInventory(struct UInventory* Inventory); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ContextMenuAmmoSelected(struct FName ActionId, int32_t Payload); // (Public|BlueprintCallable|BlueprintEvent)
	void ContextMenuUnloadSelected(struct FName ActionId, int32_t Payload); // (Public|BlueprintCallable|BlueprintEvent)
	void OpenAmmoContextMenu(bool AsRadial, bool& Opened); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Get Number Of Projeciles To Fire(int32_t& Number of Projectiles); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	float GetADSTimeMultiplier(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	float GetChargeTimeMultiplier(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	float GetReloadTimeMultiplier(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	int32_t GetStat(struct FStatsEnum Stat, bool WarnIfZero); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	int32_t GetStatAdjustedDurability(int32_t DurabilityLost); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	int32_t GetAmmoCapacity(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool IsToggleADS(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void AIStimulus(); // (Public|BlueprintCallable|BlueprintEvent)
	void StopPersistentAudio(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateAudioPerspective(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdatePersistentAudioReloading(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdatePersistentAudioCharge(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void StartPersistentAudio(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayFirearmSound(struct FFirearmSoundData FirearmSoundData); // (Public|BlueprintCallable|BlueprintEvent)
	void PlayNoFireAudio(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayFireAudio(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheckExistingAmmoType(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FRotator GetFireRotation(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	float GetAnimPlayRate(struct UAnimMontage* Anim, bool Reload); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CleanupPreviewItem(); // (Public|BlueprintCallable|BlueprintEvent)
	void DynamicDataUpdated(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AttachPreviewItem(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetPreviewItem(struct AIcarusItem* NewPreviewItem); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdatePreviewItem(bool Show); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FiredReload(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdatePostProcess(); // (Public|BlueprintCallable|BlueprintEvent)
	float GetLaunchForce(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void CancelCharging(); // (Public|BlueprintCallable|BlueprintEvent)
	void IsCharging(bool& Charging); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void TickCharge(); // (Public|BlueprintCallable|BlueprintEvent)
	void CaclulateReloadAmount(int32_t& ReloadAmount); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void AddAmmoToInventory(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetSelectedAmmoType(struct FItemData& AmmoItem, bool& ValidAmmoItem); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAssociatedInventory(struct UInventory*& Inventory); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AssociatedItemUpdated(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheckReload(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetCurrentAmmoType(struct FItemsStaticRowHandle FireMode); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FItemsStaticRowHandle GetCurrentAmmoType(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CheckCurrentProjectile(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetCurrentFireMode(enum class EFireMode FireMode); // (Public|BlueprintCallable|BlueprintEvent)
	enum class EFireMode GetCurrentFireMode(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetCurrentAmmo(int32_t CurrentAmmo); // (Public|BlueprintCallable|BlueprintEvent)
	int32_t GetCurrentAmmo(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetupFirearmData(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetupPlayer(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupOwner(struct AIcarusActor* Owner); // (Public|BlueprintCallable|BlueprintEvent)
	void IsADS(bool& ADS); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdatePostProcessing(); // (Public|BlueprintCallable|BlueprintEvent)
	void RemoveAmmoFromInventory(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReloadAmmo(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateLocalAmmo(); // (Public|BlueprintCallable|BlueprintEvent)
	void ResetReload(bool Completed); // (Public|BlueprintCallable|BlueprintEvent)
	void PlayReloadVisuals(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_Reloading(); // (BlueprintCallable|BlueprintEvent)
	void RemoveAmmoFromFirearm(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayFireVisuals(); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckFireAutomatic(); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckFire(bool FiringReleased); // (Public|BlueprintCallable|BlueprintEvent)
	void LocalOrServer(bool& Local, bool& Server); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnRep_Firing(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void TryReload(bool Force, bool ForceIfReloading); // (Public|BlueprintCallable|BlueprintEvent)
	void FindValidAmmoData(struct FItemsStaticRowHandle AmmoType, struct FItemsStaticRowHandle& ProjectileItem, bool& Found); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FireProjectile(struct FTransform SpawnTransform, bool ConsumeAmmo); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CanFire(bool& CanFire); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ClientTryFire(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	float GetFireRate(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ResetSemiAuto(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateADS(bool NewADS); // (Public|BlueprintCallable|BlueprintEvent)
	void GetInventoryAmmoCount(int32_t& TotalAmmo); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup(struct AIcarusActor* Owner); // (Public|BlueprintCallable|BlueprintEvent)
	void ProcessInput(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Public|BlueprintCallable|BlueprintEvent)
	void OnLoaded_2B8B2B624CE5F97DAE6892B7BB36C5DD(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_6DCFAB9D43B094CB3CF9C7816E1FA122(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_F09D9ADE44F875B5BE81EF89D157E20B(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_6DCFAB9D43B094CB3CF9C781ADBDE313(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyEnd_DCCE210F42A6F31E62C64DB21D2A8273(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_DCCE210F42A6F31E62C64DB21D2A8273(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_DCCE210F42A6F31E62C64DB21D2A8273(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_DCCE210F42A6F31E62C64DB21D2A8273(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_DCCE210F42A6F31E62C64DB21D2A8273(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyEnd_8C8C44024A5631C2A5012C85CDB54F1C(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_8C8C44024A5631C2A5012C85CDB54F1C(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_8C8C44024A5631C2A5012C85CDB54F1C(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_8C8C44024A5631C2A5012C85CDB54F1C(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_8C8C44024A5631C2A5012C85CDB54F1C(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_6DCFAB9D43B094CB3CF9C7818D49C043(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyEnd_6BBBC036452FB2EC7092AF8B3265C6A9(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_6BBBC036452FB2EC7092AF8B3265C6A9(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_6BBBC036452FB2EC7092AF8B3265C6A9(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_6BBBC036452FB2EC7092AF8B3265C6A9(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_6BBBC036452FB2EC7092AF8B3265C6A9(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_6DCFAB9D43B094CB3CF9C781FA2FC40D(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_6DCFAB9D43B094CB3CF9C7811370CA6E(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyEnd_D352811F43772AF9DF8FC3A758F63965(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_D352811F43772AF9DF8FC3A758F63965(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_D352811F43772AF9DF8FC3A758F63965(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_D352811F43772AF9DF8FC3A758F63965(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_D352811F43772AF9DF8FC3A758F63965(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyEnd_F1A7CE62495190E6CE5CD09C5C08D4CF(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_F1A7CE62495190E6CE5CD09C5C08D4CF(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_F1A7CE62495190E6CE5CD09C5C08D4CF(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_F1A7CE62495190E6CE5CD09C5C08D4CF(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_F1A7CE62495190E6CE5CD09C5C08D4CF(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void Multicast_PostFireProjectile(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void OwnerFireEffects(); // (BlueprintCallable|BlueprintEvent)
	void Server_RequestFireProjectile(struct FTransform SpawnTransform, bool ConsumeAmmo); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Server_RequestNewAmmoType(struct FItemsStaticRowHandle NewAmmoType); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void OnTraitAnimNotify(struct FAnimNotifyEvent& Notify, struct AActor* AnimInstancePawn); // (Event|Public|HasOutParms|BlueprintEvent)
	void ReloadTimerComplete(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void SERVER_SemiAuto(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void MULTICAST_SemiAuto(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void PlayReloadVisualsNew(); // (BlueprintCallable|BlueprintEvent)
	void OnInventoryItemAdded(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void Client_ForceReload(); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void ChangeFireMode(); // (BlueprintCallable|BlueprintEvent)
	void ChangeFireMode_Server(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void Server_UnloadAmmoType(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void OnActionInsufficientDurability(enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Firearm(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ProjectileFired__DelegateSignature(float Power); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

