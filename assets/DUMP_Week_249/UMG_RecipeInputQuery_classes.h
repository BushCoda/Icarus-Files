// WidgetBlueprintGeneratedClass UMG_RecipeInputQuery.UMG_RecipeInputQuery_C
struct UUMG_RecipeInputQuery_C : UUMG_RecipeElementBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* BackgroundImage; 
	struct UImage* IconImage; 
	struct UTextBlock* TagText; 
	struct UUMG_RecipeItemAmount_C* UMG_RecipeItemAmount; 
	struct FMulticastInlineDelegate Selected; 
	bool Output; 
	struct FQueryInput QueryInput; 

	void UpdateTooltip(enum class ProcessorPreview State); // (Public|BlueprintCallable|BlueprintEvent)
	void CreateTooltip(struct UUserWidget*& Tooltip); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void CheckElement(bool& bCanSatisfy); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool IsOutput(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CurrentAmountUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateBackgroundImage(struct UTexture2D* Texture, enum class ProcessorPreview Selected); // (Public|BlueprintCallable|BlueprintEvent)
	void Initialise(struct FQueryInput QueryInput, int32_t Multiplier, bool Output); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_RecipeInputQuery(int32_t EntryPoint); // (Final|UbergraphFunction)
	void Selected__DelegateSignature(struct UUMG_RecipeInputItem_C* SelectedRecipe); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

