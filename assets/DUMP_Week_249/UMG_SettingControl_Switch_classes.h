// WidgetBlueprintGeneratedClass UMG_SettingControl_Switch.UMG_SettingControl_Switch_C
struct UUMG_SettingControl_Switch_C : USettingWidget_Switch {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UHorizontalBox* ToggleContainer; 
	struct TArray<struct FText> ToggleOptions; 
	struct TArray<struct FText> OptionToolTips; 
	int32_t DefaultToggleIndex; 
	struct UUMG_ToggleButtonBase_C* ToggleWidgetClass; 
	int32_t ActiveToggleIndex; 
	float WidthOverride; 

	void GetFocusWidget(bool& bValid, struct UWidget*& Widget, bool& bThis); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetToggleOption(int32_t ToggleIndex); // (Public|BlueprintCallable|BlueprintEvent)
	void ConstructToggles(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ToggleButtonToggled(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintCallable|BlueprintEvent)
	void SetLabels(struct TArray<struct FText>& Labels); // (Event|Public|HasOutParms|BlueprintEvent)
	void SetValueIndex(int32_t Index); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void Apply(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_SettingControl_Switch(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

