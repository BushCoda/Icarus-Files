// BlueprintGeneratedClass BP_SecurityDoor.BP_SecurityDoor_C
struct ABP_SecurityDoor_C : ABP_LockedDoor_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* StaticMesh2; 
	struct UWidgetComponent* Widget; 
	struct UStaticMeshComponent* StaticMesh1; 
	struct FText Password; 

	void WorldObject_Interact(struct AActor* Instigator); // (Public|BlueprintCallable|BlueprintEvent)
	void GenericAction(); // (Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SecurityDoor(int32_t EntryPoint); // (Final|UbergraphFunction)
};

