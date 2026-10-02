// BlueprintGeneratedClass BP_Food_Trough.BP_Food_Trough_C
struct ABP_Food_Trough_C : ABP_DeployableContainerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTameInteractableComponent* TameInteractable; 
	struct UStaticMeshComponent* SM_DEP_Trough_Seeds_Proxy; 
	struct UAudioOcclusionComponent* AudioOcclusion1; 
	struct UInventoryComponent* InventoryComponent; 
	bool TroughContainsFood; 
	struct UStaticMesh* Filled_Mesh; 
	struct UStaticMesh* Empty_Mesh; 
	struct FTimerHandle PendingUpdateTimer; 

	void UpdateFoodVisibility(bool Visible); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_TroughContainsFood(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateProxyMeshVisibility(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnInventoryItemsUpdated(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Food_Trough(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

