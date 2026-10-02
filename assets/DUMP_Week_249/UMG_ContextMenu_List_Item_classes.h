// WidgetBlueprintGeneratedClass UMG_ContextMenu_List_Item.UMG_ContextMenu_List_Item_C
struct UUMG_ContextMenu_List_Item_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Appear; 
	struct UOverlay* Content; 
	struct UOverlay* FeatureLevelOverlay; 
	struct UTextBlock* FeatureText; 
	struct UUMG_BasicButton_2_C* ListButton; 
	struct USizeBox* MainSizeBox; 
	struct UHorizontalBox* RepairCost; 
	struct FMulticastInlineDelegate OnWidgetSelected; 
	struct FMulticastInlineDelegate OnItemSelected; 
	struct FName ItemIdentifier; 
	int32_t ItemIndex; 
	int32_t ItemPayload; 

	struct FText GetDeployUsableName(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetItemData(int32_t ItemIndex, struct FContextMenuItemData ItemData); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__ListButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_ContextMenu_List_Item(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnItemSelected__DelegateSignature(struct FName Identifier, int32_t Payload); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnWidgetSelected__DelegateSignature(struct UUMG_ContextMenu_List_Item_C* ItemClicked); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

