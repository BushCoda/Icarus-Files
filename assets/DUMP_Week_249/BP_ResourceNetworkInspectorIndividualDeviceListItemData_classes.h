// BlueprintGeneratedClass BP_ResourceNetworkInspectorIndividualDeviceListItemData.BP_ResourceNetworkInspectorIndividualDeviceListItemData_C
struct UBP_ResourceNetworkInspectorIndividualDeviceListItemData_C : UObject {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	int32_t Index; 
	struct FNetworkDeviceInstanceData Data; 
	bool bShowPriorityBox; 
	struct FIcarusResourcesEnum ResourceType; 
	struct FMulticastInlineDelegate OnDataUpdated; 

	void DataUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ResourceNetworkInspectorIndividualDeviceListItemData(int32_t EntryPoint); // (Final|UbergraphFunction)
	void OnDataUpdated__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

