// BlueprintGeneratedClass BP_Deployable_SpawnBlocker_Scarecrow.BP_Deployable_SpawnBlocker_Scarecrow_C
struct ABP_Deployable_SpawnBlocker_Scarecrow_C : ABP_Deployable_SpawnBlocker_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCameraComponent* Camera; 

	void CheckBlockerActive(); // (Public|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void GeneratorStateUpdate(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnFuelInventoryUpdated(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceOnStateChanged(bool bIsOn); // (BlueprintCallable|BlueprintEvent)
	void OutOfFuelCheck(); // (BlueprintCallable|BlueprintEvent)
	void ItemAdded(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void AddFuelAudio(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Deployable_SpawnBlocker_Scarecrow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

