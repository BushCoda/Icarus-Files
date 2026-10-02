// WidgetBlueprintGeneratedClass UMG_RecipeElementMulti.UMG_RecipeElementMulti_C
struct UUMG_RecipeElementMulti_C : UUMG_ListElement_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* BackFill; 
	struct UImage* CornersImage; 
	struct UBorder* DarkenBorder; 
	struct UOverlay* HoverCorners; 
	struct UBorder* LeftFill; 
	struct UHorizontalBox* LeftSide; 
	struct UImage* MidImage; 
	struct UOverlay* Overlay_3; 
	struct UHorizontalBox* RightSide; 
	struct UObject* OLDNormalImage; 
	struct UObject* OLDHoveredImage; 
	struct UObject* OLDPressedImage; 
	struct UObject* OLDInvalidNormalImage; 
	struct UObject* OLDInvalidHoverImage; 
	struct UObject* OLDInvalidPressedImage; 

	struct UOverlay* GetOverlay(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct UOverlay* GetHoverCornerWidget(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetState(bool Valid); // (Public|BlueprintCallable|BlueprintEvent)
	void InitialiseIcons(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FProcessorRecipesRowHandle GetProcessorRecipe(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetResourceIcon(enum class EIcarusResourceType Type, struct UTexture2D*& Icon); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct FSlateBrush UpdateRecipeFrame(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_UMG_RecipeElementMulti(int32_t EntryPoint); // (Final|UbergraphFunction)
};

