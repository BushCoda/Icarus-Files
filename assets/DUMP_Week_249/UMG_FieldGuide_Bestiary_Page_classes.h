// WidgetBlueprintGeneratedClass UMG_FieldGuide_Bestiary_Page.UMG_FieldGuide_Bestiary_Page_C
struct UUMG_FieldGuide_Bestiary_Page_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_BestiaryTitle_C* 0; 
	struct UUMG_BestiaryTitle_C* 10; 
	struct UUMG_BestiaryTitle_C* 100; 
	struct UUMG_BestiaryTitle_C* 20; 
	struct UUMG_BestiaryTitle_C* 30; 
	struct UUMG_BestiaryTitle_C* 40; 
	struct UUMG_BestiaryTitle_C* 60; 
	struct UUMG_BestiaryTitle_C* 80; 
	struct UImage* BiomeImage; 
	struct UBorder* BonusStatsBorder; 
	struct UUMG_FieldGuide_Bestiary_Lock_C* BonusStatsLock; 
	struct UBorder* CreatureBorder; 
	struct UImage* CreatureImage; 
	struct UTextBlock* CreatureName; 
	struct UImage* Image_59; 
	struct UTextBlock* Location; 
	struct UProgressBar* ProgressBarDisplay; 
	struct UBorder* ProgressBorder; 
	struct UVerticalBox* ProgressiveStats; 
	struct UTextBlock* ProgressText; 
	struct UHorizontalBox* Tags; 
	struct UUMG_BestiaryLore_C* UMG_BestiaryLore; 
	struct UUMG_BestiaryRewards_C* UMG_BestiaryRewards; 
	struct UUMG_ButtonIcon_C* UMG_Lore_Button; 
	struct UUMG_ButtonIcon_C* UMG_Sound_Button; 
	struct UUMG_ButtonIcon_C* UMG_Unlocks_Button; 
	struct UWidgetSwitcher* WidgetSwitcherLoreandRewards; 
	struct FBestiaryDataRowHandle Creature; 
	struct FMulticastInlineDelegate Close; 
	int32_t Percent; 
	struct FBestiaryData Bestiary Data; 
	struct FLinearColor TerrainColour; 
	struct FLinearColor BiomeColour; 
	struct FLinearColor WeaknessColour; 
	struct FSlateColor Text Brush Colour; 
	struct TArray<struct FText> LocationList; 
	struct FText Array Element; 

	void SetProgress(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetNoProgress(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetNameImagePercentage(int32_t Percent); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_B0BD2D9A45680E8E385723813AD88531(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_03137AEE43730A1D1EFCD5A1EDF9410F(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Page_20_K2Node_ComponentBoundEvent_2_HoverUpdated__DelegateSignature(bool Mouse); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Page_80_K2Node_ComponentBoundEvent_4_HoverUpdated__DelegateSignature(bool Mouse); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Page_40_2_K2Node_ComponentBoundEvent_5_HoverUpdated__DelegateSignature(bool Mouse); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Page_UMG_Sound_Button_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Page_UMG_Lore_Button_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Page_UMG_Unlocks_Button_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ShowLore(); // (BlueprintCallable|BlueprintEvent)
	void ShowRewards(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Page_20_2_K2Node_ComponentBoundEvent_7_HoverUpdated__DelegateSignature(bool Mouse); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Page_40_K2Node_ComponentBoundEvent_8_HoverUpdated__DelegateSignature(bool Mouse); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Page_60_K2Node_ComponentBoundEvent_9_HoverUpdated__DelegateSignature(bool Mouse); // (BlueprintEvent)
	void BndEvt__UMG_Bestiary_Creature_Page_100_K2Node_ComponentBoundEvent_10_HoverUpdated__DelegateSignature(bool Mouse); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuide_Bestiary_Page(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void Close__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

