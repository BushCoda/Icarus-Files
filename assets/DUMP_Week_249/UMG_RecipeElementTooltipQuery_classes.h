// WidgetBlueprintGeneratedClass UMG_RecipeElementTooltipQuery.UMG_RecipeElementTooltipQuery_C
struct UUMG_RecipeElementTooltipQuery_C : UUserWidget {
	struct UTextBlock* Name; 
	struct UTextBlock* State; 
	struct UUMG_RecipeInputQuery_C* UMG_RecipeInputQuery; 
	struct AActor* LinkedActor; 

	void Update(struct FQueryInput QueryInput, enum class ProcessorPreview PreviewState, int32_t CurrentAmount, int32_t RecipeMultiplier, bool Output); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
};

