// WidgetBlueprintGeneratedClass UMG_InventoryPaperDoll.UMG_InventoryPaperDoll_C
struct UUMG_InventoryPaperDoll_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_EquipmentSlots_C* ArmsSlot; 
	struct UUMG_EquipmentSlots_Virtual_C* ArmsSlot_V; 
	struct UUMG_EquipmentSlots_C* BackSlot; 
	struct UUMG_EquipmentSlots_Virtual_C* BackSlot_V; 
	struct UUMG_EquipmentSlots_C* ChestSlot; 
	struct UUMG_EquipmentSlots_Virtual_C* ChestSlot_V; 
	struct UUMG_EquipmentSlots_C* FeetSlot; 
	struct UUMG_EquipmentSlots_Virtual_C* FeetSlot_V; 
	struct UUMG_EquipmentSlots_C* HeadSlot; 
	struct UUMG_EquipmentSlots_Virtual_C* HeadSlot_V; 
	struct UHorizontalBox* HorizontalBox_Button; 
	struct UUniformGridPanel* LeftGrid; 
	struct UUniformGridPanel* LeftGrid_Virtual; 
	struct UUMG_EquipmentSlots_C* LegsSlot; 
	struct UUMG_EquipmentSlots_Virtual_C* LegsSlot_V; 
	struct UUniformGridPanel* RightGrid; 
	struct UUniformGridPanel* RightGrid_Virtual; 
	struct UImage* SlotImage; 
	struct UImage* SlotImage_2; 
	struct UImage* SlotImage_3; 
	struct UImage* SlotImage_4; 
	struct UImage* SlotImage_5; 
	struct UImage* SlotImage_6; 
	struct UImage* SlotImage_7; 
	struct UImage* SlotImage_8; 
	struct UImage* SlotImage_9; 
	struct UImage* SlotImage_10; 
	struct UImage* SlotImage_11; 
	struct UImage* SlotImage_12; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_Switch; 
	struct UWidgetSwitcher* WidgetSwitcher_2; 
	struct FMulticastInlineDelegate QuickShiftHandler; 
	struct UUMG_UserInterface_C* UserInterface; 
	bool HasRegisteredListener; 
	struct TMap<int32_t, struct UUMG_EquipmentSlots_C*> SlotsMapping; 
	int32_t HeadSlotIndex; 
	int32_t ChestSlotIndex; 
	int32_t ArmsSlotIndex; 
	int32_t LegsSlotIndex; 
	int32_t FeetSlotIndex; 
	int32_t BackSlotIndex; 
	bool OffsetSlots; 
	int32_t RightColumnSlotIndex; 
	bool SupportsVirtualEquipment; 

	void UMG_InventoryPaperDoll_AutoGenFunc(int32_t CurrentLocation, struct UInventory* Inventory); // (Public|BlueprintCallable|BlueprintEvent)
	void Initialize(struct UInventory* BoundInventory); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void HandleChangedSlots(struct UInventory* Inventory, struct TSet<int32_t>& ChangedSlotIndices); // (Event|Public|HasOutParms|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_InventoryPaperDoll_UMG_BasicButton_Switch_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SetCosmeticArmourVisible(bool InBool); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_InventoryPaperDoll(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void QuickShiftHandler__DelegateSignature(int32_t CurrentLocation, struct UInventory* Inventory); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

