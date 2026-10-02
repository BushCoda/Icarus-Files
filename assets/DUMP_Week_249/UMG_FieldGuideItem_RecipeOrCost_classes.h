// WidgetBlueprintGeneratedClass UMG_FieldGuideItem_RecipeOrCost.UMG_FieldGuideItem_RecipeOrCost_C
struct UUMG_FieldGuideItem_RecipeOrCost_C : UFieldGuideItemWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Image; 
	struct UImage* Image_96; 
	struct UTextBlock* ItemRecipes; 
	struct UWidgetSwitcher* RecipeOrWorkShop; 
	struct UVerticalBox* RecipiesScroll; 
	struct UUMG_FieldGuideItem_Workshop_C* WorkshopCost; 

	void PopulateFromRecipeSet(struct FRecipeSetsRowHandle RecipeSet); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PopulateResourceRecipe(bool& Handled); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void RecipeOrCostClicked(struct FFieldGuideCategoriesRowHandle CategoryRow, struct FItemsStaticRowHandle ItemRow); // (Public|BlueprintCallable|BlueprintEvent)
	void PopulateRecipeOrCostDetail(struct FItemsStaticRowHandle ItemRow, struct FFieldGuideCategoriesRowHandle CategoryRow); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitFieldGuideView(struct FItemsStaticRowHandle ItemIn, struct FFieldGuideCategoriesRowHandle CategoryIn); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItem_RecipeOrCost(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

