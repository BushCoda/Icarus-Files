// WidgetBlueprintGeneratedClass UMG_FieldGuideItemsCategoryIconAndLabel.UMG_FieldGuideItemsCategoryIconAndLabel_C
struct UUMG_FieldGuideItemsCategoryIconAndLabel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Corner_Animation; 
	struct UBorder* BaseBorder; 
	struct UButton* Button; 
	struct UTextBlock* CategoryNameText; 
	struct UOverlay* Corner; 
	struct UImage* Corner_2; 
	struct UImage* Corner_3; 
	struct UImage* Corner_4; 
	struct UImage* Corner_5; 
	struct UBorder* InteractableFrame; 
	struct UImage* ItemIconDynamic; 
	struct UOverlay* ItemSlot; 
	struct FMulticastInlineDelegate FilterItems; 
	struct FFieldGuideCategoriesRowHandle CategoryRow; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_FieldGuideItemsCategoryIconAndLabel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_FieldGuideItemResourceIcon_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_FieldGuideItemResourceIcon_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItemsCategoryIconAndLabel(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void FilterItems__DelegateSignature(struct FFieldGuideCategoriesRowHandle CategoryRow, struct FItemsStaticRowHandle ItemRow); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

