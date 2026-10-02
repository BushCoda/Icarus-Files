// WidgetBlueprintGeneratedClass UMG_Keypad.UMG_Keypad_C
struct UUMG_Keypad_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* OpenMenu; 
	struct UBorder* MainBorder; 
	struct UTextBlock* Password; 
	struct UUMG_CloseButton_2_C* UMG_CloseButton_3; 
	struct UUMG_Keypad_Key_C* UMG_Keypad_Key; 
	struct UUMG_Keypad_Key_C* UMG_Keypad_Key_2; 
	struct UUMG_Keypad_Key_C* UMG_Keypad_Key_3; 
	struct UUMG_Keypad_Key_C* UMG_Keypad_Key_4; 
	struct UUMG_Keypad_Key_C* UMG_Keypad_Key_5; 
	struct UUMG_Keypad_Key_C* UMG_Keypad_Key_6; 
	struct UUMG_Keypad_Key_C* UMG_Keypad_Key_7; 
	struct UUMG_Keypad_Key_C* UMG_Keypad_Key_8; 
	struct UUMG_Keypad_Key_C* UMG_Keypad_Key_9; 
	struct UUMG_Keypad_Key_C* UMG_Keypad_Key_10; 
	struct UUMG_Keypad_Key_C* UMG_Keypad_Key_11; 
	struct UUMG_Keypad_Key_C* UMG_Keypad_Key_12; 
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame; 
	struct UUMG_Titlebar_C* UMG_Titlebar; 
	struct UUniformGridPanel* UniformGridPanel_90; 
	struct UInventory* Inventory; 
	struct FText CorrectPassword; 
	bool ClearNext; 

	void LinkedActorDestroyed(struct AActor* DestroyedActor); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void KeyPressed(int32_t Number); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_Keypad_UMG_Keypad_Key_11_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature(int32_t Number); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_Keypad(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

