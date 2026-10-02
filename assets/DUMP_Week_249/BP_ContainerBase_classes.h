// BlueprintGeneratedClass BP_ContainerBase.BP_ContainerBase_C
struct ABP_ContainerBase_C : ABP_WorldObject_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UInventoryComponent* Inventory; 
	struct UFMODEvent* ItemRemovedSound; 

	void OnItemRemoved(struct UInventory* Inventory, int32_t Location, struct FItemData& Item); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void WorldObject_Interact(struct AActor* Instigator); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_ContainerBase(int32_t EntryPoint); // (Final|UbergraphFunction)
};

