// WidgetBlueprintGeneratedClass UMG_BestiaryRewards.UMG_BestiaryRewards_C
struct UUMG_BestiaryRewards_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Stat2CornersAnim; 
	struct UWidgetAnimation* Stat1CornersAnim; 
	struct UWidgetAnimation* WeaknessCornerAnim; 
	struct UWidgetAnimation* LootCornerAnim; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_59; 
	struct UUMG_FieldGuide_Bestiary_Lock_C* Lock_Loot; 
	struct UUMG_FieldGuide_Bestiary_Lock_C* Lock_Stat_2; 
	struct UUMG_FieldGuide_Bestiary_Lock_C* Lock_Stat_3; 
	struct UUMG_FieldGuide_Bestiary_Lock_C* Lock_Weakness; 
	struct UUMG_IcarusGrid_C* LootGrid; 
	struct UBorder* LootTableBorder; 
	struct UTextBlock* LootText; 
	struct UOverlay* Stat1Corners; 
	struct UOverlay* Stat2Corners; 
	struct UBorder* Stats1Border; 
	struct UVerticalBox* Stats1Table; 
	struct UBorder* Stats2Border; 
	struct UVerticalBox* Stats2Table; 
	struct UBorder* TraitsBorder; 
	struct UOverlay* TraitsDetails; 
	struct UVerticalBox* TraitsTable; 
	struct UTextBlock* TraitsText; 
	struct UOverlay* WeaknessCorners; 
	struct FLinearColor TraitsColour; 
	struct FSlateColor Text Brush Colour; 
	struct FLinearColor EnabledBrushColor; 
	struct FLinearColor LockedBrushColor; 
	int32_t TraitsUnlock; 
	int32_t StatUnlock1; 
	int32_t LootUnlock; 
	int32_t StatUnlock2; 

	void Highlight(bool Weakness, bool Stat1, bool Loot, bool Stat2); // (Public|BlueprintCallable|BlueprintEvent)
	void SetBorderColors(int32_t Percent); // (Public|BlueprintCallable|BlueprintEvent)
	void Initialize(struct FBestiaryDataRowHandle Group, int32_t Percent); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_BestiaryRewards(int32_t EntryPoint); // (Final|UbergraphFunction)
};

