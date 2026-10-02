// WidgetBlueprintGeneratedClass UMG_SettingControl_Language.UMG_SettingControl_Language_C
struct UUMG_SettingControl_Language_C : USettingWidget_Language {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UComboBoxString* ComboBox; 
	struct UProgressBar* CoverageBar; 
	struct TArray<struct FString> Cultures; 

	void UpdateCoverage(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // (BlueprintEvent)
	void Apply(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void SetLanguage(struct FString Language); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void Populate Options(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_SettingControl_Language(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

