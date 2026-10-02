// WidgetBlueprintGeneratedClass UMG_Crafting.UMG_Crafting_C
struct UUMG_Crafting_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_BasicButton_2_C* ClearQueueButton; 
	struct UBorder* CraftAmountBorder; 
	struct UUMG_BasicButton_2_C* CraftButton; 
	struct UEditableText* CraftingAmount; 
	struct UHorizontalBox* KeyPrompts; 
	struct UUMG_ButtonIcon_C* LeftButton; 
	struct UUMG_ButtonIcon_C* LefterButton; 
	struct UUMG_BasicButton_2_C* MaxButton; 
	struct UUMG_BasicButton_2_C* MinButton; 
	struct UTextBlock* RecipeName; 
	struct UGridPanel* RequiredElementGrid; 
	struct UUMG_ButtonIcon_C* RightButton; 
	struct UUMG_ButtonIcon_C* RighterButton; 
	struct UUMG_BasicButton_2_C* StopButton; 
	struct UUMG_CraftingPreview_C* UMG_CraftingPreview; 
	struct UUMG_EncumbranceBarLight_C* UMG_EncumbranceBarLight; 
	struct UUMG_Inventory_C* UMG_Inventory; 
	struct UUMG_InventoryDropZone_C* UMG_InventoryDropZone; 
	struct UUMG_Queue_C* UMG_Queue; 
	struct UUMG_RecipeList_C* UMG_RecipeList; 
	struct UUMG_Sort_C* UMG_Sort; 
	struct FProcessorRecipesRowHandle Recipe; 
	struct UProcessingComponent* ProcessingComponent; 
	bool UpdateTrigger; 
	bool QueueFull; 
	int32_t Multiplier; 
	bool FullUpdateRequested; 

	void CanQueueItem(struct FProcessorRecipesRowHandle ProcessorRecipe, bool& Craftable); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Update All Recipes(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Selected Recipe Updated(struct FProcessorRecipesRowHandle NewRecipe); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PanelClosed(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateCrafting(bool IsCrafting); // (Public|BlueprintCallable|BlueprintEvent)
	void RefreshRecipes(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Initialise(struct UInventory* Inventory, struct UProcessingComponent* Processor); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ElementClicked(struct FProcessorRecipesRowHandle Element); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BindProcessingEvent(); // (BlueprintCallable|BlueprintEvent)
	void ProcessingUpdated(); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_BasicButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BindInventoryEvent(); // (BlueprintCallable|BlueprintEvent)
	void UpdateRecipes(); // (BlueprintCallable|BlueprintEvent)
	void OnItemUpdated(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void QueueElementClickedHandler(int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__StopButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void UpdateCount(int32_t Count); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BasicButton_3_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__CraftingAmount_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // (HasOutParms|BlueprintEvent)
	void BndEvt__CraftingAmount_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // (HasOutParms|BlueprintEvent)
	void BndEvt__ClearQueueButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__RightButton_1_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__LeftButton_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(); // (BlueprintEvent)
	void RequestFullUpdate(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_Crafting_MinButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_Crafting_RighterButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Crafting_LefterButton_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_Crafting(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

