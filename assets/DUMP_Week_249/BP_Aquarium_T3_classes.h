// BlueprintGeneratedClass BP_Aquarium_T3.BP_Aquarium_T3_C
struct ABP_Aquarium_T3_C : ABP_Aquarium_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnFuelInventoryUpdated(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Aquarium_T3(int32_t EntryPoint); // (Final|UbergraphFunction)
};

