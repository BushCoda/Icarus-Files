// WidgetBlueprintGeneratedClass UMG_PhysicalKey.UMG_PhysicalKey_C
struct UUMG_PhysicalKey_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* ArrowAnimation; 
	struct UImage* FillImage; 
	struct UImage* HoldArrow; 
	struct UInvalidationBox* InvalidationBox_1; 
	struct UImage* KeyImage; 
	struct UTextBlock* Text; 
	struct USizeBox* TextSizeBox; 
	struct FKey PhysicalKey; 
	bool Hold; 
	bool IsHeld; 
	struct FKey PhysicalGamepadKey; 
	struct FMulticastInlineDelegate KeyChanged; 
	bool UseUpdateHold; 

	void Set Held(bool Held, float Alpha); // (Public|BlueprintCallable|BlueprintEvent)
	void SetHoldState(); // (Public|BlueprintCallable|BlueprintEvent)
	void Set Key(struct FKey InGamepadKey, struct FKey InKey, bool Hold, bool& IsSet); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Update Hold(struct FTimerHandle Timer); // (BlueprintCallable|BlueprintEvent)
	void InputTypeChanged(enum class EInputTypeSetting Value); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_PhysicalKey(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void KeyChanged__DelegateSignature(bool IsSet); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

