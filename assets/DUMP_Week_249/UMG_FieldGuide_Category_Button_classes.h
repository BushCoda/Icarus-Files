// WidgetBlueprintGeneratedClass UMG_FieldGuide_Category_Button.UMG_FieldGuide_Category_Button_C
struct UUMG_FieldGuide_Category_Button_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Corner_FieldguideEntry; 
	struct UButton* Button; 
	struct UImage* CategoryImage; 
	struct UOverlay* Corner; 
	struct UImage* Corner_2; 
	struct UImage* Corner_3; 
	struct UImage* Corner_4; 
	struct UImage* Corner_5; 
	struct UBorder* Highlight; 
	struct UOverlay* MainOverlay; 
	struct UTextBlock* Name; 
	struct FMulticastInlineDelegate Clicked; 
	struct UFMODEvent* HoverAudio; 
	enum class EFieldGuideCategory Category; 

	void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_FieldGuide_Category_Button_Button_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuide_Category_Button(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void Clicked__DelegateSignature(enum class EFieldGuideCategory Category); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

