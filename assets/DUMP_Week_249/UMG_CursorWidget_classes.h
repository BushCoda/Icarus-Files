// WidgetBlueprintGeneratedClass UMG_CursorWidget.UMG_CursorWidget_C
struct UUMG_CursorWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetSwitcher* InventoryItemBox; 
	struct UUMG_InventoryItemSlow_C* UMG_InventoryItemSlow; 
	struct UUMG_InventoryItem_C* ItemWidget; 
	struct UInventory* CurrentInventory; 
	int32_t CurrentLocation; 
	int32_t Count; 

	void Clear(); // (Public|BlueprintCallable|BlueprintEvent)
	void DragItem(struct UInventory* Inventory, int32_t Location, struct UUMG_InventoryItem_C* Item, int32_t Count); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Update(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Initialise(); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnWindowLostFocus(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_CursorWidget(int32_t EntryPoint); // (Final|UbergraphFunction)
};

