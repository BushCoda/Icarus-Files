// WidgetBlueprintGeneratedClass UMG_RecipeElement.UMG_RecipeElement_C
struct UUMG_RecipeElement_C : UUMG_ListElement_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* CompleteAnimation; 
	struct UImage* ClassificationImage; 
	struct UImage* CornersImage; 
	struct UProgressBar* CraftingProgressBar; 
	struct UBorder* DarkenBorder; 
	struct URetainerBox* desaturater; 
	struct UOverlay* HoverCorners; 
	struct UImage* ItemIconDynamic; 
	struct UTextBlock* OutputAmount; 
	struct UBorder* OutputAmountBorder; 
	struct UOverlay* Overlay_2; 
	struct UImage* RankImage; 
	struct UBorder* RecipeFrame; 
	struct UTextBlock* ResourceText; 
	struct UUMG_FeatureLevelIcon_C* UMG_FeatureLevelIcon; 
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
	struct FTagQueriesRowHandle Query; 
	struct FItemData ClientRequestAlterationsItem; 

	void CheckForOverrideIcon(struct FProcessorRecipesRowHandle RecipeRow, struct TSoftObjectPtr<UTexture2D>& IconOut); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ClientRequestAlterationData(struct FItemData& Item); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void InitMainItemIcon(struct FItemData& Item, struct FResourceItem& ResourceItem); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Get Alteration Preview(struct FItemData Item, bool& Custom); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct UOverlay* GetOverlay(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct UOverlay* GetHoverCornerWidget(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetState(bool Valid); // (Public|BlueprintCallable|BlueprintEvent)
	void InitialiseIcons(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FProcessorRecipesRowHandle GetProcessorRecipe(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ValidRecipe(bool& Valid); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetNonInteractive(bool RecipeSelected); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Clear(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FSlateBrush UpdateRecipeFrame(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnLoaded_2B8B2B624CE5F97DAE6892B784BA064E(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void Finished_1A93246B4B7271E4B7205CB7080352F3(); // (BlueprintCallable|BlueprintEvent)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void SetProgress(float Percent, struct FProcessorRecipesRowHandle CurrentQueueRecipe, bool QueueEmpty); // (BlueprintCallable|BlueprintEvent)
	void OnClientRequestAlterationDataResponse(struct TArray<struct FItemResourceGeneratedAlterationResult>& Results); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetMainIcon(struct TSoftObjectPtr<UObject> Icon, struct TSoftObjectPtr<UObject> CustomAlpha, bool IsCustomItem); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_RecipeElement(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

