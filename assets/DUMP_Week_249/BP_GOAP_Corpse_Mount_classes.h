// BlueprintGeneratedClass BP_GOAP_Corpse_Mount.BP_GOAP_Corpse_Mount_C
struct ABP_GOAP_Corpse_Mount_C : ABP_GOAP_Corpse_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UIcarusMapIconComponent* IcarusMapIcon; 
	struct FName MountName; 

	void SetupMountCorpse(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnItemRemovedVerbose(struct UInventory* Inventory, int32_t Location, struct FItemData& Item); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnInventoryItemRemoved(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void Multi_Unstuck(struct FVector NewLocation); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_GOAP_Corpse_Mount(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

