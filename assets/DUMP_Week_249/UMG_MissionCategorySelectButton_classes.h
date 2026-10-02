// WidgetBlueprintGeneratedClass UMG_MissionCategorySelectButton.UMG_MissionCategorySelectButton_C
struct UUMG_MissionCategorySelectButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Corner_FieldguideEntry; 
	struct UBorder* BorderColour; 
	struct UButton* Button; 
	struct UOverlay* Corner; 
	struct UImage* Corner_2; 
	struct UImage* Corner_3; 
	struct UImage* Corner_4; 
	struct UImage* Corner_5; 
	struct UTextBlock* Description; 
	struct UImage* Image; 
	struct UOverlay* MainOverlay; 
	struct UTextBlock* Name; 
	struct USizeBox* Unavailable; 
	struct UTextBlock* UnavaliableText; 
	struct FMulticastInlineDelegate Clicked; 
	struct UFMODEvent* HoverAudio; 
	struct UTexture2D* Texture; 
	struct FText ButtonName; 
	struct FText ButtonDescription; 
	struct FSlateColor In Color and Opacity; 
	struct FText DisabledText; 
	bool Available; 

	void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_FieldGuide_Category_Button_Button_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // (BlueprintEvent)
	void SetAvailable(bool Available); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_MissionCategorySelectButton(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void Clicked__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

