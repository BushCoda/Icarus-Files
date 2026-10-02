// WidgetBlueprintGeneratedClass UMG_PhysicalKeyPrompt.UMG_PhysicalKeyPrompt_C
struct UUMG_PhysicalKeyPrompt_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNamedSlot* LHS; 
	struct UNamedSlot* RHS; 
	struct URetainerBox* ShadowRetainer; 
	struct UTextBlock* TextPrompt; 
	struct UUMG_PhysicalKey_C* UMG_PhysicalKey; 
	bool Hold; 
	struct FKey Physical Key; 
	struct FText PromptTextString; 
	struct FKey Physical Gamepad Key; 
	bool TextOnRight; 

	void SwapText(); // (Public|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void KeyChanged(bool IsSet); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_PhysicalKeyPrompt(int32_t EntryPoint); // (Final|UbergraphFunction)
};

