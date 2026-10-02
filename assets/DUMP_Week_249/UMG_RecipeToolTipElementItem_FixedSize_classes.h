// WidgetBlueprintGeneratedClass UMG_RecipeToolTipElementItem_FixedSize.UMG_RecipeToolTipElementItem_FixedSize_C
struct UUMG_RecipeToolTipElementItem_FixedSize_C : UUMG_RecipeElementBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Picture; 
	struct UUMG_RecipeItemAmount_C* UMG_RecipeItemAmount; 
	bool Output; 
	bool ShowRecipeAmount; 
	struct FCraftingInput ItemInput; 

	void CheckElement(bool& bCanSatisfy); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool IsOutput(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CurrentAmountUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateBackgroundImage(struct UTexture2D* Texture, enum class ProcessorPreview Selected); // (Public|BlueprintCallable|BlueprintEvent)
	void Initialise(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_RecipeToolTipElementItem_FixedSize(int32_t EntryPoint); // (Final|UbergraphFunction)
};

