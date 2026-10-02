// WidgetBlueprintGeneratedClass UMG_KeybindingSection.UMG_KeybindingSection_C
struct UUMG_KeybindingSection_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* KeybindArea; 
	struct UTextBlock* Title; 
	struct FKeybindContextsRowHandle Context; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Add Keybinding(struct UUMG_Keybinding_C* Keybind Widget); // (BlueprintCallable|BlueprintEvent)
	void Setup(struct FKeybindContextsRowHandle Context); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_KeybindingSection(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

