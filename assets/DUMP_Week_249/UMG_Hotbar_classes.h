// WidgetBlueprintGeneratedClass UMG_Hotbar.UMG_Hotbar_C
struct UUMG_Hotbar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* FadeoutText; 
	struct UImage* divider; 
	struct UImage* divider_2; 
	struct UUMG_InventoryItem_C* HandsInventory; 
	struct UInvalidationBox* InvalidationBox_1; 
	struct UInvalidationBox* InvalidationBox_2; 
	struct UInvalidationBox* InvalidationBox_3; 
	struct UInvalidationBox* InvalidationBox_4; 
	struct UInvalidationBox* InvalidationBox_5; 
	struct UInvalidationBox* InvalidationBox_6; 
	struct UInvalidationBox* InvalidationBox_7; 
	struct UInvalidationBox* InvalidationBox_8; 
	struct UInvalidationBox* InvalidationBox_9; 
	struct UInvalidationBox* InvalidationBox_10; 
	struct UInvalidationBox* InvalidationBox_11; 
	struct UInvalidationBox* InvalidationBox_12; 
	struct UInvalidationBox* InvalidationBox_13; 
	struct UInvalidationBox* InvalidationBox_14; 
	struct UTextBlock* ItemHint; 
	struct UUMG_InventoryItem_C* UMG_InventoryItem; 
	struct UUMG_InventoryItem_C* UMG_InventoryItem_2; 
	struct UUMG_InventoryItem_C* UMG_InventoryItem_3; 
	struct UUMG_InventoryItem_C* UMG_InventoryItem_4; 
	struct UUMG_InventoryItem_C* UMG_InventoryItem_5; 
	struct UUMG_InventoryItem_C* UMG_InventoryItem_6; 
	struct UUMG_InventoryItem_C* UMG_InventoryItem_7; 
	struct UUMG_InventoryItem_C* UMG_InventoryItem_8; 
	struct UUMG_InventoryItem_C* UMG_InventoryItem_9; 
	struct UUMG_InventoryItem_C* UMG_InventoryItem_10; 
	struct UUMG_InventoryItem_C* UMG_InventoryItem_11; 
	struct UUMG_KeyBind_TextOnly_C* UMG_KeyBind_TextOnly; 
	struct UUMG_KeyBind_TextOnly_C* UMG_KeyBind_TextOnly_2; 
	struct UUMG_KeyBind_TextOnly_C* UMG_KeyBind_TextOnly_3; 
	struct UUMG_KeyBind_TextOnly_C* UMG_KeyBind_TextOnly_4; 
	struct UUMG_KeyBind_TextOnly_C* UMG_KeyBind_TextOnly_5; 
	struct UUMG_KeyBind_TextOnly_C* UMG_KeyBind_TextOnly_6; 
	struct UUMG_KeyBind_TextOnly_C* UMG_KeyBind_TextOnly_7; 
	struct UUMG_KeyBind_TextOnly_C* UMG_KeyBind_TextOnly_8; 
	struct UUMG_KeyBind_TextOnly_C* UMG_KeyBind_TextOnly_9; 
	struct UUMG_KeyBind_TextOnly_C* UMG_KeyBind_TextOnly_10; 
	struct UUMG_KeyBind_TextOnly_C* UMG_KeyBind_TextOnly_11; 
	struct UUMG_KeyBind_TextOnly_C* UMG_KeyBind_TextOnly_12; 
	struct UUMG_InventoryItem_C* VisionNew; 
	struct TArray<struct UUMG_InventoryItem_C*> Slots; 
	int32_t SelectedIndex; 
	struct UInventory* Inventory; 
	bool TextAnimationPlaying; 
	bool Intialised; 
	struct UInventory* VisionInventory; 

	void QuickShiftHandler(int32_t Location, struct UInventory* Inventory); // (Public|BlueprintCallable|BlueprintEvent)
	void ItemsModified(); // (Public|BlueprintCallable|BlueprintEvent)
	void Initialise(struct UInventory* BoundInventory); // (Public|BlueprintCallable|BlueprintEvent)
	void GetFocusedSlot(int32_t& FocusedSlot); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UnFocusSlot(); // (Public|BlueprintCallable|BlueprintEvent)
	void FocusSlot(int32_t SlotIndex, struct FItemData& FocusedItem); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetFocusedItem(struct FItemData& FocusedItem); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateFocus(); // (Public|BlueprintCallable|BlueprintEvent)
	void NavigateHotbar(bool Right, struct FItemData& FocusedItem, int32_t& NewSlot); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Finished_72A899084060253ECF1986A024942BB2(); // (BlueprintCallable|BlueprintEvent)
	void OnInitialized(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateFocusedText(); // (BlueprintCallable|BlueprintEvent)
	void FocusedItemUpdated(struct AIcarusItem* FocusedItem); // (BlueprintCallable|BlueprintEvent)
	void TryInitialiseEvents(); // (BlueprintCallable|BlueprintEvent)
	void HandleChangedSlots(struct UInventory* Inventory, struct TSet<int32_t>& ChangedSlotIndices); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_UMG_Hotbar(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

