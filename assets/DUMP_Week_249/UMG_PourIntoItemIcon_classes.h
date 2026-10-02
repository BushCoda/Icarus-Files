// WidgetBlueprintGeneratedClass UMG_PourIntoItemIcon.UMG_PourIntoItemIcon_C
struct UUMG_PourIntoItemIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* HoverBack; 
	struct UWidgetAnimation* Corner_Animation; 
	struct UBorder* BaseBorder; 
	struct UButton* Button; 
	struct UOverlay* Corner; 
	struct UBorder* InteractableFrame; 
	struct UImage* ItemIconDynamic; 
	struct UOverlay* ItemSlot; 
	struct UOverlay* MasterOverlay; 
	struct UUMG_FillableProgressBar_C* UMG_FillableProgressBar; 
	struct UMaterialInterface* ItemSlot_Normal; 
	struct UMaterialInterface* ItemSlot_Hovered; 
	struct FItemData ItemReference; 
	bool SelectedForPour; 
	struct FMulticastInlineDelegate PourSelected; 
	struct FInventoryIDEnum InventoryID; 
	int32_t InventorySlot; 

	void GetItem(struct FItemData& ItemReference); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateSelectedPour(); // (Public|BlueprintCallable|BlueprintEvent)
	void IsFull(bool& Full); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_PourIntoItemIcon_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_PourIntoItemIcon_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_PourIntoItemIcon_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_PourIntoItemIcon(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void PourSelected__DelegateSignature(int32_t SelectedIndex); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

