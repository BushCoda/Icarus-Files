// BlueprintGeneratedClass BP_Deployable_SpawnBlocker_T3.BP_Deployable_SpawnBlocker_T3_C
struct ABP_Deployable_SpawnBlocker_T3_C : ABP_Deployable_SpawnBlocker_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_DEP_SpawnBlocker_T3; 
	struct UFMODAudioComponent* PoweredAudioLoop; 
	struct UNiagaraComponent* NS_Spray3; 
	struct UNiagaraComponent* NS_Spray2; 
	struct UNiagaraComponent* NS_Spray1; 
	struct UNiagaraComponent* NS_Spray; 
	struct UCameraComponent* Camera; 

	void CheckBlockerActive(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateSpawnBlockerEffects(); // (Public|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void GeneratorStateUpdate(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnFuelInventoryUpdated(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceOnStateChanged(bool bIsOn); // (BlueprintCallable|BlueprintEvent)
	void OutOfFuelCheck(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Deployable_SpawnBlocker_T3(int32_t EntryPoint); // (Final|UbergraphFunction)
};

