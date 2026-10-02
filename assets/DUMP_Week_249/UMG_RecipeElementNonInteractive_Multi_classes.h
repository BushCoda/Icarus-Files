// WidgetBlueprintGeneratedClass UMG_RecipeElementNonInteractive_Multi.UMG_RecipeElementNonInteractive_Multi_C
struct UUMG_RecipeElementNonInteractive_Multi_C : UUMG_ListElement_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* ContainerImage; 
	struct UHorizontalBox* Input; 
	struct UHorizontalBox* Output; 
	struct UOverlay* Overlay_2; 
	struct UImage* RecipeBase; 
	struct UBorder* RecipeFrame; 
	struct UUMG_IcarusGrid_C* UMG_IcarusGrid; 

	struct UOverlay* GetOverlay(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void InitialiseIcons(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FProcessorRecipesRowHandle GetProcessorRecipe(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetResourceIcon(struct TSoftObjectPtr<UTexture2D>& Icon, int32_t& Units); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_RecipeElementNonInteractive_Multi(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

