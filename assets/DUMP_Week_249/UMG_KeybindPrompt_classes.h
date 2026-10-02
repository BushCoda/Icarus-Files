// WidgetBlueprintGeneratedClass UMG_KeybindPrompt.UMG_KeybindPrompt_C
struct UUMG_KeybindPrompt_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UInvalidationBox* InvalidationBox_1; 
	struct UNamedSlot* LHS; 
	struct UNamedSlot* RHS; 
	struct URetainerBox* ShadowRetainer; 
	struct UTextBlock* TextPrompt; 
	struct UUMG_Keybind_C* UMG_Keybind; 
	bool Hold; 
	struct FKeybindingsRowHandle Keybinding; 
	bool TextOnRight; 
	struct FText OverrideText; 
	struct FSlateColor TextColour; 

	void UpdateText(struct FText InText); // (Public|BlueprintCallable|BlueprintEvent)
	void SwapText(); // (Public|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void KeyChanged(bool IsSet); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_KeybindPrompt(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

