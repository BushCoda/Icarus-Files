// WidgetBlueprintGeneratedClass UMG_InventoryPourInto.UMG_InventoryPourInto_C
struct UUMG_InventoryPourInto_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_CloseButton_2_C* CloseButton; 
	struct UUMG_IconTextButton_C* DoFill; 
	struct UUMG_InventoryItemSlow_C* FillFromItem; 
	struct UUMG_IcarusGrid_C* FillToGrid; 
	struct UUMG_InventoryItemSlow_C* FillToItem; 
	struct UImage* Image_AlterationAttachment; 
	struct URichTextBlock* RichTextBlock_Transfer; 
	struct UUMG_InventorySeperator_C* UMG_InventorySeperator; 
	struct UUMG_InventorySeperator_C* UMG_InventorySeperator_2; 
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame; 
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame_142; 
	struct UInventory* FromInventory; 
	int32_t SelectedPourIndex; 

	void Update Text(struct FItemData From, struct FItemData To); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void LockUpInvItem(struct UUMG_InventoryItem_C* Item); // (Public|BlueprintCallable|BlueprintEvent)
	void GetSelectedSlotInfo(struct FFindItemSlotInfoInvType& SlotInfo); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DoTheFill(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Pour Index Changed(int32_t NewSelected); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Initialize(struct UInventory* PourFromInventory, int32_t PourFromInvSlot); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_InventoryPourInto_DoFill_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_InventoryPourInto_CloseButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_InventoryPourInto(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

