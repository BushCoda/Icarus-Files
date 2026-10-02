// BlueprintGeneratedClass BP_IceBox.BP_IceBox_C
struct ABP_IceBox_C : ABP_DeployableContainerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_DEP_Icebox; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnItemAdded(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void OnGeneratorStateUpdated(bool IsActive); // (BlueprintCallable|BlueprintEvent)
	void OnBecomeInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void OnNoLongerInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_IceBox(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

