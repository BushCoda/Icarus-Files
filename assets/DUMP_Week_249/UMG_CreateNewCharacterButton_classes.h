// WidgetBlueprintGeneratedClass UMG_CreateNewCharacterButton.UMG_CreateNewCharacterButton_C
struct UUMG_CreateNewCharacterButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* HoverAnimation; 
	struct UButton* ButtonBase; 
	struct UTextBlock* CharacterLevel; 
	struct UTextBlock* CharacterName; 
	struct UImage* cornerimage; 
	struct UImage* cornerimage_2; 
	struct UImage* cornerimage_3; 
	struct UImage* cornerimage_4; 
	struct UOverlay* Corners; 
	struct FMulticastInlineDelegate ButtonClicked; 
	struct FMulticastInlineDelegate DeleteCharacter; 
	bool Hovered; 
	struct FSlateColor TextColour_Base; 
	struct FSlateColor TextColour_Hovered; 

	void HoveredStyle(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Initialize(struct FString Name, int32_t Level, struct FString Drop Progress); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__Button_118_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_CreateNewCharacterButton(int32_t EntryPoint); // (Final|UbergraphFunction)
	void DeleteCharacter__DelegateSignature(struct UUMG_CharacterProfileSlot_C* Delete); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void ButtonClicked__DelegateSignature(struct UUMG_CreateNewCharacterButton_C* Input); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

