// WidgetBlueprintGeneratedClass UMG_FieldGuideItem_RecipeRow.UMG_FieldGuideItem_RecipeRow_C
struct UUMG_FieldGuideItem_RecipeRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* ArrowToOut; 
	struct UUMG_IcarusGrid_C* CreatedAt; 
	struct UVerticalBox* ItemCreated; 
	struct UUMG_IcarusGrid_C* RecipeInputs; 
	struct FItemsStaticRowHandle Ingredient; 
	struct FFieldGuideCategoriesRowHandle CategoryRow; 
	struct FMulticastInlineDelegate ResourceClicked; 
	struct FFieldGuideRecipeInfo FieldGuideRecipeInfo; 
	struct FProcessorRecipesRowHandle RecipeRowHandle; 

	void SetupResourceInputs(struct FIcarusResourcesEnum Resource); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetRecipeOfResource(); // (Public|BlueprintCallable|BlueprintEvent)
	void RecipeClicked(struct FFieldGuideCategoriesRowHandle CategoryRow, struct FItemsStaticRowHandle ItemRow); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void InitRecipe(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FieldGuideItem_RecipeRow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ResourceClicked__DelegateSignature(struct FFieldGuideCategoriesRowHandle CategoryRow, struct FItemsStaticRowHandle ItemRow); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

