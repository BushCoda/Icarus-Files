// WidgetBlueprintGeneratedClass UMG_ListElement.UMG_ListElement_C
struct UUMG_ListElement_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool Selected; 
	struct FProcessorRecipesRowHandle ProcessorRecipe; 
	struct UUMG_RecipeToolTip_C* RecipeToolTip; 
	struct AActor* LinkedActor; 
	enum class E_ButtonState ButtonState; 
	bool Valid; 
	bool AlwaysValid; 
	bool MouseInteraction; 
	struct FMulticastInlineDelegate RecipeSelected; 
	bool UseInput; 
	struct FSessionFlagsRowHandle HighlightFlag; 
	struct UUMG_WidgetHighlightBase_C* QuestHelper; 
	struct TArray<struct FTagQueriesRowHandle> CachedQueries; 

	struct TArray<struct FQueryInput> GetProcessorInputsQuery(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void FullUpdate(); // (Public|BlueprintCallable|BlueprintEvent)
	struct UOverlay* GetOverlay(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateTrigger(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateVisibility(struct FTagQueriesRowHandle& ItemQuery, bool OnlyHide); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetState(bool Valid); // (Public|BlueprintCallable|BlueprintEvent)
	void Initialise(); // (Public|BlueprintCallable|BlueprintEvent)
	void InitialiseIcons(); // (Public|BlueprintCallable|BlueprintEvent)
	struct UUMG_RecipeElementImage_C* CreateResourceWidget(struct FResourceItem& ResourceItem); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CreateOutputItem(struct FItemData& CraftingOutput, struct FText& Name, struct TSoftObjectPtr<UTexture2D>& Icon); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CreateInputItem(struct FItemData& CraftingInput, struct FText& Name, struct TSoftObjectPtr<UTexture2D>& Icon, int32_t& Count); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitialiseToolTip(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct UOverlay* GetHoverCornerWidget(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct UTexture2D* GetResourceImage(enum class EIcarusResourceType Type); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct TArray<struct FResourceItem> GetResourceOutputs(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct TArray<struct FResourceItem> GetResourceInputs(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct TArray<struct FItemData> GetProcessorOutputs(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetProcessorInputs(struct TArray<struct FCraftingInput>& Items, struct TArray<struct FQueryInput>& Queries, struct TArray<struct FResourceItem>& Resources); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FProcessorRecipesRowHandle GetProcessorRecipe(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_UMG_ListElement(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void RecipeSelected__DelegateSignature(struct FProcessorRecipesRowHandle Recipe); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

