// BlueprintGeneratedClass BP_Organic_Extractor.BP_Organic_Extractor_C
struct ABP_Organic_Extractor_C : ABP_Deployable_PowerToggleableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* FMODAudioExtractorLoop; 
	struct UNiagaraComponent* NS_OrganicExtractor_Steam; 
	struct UNiagaraComponent* NS_OrganicExtractor_Spray1; 
	struct UNiagaraComponent* NS_OrganicExtractor_Spray; 
	struct UNiagaraComponent* NS_Natural_Oil_Refiner_Spray; 
	struct USceneComponent* ProxyMeshesInventory; 
	struct USceneComponent* ProxyMeshesCrafting; 
	float Extraction_CurrentTime; 
	float Extraction_MaxTime; 
	int32_t UnitsPerItem; 
	struct FTimerHandle TickTimer; 
	bool bIsCreatingBiofuel; 

	void OnRep_bIsCreatingBiofuel(); // (BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void FindOrganicMatterInInventory(bool& Found, struct UInventory*& Inventory, int32_t& Slot); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TickExtractor(float DeltaTime); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateProductionState(bool NewState); // (Public|BlueprintCallable|BlueprintEvent)
	void HasSpace(bool& HasSpace); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void TryTick(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceOnStateChanged(bool bIsOn); // (BlueprintCallable|BlueprintEvent)
	void CreatingBiofuelStateUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Organic_Extractor(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

