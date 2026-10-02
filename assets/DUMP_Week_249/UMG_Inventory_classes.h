// WidgetBlueprintGeneratedClass UMG_Inventory.UMG_Inventory_C
struct UUMG_Inventory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UOverlay* HighlightFlagOverlay; 
	struct UVerticalBox* InventoryDisplay; 
	int32_t PreviewSlotCount; 
	int32_t SlotsX; 
	struct UInventory* Inventory; 
	struct TArray<struct UUMG_InventoryItem_C*> Slots; 
	struct UUMG_InventoryGrid_C* CurrentGrid; 
	bool PreviousSlotable; 
	struct FTagQueriesRowHandle PreviousQuery; 
	struct FSessionFlagsRowHandle HighlightFlag; 
	struct UUMG_QuestHelper_C* QuestHelper; 
	bool DisplayOnly; 
	bool AllowContextMenuWhileLocked; 
	bool ManageChildSlotUpdates; 
	struct AIcarusHUD* RegisteredWithHUD; 
	bool DisableContextMenu; 

	void Re-Initialise(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddToGrid(struct UUMG_InventoryItem_C* WidgetSlot, struct FInventorySlot SlotInfo); // (Public|BlueprintCallable|BlueprintEvent)
	void AddInventorySlots(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnInventoryMove(int32_t Location, struct UInventory* Inventory); // (Public|BlueprintCallable|BlueprintEvent)
	void Initialise(struct UInventory* NewInventory); // (Public|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BindToInventorySlotChange(); // (BlueprintCallable|BlueprintEvent)
	void Reinit(struct UInventory* Inventory); // (BlueprintCallable|BlueprintEvent)
	void HandleChangedSlots(struct UInventory* Inventory, struct TSet<int32_t>& ChangedSlotIndices); // (Event|Public|HasOutParms|BlueprintEvent)
	void Destruct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_Inventory(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

