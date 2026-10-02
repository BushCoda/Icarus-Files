// WidgetBlueprintGeneratedClass UMG_FieldGuideItemResourceDescription.UMG_FieldGuideItemResourceDescription_C
struct UUMG_FieldGuideItemResourceDescription_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* BaseBorder; 
	struct UButton* Button; 
	struct UBorder* CountContainer; 
	struct UTextBlock* CountText; 
	struct UBorder* InteractableFrame; 
	struct UImage* ItemIconDynamic; 
	struct UOverlay* ItemSlot; 
	struct UOverlay* MasterOverlay; 
	struct FMulticastInlineDelegate FilterItems; 
	struct FItemableRowHandle Itemable; 
	int32_t StackCount; 
	struct FText OverrideText; 
	struct FFieldGuideCategoriesRowHandle CategoryRow; 
	struct FItemsStaticRowHandle ItemRow; 
	struct FAlterationsRowHandle Alteration; 

	void SetSeed(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetupAlteration(struct FItemsStaticRowHandle Item, struct FAlterationsRowHandle Alteration); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetItemLinkInfo(struct FItemsStaticRowHandle Item, struct FFieldGuideCategoriesRowHandle Category); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_FieldGuideItemResourceDescription_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItemResourceDescription(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void FilterItems__DelegateSignature(struct FFieldGuideCategoriesRowHandle Category, struct FItemsStaticRowHandle Item); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

