// WidgetBlueprintGeneratedClass UMG_ItemPopup.UMG_ItemPopup_C
struct UUMG_ItemPopup_C : UItemTooltipBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* Border_Seed_Biome; 
	struct UBorder* Border_StackMultiplier; 
	struct UTextBlock* BuildingTier; 
	struct UBorder* Description; 
	struct UTextBlock* DescriptionText; 
	struct UTextBlock* DevelopmentText; 
	struct UImage* divider; 
	struct UImage* divider_2; 
	struct UImage* divider_3; 
	struct UTextBlock* Durability; 
	struct UVerticalBox* DynamicContent; 
	struct UTextBlock* FeatureLevel_Text_2; 
	struct UTextBlock* FlavourText; 
	struct UBorder* FunctionBorder; 
	struct UBorder* FunctionBorder_2; 
	struct UTextBlock* FunctionText; 
	struct UBorder* Header; 
	struct UHorizontalBox* HorizontalBox_FeatureLevel; 
	struct UImage* Image_53; 
	struct UBorder* LW; 
	struct UVerticalBox* ModifierList; 
	struct UTextBlock* Name; 
	struct UBorder* OwnedBy; 
	struct UTextBlock* OwnedByText; 
	struct UScaleBox* ScaleBox_Itemname; 
	struct UImage* SlotHelperIcon; 
	struct USpacer* Spacer_FeatureLevelMargin; 
	struct UTextBlock* SpoilText; 
	struct UBorder* SpoilTimer; 
	struct UTextBlock* Stack; 
	struct UBorder* Tags; 
	struct UTextBlock* TagText; 
	struct UTextBlock* Text_Seed_Biome; 
	struct UTextBlock* Text_StackMultiplier; 
	struct UUMG_FeatureLevelIcon_C* UMG_FeatureLevelIcon; 
	struct UUMG_FeatureLevelIcon_C* UMG_FeatureLevelIcon_Small; 
	struct UUMG_ItemContainerDisplay_C* UMG_ItemContainerDisplay; 
	struct UUMG_ItemStats_C* UMG_ItemStats_C_1; 
	struct UUMG_LurePopupInfo_C* UMG_LurePopupInfo; 
	struct UUMG_ResourceNetworkPreviewContainer_C* UMG_ResourceNetworkPreviewContainer; 
	struct UUMG_ValidItemAttachments_C* UMG_ValidItemAttachments; 
	struct UUMG_ValidMounts_C* UMG_ValidMounts; 
	struct UBorder* Variations; 
	struct UTextBlock* VariationText; 
	struct UTextBlock* Weight; 
	struct FVector2D CalculatedSize; 
	struct FSlateColor RegularItemColour; 
	struct FSlateColor MetaItemColour; 
	struct TArray<struct FStatsEnum> Blacklist; 
	struct FSlateColor MissionItemColour; 
	bool MetaItem; 
	bool QuestItem; 
	int32_t TalentBuildingTier; 
	struct FTagQueriesRowHandle Query_Light; 
	struct FTagQueriesRowHandle Query_Bulky; 
	bool LegendaryWeapon; 
	struct FSlateColor LegendaryItemColour; 

	void PopulateAfflictions(struct FItemData ItemData); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateTagText(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FText ToResourceText(int32_t inInt); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetOptimalBiomesString(struct TArray<struct FAtmospheresRowHandle>& Biomes, struct FText& Text1); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void HandleUpdateTooltip(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ClearDynamicContent(); // (Public|BlueprintCallable|BlueprintEvent)
	void AddDynamicContent(struct UUserWidget* WidgetToAdd); // (Public|BlueprintCallable|BlueprintEvent)
	void GramsToOutputString(int32_t Weight, struct FText& WeightString); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetDamageVariation(struct FItemData Item, bool Melee); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdatePopupColour(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetSize(struct FVector2D& Size); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Show for Item(struct FItemData Item, int32_t Slot, struct UInventory* ItemInventory, bool& Shown); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateTooltip(); // (Event|Protected|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ItemPopup(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

