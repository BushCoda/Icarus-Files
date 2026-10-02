// WidgetBlueprintGeneratedClass UMG_Beacon_Customisation.UMG_Beacon_Customisation_C
struct UUMG_Beacon_Customisation_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUniformGridPanel* ColorSelectionPanel; 
	struct UUMG_IconTextButton_C* ConfirmButton; 
	struct UEditableTextBox* EditableTextBox; 
	struct UEditableTextBox* EditableTextBox_IconSearch; 
	struct UHorizontalBox* HorizontalBox_ViewDistanceButtons; 
	struct UListView* ListView_Icons; 
	struct UTextBlock* TitleText; 
	struct UUMG_ToggleButton_TextSettingOption_C* UMG_ToggleButton_OwnerOnly; 
	struct UUMG_ToggleButton_TextSettingOption_C* UMG_ToggleButton_TextSettingOption; 
	struct UUMG_ToggleButton_TextSettingOption_C* UMG_ToggleButton_TextSettingOption_3; 
	struct UUMG_ToggleButton_TextSettingOption_C* UMG_ToggleButton_TextSettingOption_4; 
	struct UUMG_ToggleButton_TextSettingOption_C* UMG_ToggleButton_TextSettingOption_5; 
	struct UUMG_ToggleButton_TextSettingOption_C* UMG_ToggleButton_TextSettingOption_6; 
	struct UUMG_ToggleButton_TextSettingOption_C* UMG_ToggleButton_TextSettingOption_7; 
	struct UWidgetSwitcher* WidgetSwitcher_Type; 
	struct FLinearColor IconColour; 
	struct TArray<struct UTextureListItem*> IconListItems; 
	struct ABP_Portable_Beacon_C* BeaconReference; 
	int32_t MaxCharacters; 
	struct FString TempString; 
	int32_t MaxDisplayDistance; 

	void ToggleInitialDistanceOption(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateIconList(struct TArray<struct UObject*>& Items); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ProxyUpdateStyle(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GenerateItemList(struct TArray<struct FItemableRowHandle>& ValidItemables); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetIconColour(struct FLinearColor Color); // (Public|BlueprintCallable|BlueprintEvent)
	void OnColorSelected(struct UUMG_ButtonBase_C* Button); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_Sign_Text_Window_ConfirmButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Sign_Text_Window_EditableTextBox_IconSearch_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // (HasOutParms|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_Beacon_Customisation_EditableTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // (HasOutParms|BlueprintEvent)
	void OnBeaconViewDistanceChanged(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_Beacon_Customisation(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

