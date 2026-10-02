// BlueprintGeneratedClass BP_Mission_Device_EDEN.BP_Mission_Device_EDEN_C
struct ABP_Mission_Device_EDEN_C : ABP_Mission_Communication_Upgradeable_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void OnInventoryItemChanged(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Mission_Device_EDEN(int32_t EntryPoint); // (Final|UbergraphFunction)
};

