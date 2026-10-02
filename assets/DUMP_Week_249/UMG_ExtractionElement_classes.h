// WidgetBlueprintGeneratedClass UMG_ExtractionElement.UMG_ExtractionElement_C
struct UUMG_ExtractionElement_C : UUMG_ListElement_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* CompleteAnimation; 
	struct UImage* CornersImage; 
	struct UProgressBar* CraftingProgressBar; 
	struct UBorder* DarkenBorder; 
	struct URetainerBox* desaturater; 
	struct UOverlay* HoverCorners; 
	struct UImage* Icon; 
	struct UTextBlock* OutputAmount; 
	struct UBorder* OutputAmountBorder; 
	struct UOverlay* Overlay_2; 
	struct UBorder* RecipeFrame; 
	struct UImage* UnlockGlow; 
	struct UImage* UnlockLines; 
	struct UObject* OLDPressedImage; 
	struct UObject* OLDHoveredImage; 
	struct UObject* OLDNormalImage; 
	struct FSlateColor NameColor; 
	struct FSlateColor HighlightColor; 
	struct UObject* OLDInvalidNormalImage; 
	struct UObject* OLDInvalidHoverImage; 
	struct UObject* OLDInvalidPressedImage; 
	float CurrentProgress; 

	void Update(float Progress); // (Public|BlueprintCallable|BlueprintEvent)
	void Setup(struct FItemData Item); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct UOverlay* GetOverlay(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct UOverlay* GetHoverCornerWidget(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetState(bool Valid); // (Public|BlueprintCallable|BlueprintEvent)
	void InitialiseIcons(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FProcessorRecipesRowHandle GetProcessorRecipe(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Clear(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FSlateBrush UpdateRecipeFrame(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Finished_6601930D42BF20E1F59D04AF66576E42(); // (BlueprintCallable|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void SetProgress(float Percent, struct FProcessorRecipesRowHandle CurrentQueueRecipe, bool QueueEmpty); // (BlueprintCallable|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_UMG_ExtractionElement(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

