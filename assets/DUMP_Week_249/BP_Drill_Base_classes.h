// BlueprintGeneratedClass BP_Drill_Base.BP_Drill_Base_C
struct ABP_Drill_Base_C : ABP_Deployable_PowerToggleableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* DrillActiveAudio; 
	struct UCameraComponent* Camera; 
	bool IsActive; 
	float CurrentTime; 
	float MaxTime; 
	struct UFMODEvent* FMODEvent_Stop; 
	struct UFMODEvent* FMODEvent_GenerateItem; 
	struct UInventory* OreInventory; 
	struct UInventory* FuelInventory; 
	struct FStatsEnum DrillSpeedStat; 
	bool IsEnergyDrill; 
	struct FIcarusResourcesEnum FuelType; 
	float CachedAreaLevelMultiplier; 
	struct FRandomStream RandomStream; 
	struct FItemData ResourceItem; 
	bool CachedHasInventorySpace; 
	bool HasInitialised; 

	void Cache Resource Item(bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAreaLevel(); // (Public|BlueprintCallable|BlueprintEvent)
	void AreaLevelMultiplier(float& Multiplier); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IsFunctional(bool& bFunctional); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CanStartDrill(bool& CanStart); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void HasAnyRemainingInventorySpaceForOre(bool& HasAnyRemainingSpace); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetDrillActive(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateMiningRateFromResourceType(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void HasAnyResourcesRemaining(bool& HasResourcesRemaining); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PlayGenerateItemSFX(); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GenerateItem(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_IsActive(); // (BlueprintCallable|BlueprintEvent)
	void ActiveStateUpdated(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void MULTI_PlayGenerateItemFX(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void OnOutOfResources(); // (BlueprintCallable|BlueprintEvent)
	void OnOutOfInventorySpace(); // (BlueprintCallable|BlueprintEvent)
	void OnGainedInventorySpace(); // (BlueprintCallable|BlueprintEvent)
	void RestartDrill(); // (BlueprintCallable|BlueprintEvent)
	void ShutdownDrill(); // (BlueprintCallable|BlueprintEvent)
	void OnInventoryModified(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void OnRestoreFoundationFromDatabase(struct AIcarusActor* FoundationFromDatabase); // (Event|Public|BlueprintEvent)
	void DeployableTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void OnDeviceStartRunning(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceStopRunning(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceTurnedOn(); // (BlueprintCallable|BlueprintEvent)
	void OnGeneratorActiveStateUpdated(bool IsActive); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ForceInitialise(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Drill_Base(int32_t EntryPoint); // (Final|UbergraphFunction)
};

