// WidgetBlueprintGeneratedClass UMG_RepairBench_ConfirmRepair.UMG_RepairBench_ConfirmRepair_C
struct UUMG_RepairBench_ConfirmRepair_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UGridPanel* GridPanel_MissingResources; 
	struct UGridPanel* GridPanel_RequiredResources; 
	struct UOverlay* InventoryOverlay_ConsumedResources; 
	struct UOverlay* InventoryOverlay_MissingResources; 
	struct UOverlay* InventoryOverlay_NoRepair; 
	struct UOverlay* InventoryOverlay_ToRepair; 
	struct UUMG_DarkTitlebar_C* UMG_DarkTitlebar_Consumed; 
	struct UUMG_DarkTitlebar_C* UMG_DarkTitlebar_Missing; 
	struct UUMG_DarkTitlebar_C* UMG_DarkTitlebar_NoRepair; 
	struct UUMG_DarkTitlebar_C* UMG_DarkTitlebar_ToRepair; 
	struct UUMG_Inventory_RepairableItemList_C* UMG_Inventory_NonRepairableItemList; 
	struct UUMG_Inventory_RepairableItemList_C* UMG_Inventory_RepairableItemList; 
	struct AActor* LinkedActor; 
	struct FInventoryIDEnum Inventory ID; 
	struct TArray<struct FRepairableItem> ItemsToRepair; 
	struct TArray<struct FRepairableItem> ItemsNotRepairable; 
	struct TArray<struct FQueueItem> RequiredResources; 
	struct TArray<struct FQueueItem> MissingResources; 
	int32_t X; 
	struct TArray<struct FRepairableItem> MissingPower; 

	void Initialise(struct AActor* LinkedActor, struct TArray<struct FRepairableItem>& ItemsToRepair, struct TArray<struct FRepairableItem>& ItemsNotRepairable, struct TArray<struct FQueueItem>& RequiredResources, struct TArray<struct FQueueItem>& MissingResources, struct TArray<struct FRepairableItem>& MissingPower); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_RepairBench_ConfirmRepair(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

