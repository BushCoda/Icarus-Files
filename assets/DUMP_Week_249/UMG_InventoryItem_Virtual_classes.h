// WidgetBlueprintGeneratedClass UMG_InventoryItem_Virtual.UMG_InventoryItem_Virtual_C
struct UUMG_InventoryItem_Virtual_C : UUMG_InventoryItem_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UInventory* VirtualTargetInventory; 
	int32_t VirtualInventorySlot; 

	void ClearItemData(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Update(struct FItemData Item Reference, struct FItemsStaticRowHandle Last Item); // (Public|BlueprintCallable|BlueprintEvent)
	void InitialiseWithItemData(struct FItemData ItemData, struct UInventory* VirtualTargetInventory, int32_t VirtualInventorySlot); // (Public|BlueprintCallable|BlueprintEvent)
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void Trigger Hover(); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_InventoryItem_Virtual(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

