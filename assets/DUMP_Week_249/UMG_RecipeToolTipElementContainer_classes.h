// WidgetBlueprintGeneratedClass UMG_RecipeToolTipElementContainer.UMG_RecipeToolTipElementContainer_C
struct UUMG_RecipeToolTipElementContainer_C : UUMG_RecipeElementBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* Border_2; 
	struct UTextBlock* Name; 
	struct UBorder* NameBorder; 
	struct UImage* Picture; 
	float ElementPadding; 
	struct FIcarusResourcesEnum ResourceInput; 

	bool IsOutput(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Initialise(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_RecipeToolTipElementContainer(int32_t EntryPoint); // (Final|UbergraphFunction)
};

