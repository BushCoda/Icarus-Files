// WidgetBlueprintGeneratedClass UMG_CustomGameSettings_DropDown.UMG_CustomGameSettings_DropDown_C
struct UUMG_CustomGameSettings_DropDown_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UComboBoxText* ComboBox; 
	struct UHorizontalBox* OuterBox; 
	struct UTextBlock* SettingName; 
	struct FName RowName; 
	struct FCustomGameStat SettingData; 
	bool CanEdit; 
	int32_t InitialValue; 
	struct FMulticastInlineDelegate OnSettingValueChanged; 

	void UpdateDefaultStateTextHighlighting(int32_t CurrentValue); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_CustomGameSettings_DropDown_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(struct FText SelectedItem, enum class ESelectInfo SelectionType); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_CustomGameSettings_DropDown(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnSettingValueChanged__DelegateSignature(struct FName RowName, int32_t NewValue); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

