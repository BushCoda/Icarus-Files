// WidgetBlueprintGeneratedClass UMG_BlueprintRecipeSet_List.UMG_BlueprintRecipeSet_List_C
struct UUMG_BlueprintRecipeSet_List_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UGridPanel* RequiredElementsBox; 
	struct UScrollBox* ScrollBox_1; 
	struct TSet<struct FRecipeSetsRowHandle> GroupCraftedSets; 
	float Speed; 
	bool DirectionDown; 
	float Amount; 

	void Setup(struct FTalentsRowHandle Talent); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_BlueprintRecipeSet_List(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

