// WidgetBlueprintGeneratedClass UMG_ClientLoggingEntry.UMG_ClientLoggingEntry_C
struct UUMG_ClientLoggingEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* MessageText; 
	struct UTextBlock* TimeText; 
	struct UBP_ClientLogItem_C* ClientLogItem; 
	int32_t TextSize; 

	void Initialize(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void OnListItemObjectSet(struct UObject* ListItemObject); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_UMG_ClientLoggingEntry(int32_t EntryPoint); // (Final|UbergraphFunction)
};

