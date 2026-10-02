// WidgetBlueprintGeneratedClass UMG_FieldGuide_Bestiary_Entry.UMG_FieldGuide_Bestiary_Entry_C
struct UUMG_FieldGuide_Bestiary_Entry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Corner_CreatureEntry; 
	struct UBorder* Background; 
	struct UImage* BiomeImage; 
	struct UBorder* ButtonBorder; 
	struct UOverlay* Corner; 
	struct UImage* Corner_2; 
	struct UImage* Corner_3; 
	struct UImage* Corner_4; 
	struct UImage* Corner_5; 
	struct UImage* Creature_Image; 
	struct UTextBlock* Creature_Name; 
	struct UButton* Entry_Button; 
	struct UTextBlock* Revealed; 
	struct FMulticastInlineDelegate Clicked; 
	struct FBestiaryDataRowHandle BestiaryData; 
	int32_t Percent; 
	struct UFMODEvent* HoverSound; 
	bool IsDiscovered; 
	struct TArray<struct FAtmospheresRowHandle> Biomes; 
	struct TArray<struct FTerrainsRowHandle> Maps; 
	bool IsBoss; 

	void SetPercentage(int32_t Percentage); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_7706448D40DB9F6563F04C948605B0E8(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_46AAFD2A4E66B482B3157285E0EABC27(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Entry_Entry_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Entry_Entry_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Entry_Entry_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Entry_Entry_Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Entry_Entry_Button_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuide_Bestiary_Entry(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void Clicked__DelegateSignature(struct FBestiaryDataRowHandle Creature, int32_t Percent); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

