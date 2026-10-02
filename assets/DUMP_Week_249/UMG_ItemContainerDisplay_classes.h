// WidgetBlueprintGeneratedClass UMG_ItemContainerDisplay.UMG_ItemContainerDisplay_C
struct UUMG_ItemContainerDisplay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* Border; 
	struct UTextBlock* TextBlock_Mount; 
	struct UTextBlock* TextBlock_NoItems; 
	struct UTextBlock* Title_Items; 
	struct UTextBlock* Title_Mounts; 
	struct UUMG_IcarusGrid_C* UMG_IcarusGrid; 
	bool AddedItem; 

	void Update(struct FItemData& Item); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_UMG_ItemContainerDisplay(int32_t EntryPoint); // (Final|UbergraphFunction)
};

