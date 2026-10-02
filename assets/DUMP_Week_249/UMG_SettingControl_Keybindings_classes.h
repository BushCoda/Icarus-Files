// WidgetBlueprintGeneratedClass UMG_SettingControl_Keybindings.UMG_SettingControl_Keybindings_C
struct UUMG_SettingControl_Keybindings_C : USettingWidget_Keybindings {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UScrollBox* KeybindBox; 
	struct TMap<struct FKeybindContextsRowHandle, struct UUMG_KeybindingSection_C*> Sections; 
	struct TMap<struct FKeybindingsRowHandle, struct UUMG_Keybinding_C*> Widgets; 

	void GetSection(struct FKeybindContextsRowHandle Context, struct UUMG_KeybindingSection_C*& Section); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct UKeybindingWidget* CreateKeybindingWidget(struct FKeybindingsRowHandle& Keybinding); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ClearKeybindingWidgets(); // (Event|Public|BlueprintEvent)
	void Setup Sections(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_SettingControl_Keybindings(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

