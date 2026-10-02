// WidgetBlueprintGeneratedClass UMG_ResourceNetworkInspector_DeviceListChildEntry.UMG_ResourceNetworkInspector_DeviceListChildEntry_C
struct UUMG_ResourceNetworkInspector_DeviceListChildEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* DeviceDistance; 
	struct UTextBlock* DeviceName; 
	struct UBorder* EntryBorder; 
	struct UUMG_Checkbox_C* PriorityCheckbox; 
	struct UTextBlock* StateText; 
	struct UTextBlock* TotalValue; 
	struct UUMG_ButtonIcon_C* UMG_ButtonIcon; 

	void IsPriorityChangeAllowed(struct AIcarusActor* DeviceActor, bool& Allowed); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnListItemObjectSet(struct UObject* ListItemObject); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BndEvt__UMG_ResourceNetworkInspector_DeviceListChildEntry_PriorityCheckbox_K2Node_ComponentBoundEvent_0_Updated__DelegateSignature(bool Checked, bool WasForced); // (BlueprintEvent)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void OnDataUpdated(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_ResourceNetworkInspector_DeviceListChildEntry_UMG_ButtonIcon_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_ResourceNetworkInspector_DeviceListChildEntry(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

