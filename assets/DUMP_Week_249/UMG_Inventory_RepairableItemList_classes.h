// WidgetBlueprintGeneratedClass UMG_Inventory_RepairableItemList.UMG_Inventory_RepairableItemList_C
struct UUMG_Inventory_RepairableItemList_C : UUMG_Inventory_C {
	struct UUniformGridPanel* Grid; 
	struct TArray<struct FRepairableItem> RepairableItemArray; 

	void InitialiseWithItemList(struct TArray<struct FRepairableItem>& RepairableItemArray); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

