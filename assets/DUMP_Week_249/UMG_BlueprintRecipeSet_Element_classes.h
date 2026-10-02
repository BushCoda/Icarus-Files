// WidgetBlueprintGeneratedClass UMG_BlueprintRecipeSet_Element.UMG_BlueprintRecipeSet_Element_C
struct UUMG_BlueprintRecipeSet_Element_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* CountText; 
	struct UImage* Image_129; 
	struct UHorizontalBox* Inputs; 
	struct UImage* ItemImage; 
	struct UTextBlock* Name; 
	struct FProcessorRecipesRowHandle Recipe; 
	struct FItemData Item Template; 
	int32_t Count; 

	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_BlueprintRecipeSet_Element(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

