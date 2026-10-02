// WidgetBlueprintGeneratedClass UMG_FieldGuide_Fish_Entry.UMG_FieldGuide_Fish_Entry_C
struct UUMG_FieldGuide_Fish_Entry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Corner_FishEntry; 
	struct UBorder* Background; 
	struct UOverlay* Corner; 
	struct UImage* Corner_2; 
	struct UImage* Corner_3; 
	struct UImage* Corner_4; 
	struct UImage* Corner_5; 
	struct UImage* Creature_Image; 
	struct UTextBlock* Creature_Name; 
	struct UButton* Entry_Button; 
	struct UBorder* FishButtonBorder; 
	struct FMulticastInlineDelegate Clicked; 
	struct FFishDataRowHandle FishData; 
	bool Discovered; 
	struct UFMODEvent* HoverAudioFish; 
	enum class EFishType Type; 
	enum class EFishRarity Rarity; 

	void OnLoaded_2A3FFF3842AAE275218ED8B8847414A6(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Entry_Entry_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void SetPercentage(bool Discovered); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Entry_Entry_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Entry_Entry_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Entry_Entry_Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Entry_Entry_Button_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuide_Fish_Entry(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void Clicked__DelegateSignature(struct FFishDataRowHandle Creature, bool Discovered); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

