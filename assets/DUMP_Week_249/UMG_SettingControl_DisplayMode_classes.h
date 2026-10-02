// WidgetBlueprintGeneratedClass UMG_SettingControl_DisplayMode.UMG_SettingControl_DisplayMode_C
struct UUMG_SettingControl_DisplayMode_C : USettingWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_SettingControl_Combo_C* DisplayModeCombo; 
	struct UUMG_SettingRowBorder_C* DisplayRowBorder; 
	struct UScrollBox* KeybindBox; 
	struct UUMG_SettingControl_Combo_C* ResolutionCombo; 
	struct UUMG_SettingRowBorder_C* ResolutionRowBorder; 
	struct TArray<struct FText> Resolution Options; 
	struct TArray<struct FIntPoint> Resolutions; 
	struct FText Empty; 

	void GetResolutionText(struct FIntPoint& Resolution, struct FText& Text); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Setup(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void Cache Resolutions(); // (BlueprintCallable|BlueprintEvent)
	void Refresh Resolution Combo(); // (BlueprintCallable|BlueprintEvent)
	void Display Mode Changed(struct FText SelectedItem, enum class ESelectInfo SelectionType); // (BlueprintCallable|BlueprintEvent)
	void Resolution Changed(struct FText SelectedItem, enum class ESelectInfo SelectionType); // (BlueprintCallable|BlueprintEvent)
	void Apply(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnRefresh(); // (Event|Protected|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_SettingControl_DisplayMode(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

