// WidgetBlueprintGeneratedClass UMG_Camera_Shortcut.UMG_Camera_Shortcut_C
struct UUMG_Camera_Shortcut_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* TextBlock_ActionName; 
	struct UTextBlock* TextBlock_Key; 
	struct FText ActionName; 
	struct FKeybindingsRowHandle Keybinding; 
	struct FText FallbackKeyName; 

	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_Camera_Shortcut(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

