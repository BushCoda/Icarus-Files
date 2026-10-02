// WidgetBlueprintGeneratedClass UMG_Keypad_Key.UMG_Keypad_Key_C
struct UUMG_Keypad_Key_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* Border_57; 
	struct UButton* Button_49; 
	struct UTextBlock* Letters; 
	struct UTextBlock* TextNumber; 
	struct FMulticastInlineDelegate ButtonClicked; 
	int32_t Number; 
	struct FText Text; 

	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_Keypad_Key_Button_48_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_Keypad_Key_Button_48_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Keypad_Key_Button_48_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_Keypad_Key(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ButtonClicked__DelegateSignature(int32_t Number); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

