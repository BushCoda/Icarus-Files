// WidgetBlueprintGeneratedClass UMG_FieldGuideItemResourceQueryIcon.UMG_FieldGuideItemResourceQueryIcon_C
struct UUMG_FieldGuideItemResourceQueryIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Corner_Animation; 
	struct UBorder* BaseBorder; 
	struct UButton* Button; 
	struct UOverlay* Corner; 
	struct UImage* Corner_2; 
	struct UImage* Corner_3; 
	struct UImage* Corner_4; 
	struct UImage* Corner_5; 
	struct UBorder* CountContainer; 
	struct UBorder* InteractableFrame; 
	struct UImage* ItemIconDynamic; 
	struct UOverlay* ItemSlot; 
	struct UOverlay* MasterOverlay; 
	struct UTextBlock* Stack; 
	int32_t ItemCount; 
	struct FMulticastInlineDelegate FilterItems; 
	struct UMaterialInterface* ItemSlot_Exotic; 
	struct UMaterialInterface* ItemSlot_Normal; 
	bool ExoticItem; 
	struct UMaterialInterface* ItemSlot_Exotic_Hovered; 
	struct UMaterialInterface* ItemSlot_Hovered; 
	struct FCraftingTagsRowHandle CraftingTagRow; 

	void BndEvt__UMG_FieldGuideItemResourceIcon_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_FieldGuideItemResourceIcon_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItemResourceQueryIcon(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void FilterItems__DelegateSignature(struct FFieldGuideCategoriesRowHandle Category, struct FItemsStaticRowHandle Item); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

