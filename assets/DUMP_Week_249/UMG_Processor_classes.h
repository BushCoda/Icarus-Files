// WidgetBlueprintGeneratedClass UMG_Processor.UMG_Processor_C
struct UUMG_Processor_C : UUMG_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* ShelterWarning; 
	struct UWidgetAnimation* OpenMenu; 
	struct UWidgetAnimation* DeviceWarningPulse; 
	struct UBorder* ActivateFrame; 
	struct UWidgetSwitcher* AutoActivationSwitcher; 
	struct UOverlay* AutoCraftPrompt; 
	struct UOverlay* AutomatedBox-NoActivation; 
	struct UTextBlock* BenchName; 
	struct UTextBlock* BenchName2; 
	struct UImage* Border; 
	struct UUMG_BasicButton_2_C* ClearQueueButton2; 
	struct UUMG_BasicButton_2_C* CloseButton; 
	struct UBorder* CountNumber; 
	struct UUMG_BasicButton_2_C* CoverUpButton; 
	struct UUMG_BasicButton_2_C* CoverUpButton_2; 
	struct UVerticalBox* CraftAndDeviceVertBox; 
	struct UWidgetSwitcher* CraftAutoSwitcher; 
	struct UUMG_BasicButton_2_C* CraftButton2; 
	struct UBorder* CraftFrame; 
	struct UEditableText* CraftingAmount; 
	struct UOverlay* CraftingBox; 
	struct UBorder* CraftingDeviceInfo; 
	struct UVerticalBox* CraftingQueueBox; 
	struct USizeBox* CraftingSectionBox; 
	struct UTextBlock* DeviceInfo; 
	struct UTextBlock* DeviceNotSheltered; 
	struct UUMG_BasicButton_2_C* EnergyActivationButton; 
	struct UBorder* Injection; 
	struct UBorder* InteractionBorder; 
	struct UUMG_ButtonIcon_C* LeftButton; 
	struct UUMG_ButtonIcon_C* LefterButton; 
	struct UUMG_BasicButton_2_C* MaxButton; 
	struct UUMG_BasicButton_2_C* MinButton; 
	struct UUMG_Inventory_C* Player; 
	struct UHorizontalBox* QueueControls; 
	struct UVerticalBox* RecipeAndInventoryVertBox; 
	struct UGridPanel* RequiredElements; 
	struct UTextBlock* RequiredMaterialsText; 
	struct UScaleBox* RequireScale; 
	struct UUMG_ButtonIcon_C* RightButton; 
	struct UUMG_ButtonIcon_C* RighterButton; 
	struct UBorder* ShelterNotRequiredBorder; 
	struct UUMG_PhysicalKeyPrompt_C* SplitStack; 
	struct UUMG_BasicButton_2_C* StopButton2; 
	struct UUMG_IconTextButton_C* StoreAllButtonInput; 
	struct UUMG_PhysicalKeyPrompt_C* Transfer; 
	struct UUMG_IconTextButton_C* TransferLikeButton; 
	struct UUMG_CraftingPreview_C* UMG_CraftingPreview; 
	struct UUMG_CraftingPreview_C* UMG_CraftingPreview_Auto; 
	struct UUMG_DeployableModifiersList_C* UMG_DeployableModifiersList_C_2; 
	struct UUMG_DeviceInventory_C* UMG_DeviceInventory; 
	struct UUMG_EncumbranceBarLight_C* UMG_EncumbranceBarLight; 
	struct UUMG_EnvirosuitSlots_C* UMG_EnvirosuitSlots; 
	struct UUMG_FuelInventory_C* UMG_FuelInventory; 
	struct UUMG_PhysicalKey_C* UMG_PhysicalKey; 
	struct UUMG_PhysicalKey_C* UMG_PhysicalKey_97; 
	struct UUMG_Queue_C* UMG_Queue; 
	struct UUMG_RecipeList_C* UMG_RecipeList; 
	struct UUMG_Sort_C* UMG_Sort; 
	struct UInventory* PlayerInventory; 
	bool AutoSelect; 
	bool CurrentlyOn; 
	bool QueueFull; 
	bool QueueEmpty; 
	bool UpdateTrigger; 
	bool CraftButtonUpdate; 
	int32_t Multiplier; 
	struct FProcessorRecipesRowHandle LastSelected; 
	bool UseInput; 
	struct UUMG_WidgetHighlightBase_C* CachedHighlightWidget; 
	struct UInventoryComponent* Inventory Component; 
	bool LastDeviceOn; 
	bool UseProgressBarInterpolation; 
	float ProgressBarInterpRate; 
	float LastProgressBarValue; 
	float CurrentProgressBarValue; 
	float CurrentProgressBarTime; 
	bool HasCorrectContainer; 
	struct FIcarusResourcesEnum CurrentResource; 

	void GetInjectionContainer(struct UBorder*& Injection); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void IsContainerValid(struct FProcessorRecipesRowHandle RowHandle, bool& Valid); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetProcessingComponent(struct UProcessingComponent*& Processing); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateProgressBarInterp(float& NewProgressPercent); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ShouldShowShelterWarning(bool& ShowWarning); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateEnergyButton(); // (Public|BlueprintCallable|BlueprintEvent)
	void ToggleEnergyActive(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetLocalPlayerCharacter(struct AIcarusPlayerCharacterSurvival*& Character); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetBPNetworkProxy(struct UBP_NetworkProxyComponent_C*& AsBP Network Proxy Component); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateAutoCraftingPreview(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct UUMG_CraftingPreview_C* GetCraftingPreview(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ShowShelterWarningStyle(bool Sheltered); // (Public|BlueprintCallable|BlueprintEvent)
	enum class ESlateVisibility ShowShelteredIndicator(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetJoules(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetWattage(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CanQueueItem(struct FProcessorRecipesRowHandle Recipe, bool& Craftable); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateAllRecipeStates(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdatePreview(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RecipeValid(struct FProcessorRecipesRowHandle& ProcessorRecipe, bool& Valid); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	float GetTransmutationRemaining(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ProcessingItemChanged(); // (Public|BlueprintCallable|BlueprintEvent)
	void ProcessorRecipeSelected(struct FProcessorRecipesRowHandle ProcessorRecipe); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Initialise(struct UInventory* Processor, struct UInventory* Fuel, struct UInventory* Player, struct UInventory* Suit, struct AIcarusPlayerCharacter* Character); // (Public|BlueprintCallable|BlueprintEvent)
	void QueueElementClickedHandler(int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void InputInventoryUpdated(); // (BlueprintCallable|BlueprintEvent)
	void InputInventoryItemAdded(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void OnProcessingStopped(enum class EProcessorStoppedReason Reason); // (BlueprintCallable|BlueprintEvent)
	void StartAutoCraft(int32_t Slot); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__StopButton2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__ClearQueueButton2_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__CraftButton2_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__StoreAllButtonInput_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__EnergyActivationButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void UpdateCount(int32_t Count); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BasicButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__CraftingAmount_K2Node_ComponentBoundEvent_11_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // (HasOutParms|BlueprintEvent)
	void BndEvt__UMG_ButtonIcon_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__LeftButton_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void CloseUI(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_Processor_TransferLikeButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Processor_MinButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_Processor_RighterButton_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Processor_LefterButton_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_Processor(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

