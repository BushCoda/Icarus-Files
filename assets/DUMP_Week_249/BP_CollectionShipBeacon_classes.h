// BlueprintGeneratedClass BP_CollectionShipBeacon.BP_CollectionShipBeacon_C
struct ABP_CollectionShipBeacon_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCameraComponent* Camera; 
	struct UStaticMeshComponent* Cube; 

	void DoLaunchCollectionShip(); // (Public|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ServerLaunchCollectionShip(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_CollectionShipBeacon(int32_t EntryPoint); // (Final|UbergraphFunction)
};

