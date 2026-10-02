// WidgetBlueprintGeneratedClass UMG_QuickCrafting.UMG_QuickCrafting_C
struct UUMG_QuickCrafting_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct URetainerBox* RetainerBox_1; 
	struct UUMG_CraftingProgressbar_C* UMG_CraftingProgressbar; 
	struct UUMG_RecipeElement_C* UMG_RecipeElement; 
	struct UCanvasPanel* VisibleBox; 
	bool Initialised; 

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnProcessingItemUpdated(struct FProcessingItem Item); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_QuickCrafting(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

