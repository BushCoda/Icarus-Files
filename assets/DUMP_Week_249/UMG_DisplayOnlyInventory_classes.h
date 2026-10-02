// WidgetBlueprintGeneratedClass UMG_DisplayOnlyInventory.UMG_DisplayOnlyInventory_C
struct UUMG_DisplayOnlyInventory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UOverlay* HighlightFlagOverlay; 
	struct UVerticalBox* InventoryDisplay; 
	int32_t PreviewSlotCount; 
	int32_t SlotsX; 
	struct TArray<struct UUMG_InventoryItem_C*> Slots; 
	struct UUMG_InventoryGrid_C* CurrentGrid; 
	struct FSessionFlagsRowHandle HighlightFlag; 
	struct TArray<struct FItemData> Items; 

	void Re-Initialise(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddToGrid(struct UUMG_InventoryItem_C* WidgetSlot); // (Public|BlueprintCallable|BlueprintEvent)
	void AddInventorySlots(); // (Public|BlueprintCallable|BlueprintEvent)
	void Initialise(); // (Public|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SetItems(struct TArray<struct FItemData>& ItemsToShow); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_DisplayOnlyInventory(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

