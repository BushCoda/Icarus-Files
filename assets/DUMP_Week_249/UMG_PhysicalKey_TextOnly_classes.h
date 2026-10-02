// WidgetBlueprintGeneratedClass UMG_PhysicalKey_TextOnly.UMG_PhysicalKey_TextOnly_C
struct UUMG_PhysicalKey_TextOnly_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* ArrowAnimation; 
	struct UImage* KeyImage; 
	struct UTextBlock* Text; 
	struct USizeBox* TextSizeBox; 
	struct FKey PhysicalKey; 
	bool Hold; 
	bool IsHeld; 
	struct FKey PhysicalGamepadKey; 
	struct FMulticastInlineDelegate KeyChanged; 
	bool UseUpdateHold; 
	struct FSlateColor Color; 
	bool BackgroundVisible; 

	void Set Key(struct FKey InGamepadKey, struct FKey InKey, bool Hold, bool& IsSet); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void InputTypeChanged(enum class EInputTypeSetting Value); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_PhysicalKey_TextOnly(int32_t EntryPoint); // (Final|UbergraphFunction)
	void KeyChanged__DelegateSignature(bool IsSet); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

