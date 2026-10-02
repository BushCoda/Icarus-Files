// WidgetBlueprintGeneratedClass UMG_RecipeToolTipElementQuery.UMG_RecipeToolTipElementQuery_C
struct UUMG_RecipeToolTipElementQuery_C : UUMG_RecipeElementBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* Border_2; 
	struct UTextBlock* Name; 
	struct UBorder* NameBorder; 
	struct UImage* Picture; 
	struct UTextBlock* ResourceUnits; 
	struct UUMG_RecipeItemAmount_C* UMG_RecipeItemAmount; 
	struct UBorder* Units; 
	struct FQueryInput QueryInput; 
	bool ShowName; 
	float ElementPadding; 
	bool ShowRecipeAmount; 

	void CheckElement(bool& bCanSatisfy); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool IsOutput(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CurrentAmountUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateBackgroundImage(struct UTexture2D* Texture, enum class ProcessorPreview Selected); // (Public|BlueprintCallable|BlueprintEvent)
	void Initialise(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_RecipeToolTipElementQuery(int32_t EntryPoint); // (Final|UbergraphFunction)
};

