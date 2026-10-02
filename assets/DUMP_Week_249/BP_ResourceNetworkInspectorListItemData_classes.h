// BlueprintGeneratedClass BP_ResourceNetworkInspectorListItemData.BP_ResourceNetworkInspectorListItemData_C
struct UBP_ResourceNetworkInspectorListItemData_C : UObject {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FCompactNetworkDeviceData Data; 
	int32_t Index; 
	bool bShowPriorityBox; 
	struct FIcarusResourcesEnum ResourceType; 
	struct FMulticastInlineDelegate OnUpdated; 

	void DataUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ResourceNetworkInspectorListItemData(int32_t EntryPoint); // (Final|UbergraphFunction)
	void OnUpdated__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

