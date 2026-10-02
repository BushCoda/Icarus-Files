// BlueprintGeneratedClass BP_Deployable_SpawnBlocker_T2.BP_Deployable_SpawnBlocker_T2_C
struct ABP_Deployable_SpawnBlocker_T2_C : ABP_Deployable_SpawnBlocker_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UCameraComponent* Camera; 
	struct UNiagaraComponent* NS_Smelly; 

	void UpdateSpawnBlockerEffects(); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckBlockerActive(); // (Public|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void GeneratorStateUpdate(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnFuelInventoryUpdated(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceOnStateChanged(bool bIsOn); // (BlueprintCallable|BlueprintEvent)
	void OutOfFuelCheck(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Deployable_SpawnBlocker_T2(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

