// WidgetBlueprintGeneratedClass UMG_RecipeList.UMG_RecipeList_C
struct UUMG_RecipeList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* CheckboxBorder; 
	struct UImage* ContainerIcon; 
	struct UHorizontalBox* ContainerTipBox; 
	struct UCheckBox* DoNameSort; 
	struct UHorizontalBox* FilterList; 
	struct UUniformGridPanel* Grid; 
	struct UBorder* MainBorder; 
	struct UScrollBox* ScrollBox_1; 
	struct UEditableTextBox* SearchBox; 
	struct UHorizontalBox* SortHorizontalBox; 
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame; 
	struct UCheckBox* ValidOnly; 
	struct FMulticastInlineDelegate RecipeSelected; 
	int32_t Count; 
	struct TArray<struct FItemClassificationsIconsRowHandle> PrimaryItemTypes; 
	bool RecipeAutoSelect; 
	int32_t Visible Recipes X; 
	bool ValidOnlyValue; 
	struct FTagQueriesRowHandle SelectedQuery; 
	int32_t Visible Recipes Y; 
	struct AActor* LinkedActor; 
	struct TArray<struct UUMG_ListElement_C*> RecipeElements; 
	struct TArray<struct UUMG_RecipeElementNonInteractive_C*> RecipeElementNonInteractives; 
	int32_t Visible Recipes Auto X; 
	struct TArray<struct UUMG_RecipeElementMulti_C*> RecipeElementsMulti; 
	int32_t Visible Recipes Multi X; 
	bool RecipeMultiOutput; 
	struct FRecipeSetsRowHandle CachedRecipeSet; 
	struct TMap<struct FProcessorRecipesRowHandle, struct FSessionFlagsRowHandle> RecipeHighlightMap; 
	bool HasCorrectContainer; 
	struct FIcarusResourcesEnum Current Resource; 
	struct FIcarusResourcesEnum CurrentResource; 
	bool DoNameSortValue; 
	int32_t Visible Recipes Auto Multi X; 

	void FilterRecipesByName(struct TArray<struct FProcessorRecipeResult>& ProcessorRecipeResult); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PreFilterRecipes(struct TArray<struct FProcessorRecipeResult>& Recipes); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FullUpdate(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FSessionFlagsRowHandle GetHighlightFlag(struct FProcessorRecipesRowHandle Recipe); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateTrigger(); // (Public|BlueprintCallable|BlueprintEvent)
	void Filter(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FilterAvaliable(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FilterTypes(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FilterText(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FilterValid(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CanCraftItem(struct UObject* Widget, struct TArray<struct UInventory*>& Inventories, struct UProcessingComponent* Processing, bool& Valid); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateStates(struct UProcessingComponent* Processing, struct TArray<struct UInventory*>& Additional Inventories); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FixLayout(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ItemClickedHandler(struct FTagQueriesRowHandle TagQuery); // (Public|BlueprintCallable|BlueprintEvent)
	void On Recipe Selected(struct FProcessorRecipesRowHandle Recipe); // (Public|BlueprintCallable|BlueprintEvent)
	void Initialise(struct FRecipeSetsRowHandle RecipeSet, bool AutoSelect, bool UseInput); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__ValidOnly_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // (BlueprintEvent)
	void BndEvt__SearchBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // (HasOutParms|BlueprintEvent)
	void BndEvt__UMG_RecipeList_DoNameSort_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_RecipeList(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void RecipeSelected__DelegateSignature(struct FProcessorRecipesRowHandle ProcessorRecipe); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

