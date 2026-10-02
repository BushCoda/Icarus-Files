// WidgetBlueprintGeneratedClass UMG_SettingControl_Combo.UMG_SettingControl_Combo_C
struct UUMG_SettingControl_Combo_C : USettingWidget_Combo {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UComboBoxText* Combo; 
	struct FText CustomText; 
	struct TArray<struct FText> Hide Options; 
	struct TArray<struct FText> Options; 
	struct TArray<struct FText> OptionsUpper; 
	struct TArray<struct FText> FilteredOptions; 
	struct TArray<struct FText> FilteredOptionsUpper; 

	void GetCustomLabel(struct FText& LabelOut); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddOptions(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	int32_t GetValueIndex(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void IsValidOption(bool& Valid); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetFocusWidget(bool& bValid, struct UWidget*& Widget, bool& bThis); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetValueIndex(int32_t Index); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void Apply(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void SetHideOptions(struct TArray<struct FText>& HideOptions); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__Combo_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(struct FText SelectedItem, enum class ESelectInfo SelectionType); // (BlueprintEvent)
	void SetOptions(struct TArray<struct FText>& Options); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_SettingControl_Combo(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

