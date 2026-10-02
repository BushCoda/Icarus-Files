// WidgetBlueprintGeneratedClass UMG_RecipeElementTooltipResource.UMG_RecipeElementTooltipResource_C
struct UUMG_RecipeElementTooltipResource_C : UUserWidget {
	struct UTextBlock* Name; 
	struct UTextBlock* State; 
	struct UUMG_RecipeInputResource_C* UMG_RecipeInputResource; 
	struct AActor* LinkedActor; 

	void Update(enum class ProcessorPreview PreviewState, struct FIcarusResourcesEnum ResourceType, int32_t CurrentAmount, int32_t RecipeMultiplier, bool Output); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
};

