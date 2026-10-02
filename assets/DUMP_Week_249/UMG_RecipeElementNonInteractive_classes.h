// WidgetBlueprintGeneratedClass UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C
struct UUMG_RecipeElementNonInteractive_C : UUMG_ListElement_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* ContainerImage; 
	struct UHorizontalBox* LeftSide; 
	struct UImage* Output; 
	struct UOverlay* Overlay_2; 
	struct UImage* RecipeBase; 
	struct UBorder* RecipeFrame; 
	struct UTextBlock* ResourceText; 

	struct UOverlay* GetOverlay(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void InitialiseIcons(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FProcessorRecipesRowHandle GetProcessorRecipe(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetResourceIcon(struct TSoftObjectPtr<UTexture2D>& Icon, int32_t& Units); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_RecipeElementNonInteractive(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

