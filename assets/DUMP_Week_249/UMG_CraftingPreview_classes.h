// WidgetBlueprintGeneratedClass UMG_CraftingPreview.UMG_CraftingPreview_C
struct UUMG_CraftingPreview_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Image_55; 
	struct UVerticalBox* NoRecipeSelected; 
	struct UTextBlock* RecipeName; 
	struct UUMG_RecipeElement_C* UMG_RecipeElement; 
	struct FMulticastInlineDelegate Clicked; 

	void Recipe(struct FProcessorRecipesRowHandle& Recipe); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetRecipe(struct FProcessorRecipesRowHandle& Recipe); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Set Recipe(struct FProcessorRecipesRowHandle Recipe); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void RecipeClicked(struct FProcessorRecipesRowHandle Recipe); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_CraftingPreview(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void Clicked__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

