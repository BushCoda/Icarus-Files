// WidgetBlueprintGeneratedClass UMG_BlueprintItemBaseRecipes_List.UMG_BlueprintItemBaseRecipes_List_C
struct UUMG_BlueprintItemBaseRecipes_List_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UGridPanel* RequiredElementsBox; 
	struct UScrollBox* ScrollBox_1; 
	struct FRecipeSetsRowHandle Default Recipe Set; 
	bool DirectionDown; 
	float Amount; 
	float Speed; 

	void Setup(struct FProcessorRecipesRowHandle RowHandle); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_BlueprintItemBaseRecipes_List(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

