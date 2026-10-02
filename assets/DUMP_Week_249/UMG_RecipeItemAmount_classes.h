// WidgetBlueprintGeneratedClass UMG_RecipeItemAmount.UMG_RecipeItemAmount_C
struct UUMG_RecipeItemAmount_C : UUserWidget {
	struct UBorder* Border_133; 
	struct UTextBlock* Count; 

	void SetRecipeAmountQuery(int32_t Multiplier, int32_t Current, int32_t Required, bool Output); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetRecipeAmountResource(int32_t Units, int32_t Multiplier, int32_t Current, bool Output, struct FString Unit); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateColor(enum class ProcessorPreview Selected); // (Public|BlueprintCallable|BlueprintEvent)
	void SetRecipeAmount(struct FCraftingInput CraftingInput, int32_t Multiplier, int32_t Current, bool Output); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
};

