// WidgetBlueprintGeneratedClass UMG_RecipeElementTooltipItem.UMG_RecipeElementTooltipItem_C
struct UUMG_RecipeElementTooltipItem_C : UUserWidget {
	struct UTextBlock* CraftedFrom; 
	struct UTextBlock* CraftedFrom_2; 
	struct UVerticalBox* CraftedFromContent; 
	struct UGridPanel* CraftedFromGrid; 
	struct UImage* divider; 
	struct UImage* divider_2; 
	struct UImage* divider_3; 
	struct UImage* divider_4; 
	struct UTextBlock* Name; 
	struct UTextBlock* State; 
	struct UUMG_RecipeInputItem_C* UMG_RecipeInput; 
	struct UVerticalBox* WorkshopContent; 
	struct UGridPanel* WorkshopGrid; 
	struct AActor* LinkedActor; 
	struct TArray<struct FFieldGuideRecipeInfo> Recipes Out; 

	void InitWorkshopSection(struct FItemsStaticRowHandle IngredientRow); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitCraftedFromSection(struct FItemsStaticRowHandle IngredientRow); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Update(struct FCraftingInput CraftingInput, enum class ProcessorPreview PreviewState, int32_t CurrentAmount, int32_t RecipeMultiplier, bool Output); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
};

