// BlueprintGeneratedClass BP_Food_Trough_T4_New.BP_Food_Trough_T4_New_C
struct ABP_Food_Trough_T4_New_C : ABP_ResourceNetworkProcessor_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_DEP_Trough_Seeds_Proxy; 
	struct UTameInteractableComponent* TameInteractable; 
	struct UFMODAudioComponent* AudioFoodTroughActive; 
	struct FTimerHandle PendingUpdateTimer; 
	struct UInventoryComponent* InventoryComponent; 
	bool TroughContainsFood; 

	void UpdateEffects(bool EnergyFlowChanged, bool ProcessorActiveChanged); // (Public|BlueprintCallable|BlueprintEvent)
	void OnContainsFoodUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_TroughContainsFood(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateProxyMeshVisibility(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ProcessorInventoryUpdated(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void OnInventoryItemsUpdated(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Food_Trough_T4_New(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

