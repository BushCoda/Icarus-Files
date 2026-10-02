// WidgetBlueprintGeneratedClass UMG_Settlement_Claim.UMG_Settlement_Claim_C
struct UUMG_Settlement_Claim_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_IconTextButton_C* ConfirmButton; 
	struct UEditableTextBox* EditableTextBox; 
	struct UTextBlock* TitleText; 
	struct UUMG_ToggleButton_TextSettingOption_C* UMG_ToggleButton_2; 
	struct UUMG_ToggleButton_TextSettingOption_C* UMG_ToggleButton_3; 
	int32_t MaxCharacters; 
	struct FString TempString; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_Sign_Text_Window_ConfirmButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Beacon_Customisation_EditableTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // (HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_UMG_Settlement_Claim(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

