// WidgetBlueprintGeneratedClass UMG_KeyRebindConfirmationPromptDetails.UMG_KeyRebindConfirmationPromptDetails_C
struct UUMG_KeyRebindConfirmationPromptDetails_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_Keybind_C* KeyWidget; 
	struct UTextBlock* TB_Keybind; 
	struct FKey Key; 
	struct FKeybindContextsRowHandle OtherContext; 
	struct FKeybindingsRowHandle OtherKeybind; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_KeyRebindConfirmationPromptDetails(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

