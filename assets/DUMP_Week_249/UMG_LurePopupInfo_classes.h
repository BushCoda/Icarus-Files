// WidgetBlueprintGeneratedClass UMG_LurePopupInfo.UMG_LurePopupInfo_C
struct UUMG_LurePopupInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* Border; 
	struct UTextBlock* TextBlock_100; 
	bool AddedItem; 

	void Update(struct FItemData& Item); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_UMG_LurePopupInfo(int32_t EntryPoint); // (Final|UbergraphFunction)
};

