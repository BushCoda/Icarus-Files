// WidgetBlueprintGeneratedClass UMG_SettingsView.UMG_SettingsView_C
struct UUMG_SettingsView_C : USettingsView {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* SectionsBox; 
	struct FText SettingsViewDescription; 
	struct UTextBlock* SettingOptionDescription; 
	struct FMulticastInlineDelegate On Setting Option Hovered; 
	struct FMulticastInlineDelegate On Setting Option Unhovered; 
	struct FMulticastInlineDelegate On View Refresh; 

	struct USettingsSection* CreateNewSection(); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct USettingsSection* AddNewSection(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Setting Option Hovered(struct UUMG_SettingRowBorder_C* Setting Option); // (BlueprintCallable|BlueprintEvent)
	void Setting Option Unhovered(struct UUMG_SettingRowBorder_C* Setting Option); // (BlueprintCallable|BlueprintEvent)
	void PostSetup(); // (Event|Public|BlueprintEvent)
	void OnRefresh(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void Set Confirmation Slot(struct UNamedSlot* Confirmation Slot); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_SettingsView(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void On View Refresh__DelegateSignature(struct UUMG_SettingsView_C* View); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void On Setting Option Unhovered__DelegateSignature(struct UUMG_SettingRowBorder_C* Setting Option); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void On Setting Option Hovered__DelegateSignature(struct UUMG_SettingRowBorder_C* Setting Option); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

