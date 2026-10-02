// WidgetBlueprintGeneratedClass UMG_InventoryItemSlow.UMG_InventoryItemSlow_C
struct UUMG_InventoryItemSlow_C : UUMG_InventoryItem_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool NeedsUpdate; 

	void Initialise (struct UInventory* BoundInventory, int32_t Location); // (Public|BlueprintCallable|BlueprintEvent)
	void OnInventoryUpdated(struct UInventory* Inventory); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnInventoryItemUpdated(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_InventoryItemSlow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

