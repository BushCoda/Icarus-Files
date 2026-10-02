// WidgetBlueprintGeneratedClass UMG_TalentTooltip_Blueprint.UMG_TalentTooltip_Blueprint_C
struct UUMG_TalentTooltip_Blueprint_C : UTalentTooltipWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* ExpandProgress_Instant; 
	struct UWidgetAnimation* ExpandProgress; 
	struct UTextBlock* ActionText; 
	struct UImage* BenchIcons; 
	struct UTextBlock* BlueprintDescription; 
	struct UTextBlock* BlueprintFlavour; 
	struct UTextBlock* BlueprintName; 
	struct UTextBlock* BuildingTier; 
	struct UVerticalBox* ClickToUnlockSection; 
	struct UTextBlock* CostAmount; 
	struct UOverlay* CostSection; 
	struct UTextBlock* CraftedAtListText; 
	struct UOverlay* CraftedAtOverlay; 
	struct UTextBlock* CraftingLocation; 
	struct UVerticalBox* DynamicContent; 
	struct UTextBlock* EnergyOutput; 
	struct UProgressBar* ExpandProgressBar; 
	struct USizeBox* FlavourTextSizeBox; 
	struct UTextBlock* GroupDescriptionText; 
	struct UHorizontalBox* HorizontalBox_Variations; 
	struct UImage* Image_53; 
	struct UTextBlock* MultiMaterialsLabel; 
	struct UTextBlock* NumberCrafted; 
	struct USizeBox* OverallSize; 
	struct UVerticalBox* RecipeSetDetailsVBox; 
	struct UTextBlock* RecipeSetItemList; 
	struct UGridPanel* RequiredElementsBox; 
	struct UVerticalBox* RequiredMatsSection; 
	struct UVerticalBox* SingleItemDetailsVBox; 
	struct UUMG_BlueprintItemBaseRecipes_List_C* UMG_BlueprintItemBaseRecipes_List; 
	struct UUMG_BlueprintRecipeSet_List_C* UMG_BlueprintRecipeSet_List; 
	struct UUMG_FeatureLevelIcon_C* UMG_FeatureLevelIcon; 
	struct UUMG_ItemStats_C* UMG_ItemStats; 
	struct UUMG_ItemStats_C* UMG_ItemStats_Recipe; 
	struct UUMG_ResourceNetworkPreviewContainer_C* UMG_ResourceNetworkPreviewContainer; 
	struct UImage* UnlockImage; 
	struct UTextBlock* VariationText; 
	struct FProcessorRecipesRowHandle Recipe; 
	bool HasMaterials; 
	struct TArray<struct FStatsEnum> Blacklist; 
	bool LoadAsGroup; 
	struct FText UnlockedBlueprintList; 
	struct FText CraftedAtListTextBuilder; 
	struct TSet<struct FRecipeSetsRowHandle> GroupCraftedSets; 
	struct TSet<struct FItemTemplateRowHandle> ProcessedGroupRecipes; 
	struct FBuildingTypesRowHandle TalentBuildingType; 
	int32_t TalentBuildingTier; 
	struct TMap<struct FBaseStatsEnum, int32_t> SummedArmorStats; 

	void GetArmourStats(struct TArray<struct FIcarusStatReplicated>& Array); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void AddDynamicContent(struct UUserWidget* WidgetToAdd); // (Public|BlueprintCallable|BlueprintEvent)
	void ClearDynamicContent(); // (Public|BlueprintCallable|BlueprintEvent)
	void Update Item Stats(struct FItemData Item); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateVisibility(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetRecipeSlow(struct FProcessorRecipesRowHandle& Recipe); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnTalentSet(); // (Event|Public|BlueprintEvent)
	void PlayHoverAnimation(); // (BlueprintCallable|BlueprintEvent)
	void OnStateChanged(); // (BlueprintCallable|BlueprintEvent)
	void ClearHoverAnimation(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_TalentTooltip_Blueprint(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

