// BlueprintGeneratedClass BP_Exotic_Delivery_Interface.BP_Exotic_Delivery_Interface_C
struct ABP_Exotic_Delivery_Interface_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* FMODAudio_Analyzer; 
	struct UCameraComponent* Camera; 
	struct ABP_Exotic_Transport_Pod_C* SpawnedTransportPod; 
	struct TArray<struct FItemData> PendingDropshipItems; 
	bool WaitingForPod; 
	bool WaitingForContents; 
	struct TArray<struct FMountSaveData> PendingMounts; 
	bool IsStandardOEI; 

	void GetRedirectedInventoryComponent(struct UInventoryComponent*& InventoryComponent); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Generate Spawn Pod Location(struct ABP_Transport_Pod_Base_C* TransportPod); // (Public|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GenericAction(); // (Public|BlueprintCallable|BlueprintEvent)
	void GeneticActionInt(int32_t Data); // (Public|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void GenericActionWithCharacter(struct AIcarusPlayerCharacter* Character); // (Public|BlueprintCallable|BlueprintEvent)
	void OnReceivedPlayerLoadoutExtension(struct TArray<struct FItemData>& Items, struct TArray<struct FMountSaveData>& Mounts); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void DropPodLeft(); // (BlueprintCallable|BlueprintEvent)
	void SpawnNewPod(); // (BlueprintCallable|BlueprintEvent)
	void CheckSpawnNewPod(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Exotic_Delivery_Interface(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

