// WidgetBlueprintGeneratedClass UMG_FieldGuide_DLCCheckbox.UMG_FieldGuide_DLCCheckbox_C
struct UUMG_FieldGuide_DLCCheckbox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UButton* CheckButton; 
	struct UHorizontalBox* CheckHorizontalBox; 
	struct UCheckBox* FeatureLevelCheckbox; 
	struct UTextBlock* FeatureLevelText; 
	struct FFeatureLevelsRowHandle FeatureLevel; 
	struct FMulticastInlineDelegate CheckboxClicked; 

	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_FieldGuide_DLCCheckbox_FeatureLevelCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // (BlueprintEvent)
	void BndEvt__UMG_FieldGuide_DLCCheckbox_Button_63_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_FieldGuide_DLCCheckbox_CheckButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_FieldGuide_DLCCheckbox_CheckButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuide_DLCCheckbox(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void CheckboxClicked__DelegateSignature(bool Active, struct FFeatureLevelsRowHandle FeatureLevel); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

