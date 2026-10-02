// WidgetBlueprintGeneratedClass UMG_ResourceNetworkInspector_StorageDeviceListEntry.UMG_ResourceNetworkInspector_StorageDeviceListEntry_C
struct UUMG_ResourceNetworkInspector_StorageDeviceListEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* DeviceNameText; 
	struct UBorder* EntryBorder; 
	struct UTextBlock* RateText; 
	struct UProgressBar* StoredBar; 
	struct UTextBlock* StoredText; 

	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void OnListItemObjectSet(struct UObject* ListItemObject); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_UMG_ResourceNetworkInspector_StorageDeviceListEntry(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

