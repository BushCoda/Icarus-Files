// WidgetBlueprintGeneratedClass UMG_FieldGuideItemResourceIcon.UMG_FieldGuideItemResourceIcon_C
struct UUMG_FieldGuideItemResourceIcon_C : UUserWidget {
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
	struct USizeBox* CraftAt; 
	struct UImage* CraftIcon; 
	struct UImage* HiddenIcon; 
	struct UBorder* InteractableFrame; 
	struct UImage* ItemIconDynamic; 
	struct UOverlay* ItemSlot; 
	struct UOverlay* MasterOverlay; 
	struct UTextBlock* Stack; 
	struct UUMG_FeatureLevelIcon_C* UMG_FeatureLevelIcon; 
	struct UUMG_TalentRequiredIcon_C* UMG_TalentRequiredIcon; 
	struct FItemsStaticRowHandle ItemRow; 
	struct FFieldGuideCategoriesRowHandle CategoryRow; 
	int32_t ItemCount; 
	struct FMulticastInlineDelegate FilterItems; 
	bool IsBench; 
	struct UMaterialInterface* ItemSlot_Exotic; 
	struct UMaterialInterface* ItemSlot_Exotic_Hovered; 
	struct UMaterialInterface* ItemSlot_Normal; 
	bool ExoticItem; 
	struct UMaterialInterface* ItemSlot_Hovered; 
	struct FAlterationsRowHandle Alteration; 
	struct FItemsStaticRowHandle ItemIconOverride; 
	struct FGameplayTagContainer GeneratedTags; 
	bool LegendaryItem; 
	struct UMaterialInterface* ItemSlot_Legendary; 
	struct UMaterialInterface* ItemSlot_Legendary_Hovered; 

	void BndEvt__UMG_FieldGuideItemResourceIcon_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_FieldGuideItemResourceIcon_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_FieldGuideItemResourceIcon_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItemResourceIcon(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void FilterItems__DelegateSignature(struct FFieldGuideCategoriesRowHandle Category, struct FItemsStaticRowHandle Item); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

