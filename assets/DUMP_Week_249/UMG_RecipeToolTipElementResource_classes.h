// WidgetBlueprintGeneratedClass UMG_RecipeToolTipElementResource.UMG_RecipeToolTipElementResource_C
struct UUMG_RecipeToolTipElementResource_C : UUMG_RecipeElementBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* Border_2; 
	struct UTextBlock* Name; 
	struct UBorder* NameBorder; 
	struct UImage* Picture; 
	struct UTextBlock* ResourceUnits; 
	struct UUMG_RecipeItemAmount_C* UMG_RecipeItemAmount; 
	struct UBorder* Units; 
	struct FIcarusResourcesEnum ResourceInput; 
	int32_t RequiredResourceAmount; 
	bool ShowName; 
	float ElementPadding; 
	bool Output; 
	bool ShowRecipeAmount; 

	void CheckElement(bool& bCanSatisfy); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool IsOutput(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CurrentAmountUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateBackgroundImage(struct UTexture2D* Texture, enum class ProcessorPreview Selected); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Initialise(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_RecipeToolTipElementResource(int32_t EntryPoint); // (Final|UbergraphFunction)
};

