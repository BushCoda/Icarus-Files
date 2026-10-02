// WidgetBlueprintGeneratedClass UMG_RepairBench.UMG_RepairBench_C
struct UUMG_RepairBench_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* OpenMenu; 
	struct UUMG_BasicButton_2_C* ButtonClose; 
	struct UBorder* DeviceInfoNote; 
	struct UBorder* DeviceInfoPower; 
	struct UBorder* DeviceInfoShelter; 
	struct UVerticalBox* InventoryVertBox; 
	struct UBorder* MainBorder; 
	struct UUMG_BasicButton_2_C* RepairAll; 
	struct UUMG_BasicButton_2_C* RepairArmor; 
	struct UUMG_BasicButton_2_C* RepairWorkshop; 
	struct USlider* Slider_Threshold; 
	struct UTextBlock* TextBlock_Threshold; 
	struct UUMG_DeviceInventory_C* UMG_DeviceInventory; 
	struct UUMG_PlayerInventory_C* UMG_PlayerInventory; 
	struct UUMG_Titlebar_C* UMG_Titlebar; 
	struct UVerticalBox* VerticalBox_ThresholdContainer; 
	struct UInventory* Inventory; 
	bool ShowStoreAll; 
	bool ShowTakeAll; 
	struct ABP_Repair_Bench_C* RepairBench_Ref; 
	struct AIcarusPlayerCharacter* PlayerCharacter_Ref; 
	struct AIcarusPlayerController* PlayerController_Ref; 
	struct ABP_IcarusPlayerControllerSurvival_C* BPIcarusPlayerController_Ref; 
	struct UItemManipulationComponent* IPCManipulation_Ref; 
	struct TArray<struct UInventory*> Inventories; 
	struct TArray<struct FRepairableItem> RepairList'; 
	struct TArray<struct FQueueItem> PlayerMaterials; 
	struct TArray<struct FRepairableItem> CanRepair; 
	struct TArray<struct FQueueItem> StackedConsumedMaterials; 
	struct TArray<struct FRepairableItem> CantRepair; 
	struct TArray<struct FRepairableItem> CantRepairPower; 
	struct TArray<struct FRepairableItem> test; 
	struct TArray<struct FQueueItem> TestResources; 
	struct UUMG_ConfirmationPopup_C* Confirmation; 
	struct ABP_Repair_Bench_C* RepairBenchRef; 
	struct TArray<struct FQueueItem> MissingRepairMaterials; 

	void GetRepairInventories(struct TArray<struct UInventory*>& Inventories); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetRepairThreshold(float InValue); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateItemVisibility(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateButtonVisibility(bool HasPower, bool HasShelter); // (Public|BlueprintCallable|BlueprintEvent)
	void ItemIsDamagedEnough(struct FItemData Item, bool& DamagedEnough); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShowPoweredIndicator(bool HasPower); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckPoweredIndicator(bool& IsPowered); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ShowShelteredIndicator(bool Sheltered); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckShelteredIndicator(bool& IsSheltered); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void RepairItemsInInventory(struct UInventory* Inventory, bool Armor); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void LinkedActorDestroyed(struct AActor* DestroyedActor); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupObjectInventory(struct UInventory* ContainerInventory); // (Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_RepairBench_ButtonRepair_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_RepairBench_RepairWorkshop_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_RepairBench_RepairArmor_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void AttemptRepair(bool bArmor, bool bWorkshopOnly, bool bExcludeWorkshop, struct TArray<struct UInventory*>& Inventories); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void PerformRepair(); // (BlueprintCallable|BlueprintEvent)
	void AbortRepair(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_RepairBench_Slider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_RepairBench(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

