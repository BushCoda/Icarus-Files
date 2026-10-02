// WidgetBlueprintGeneratedClass UMG_ResourceNetworkInspector_DeviceListEntry.UMG_ResourceNetworkInspector_DeviceListEntry_C
struct UUMG_ResourceNetworkInspector_DeviceListEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* DeviceName; 
	struct UBorder* EntryBorder; 
	struct UTextBlock* IdleCount; 
	struct UListView* InstancesListView; 
	struct UUMG_LoadingIcon_C* LoadingSpinner; 
	struct UTextBlock* OffCount; 
	struct UTextBlock* OnCount; 
	struct UImage* PriorityIcon; 
	struct UButton* RowExpandButton; 
	struct UTextBlock* TotalValue; 
	bool Expanded; 
	struct TMap<int32_t, struct UBP_ResourceNetworkInspectorIndividualDeviceListItemData_C*> InstancesMap; 
	bool RowHovered; 

	void UpdateInstanceDataSpinnerVisibility(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateRowColour(); // (Public|BlueprintCallable|BlueprintEvent)
	void ProcessDeviceInstanceData(struct FIcarusResourcesEnum ResourceType, struct TArray<struct FNetworkDeviceInstanceData>& Data, bool bShowPriorityBox, struct TArray<struct UBP_ResourceNetworkInspectorIndividualDeviceListItemData_C*>& SortedObjectList); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CanExpand(bool& CanExpand); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnListItemObjectSet(struct UObject* ListItemObject); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BndEvt__UMG_ResourceNetworkInspector_DeviceListEntry_RowExpandButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void ToggleExpanded(); // (BlueprintCallable|BlueprintEvent)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void StartInstanceRequests(); // (BlueprintCallable|BlueprintEvent)
	void StopInstanceRequests(); // (BlueprintCallable|BlueprintEvent)
	void OnDataUpdated(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_ResourceNetworkInspector_DeviceListEntry_RowExpandButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_ResourceNetworkInspector_DeviceListEntry_RowExpandButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_ResourceNetworkInspector_DeviceListEntry(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

