// BlueprintGeneratedClass BP_BasicOxiteDissolver.BP_BasicOxiteDissolver_C
struct ABP_BasicOxiteDissolver_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* Balloon; 
	struct UNiagaraComponent* Niagara; 
	struct UFMODAudioComponent* FMOD_Active_Audio; 
	bool RequiresUpdate; 
	int32_t UnitsToTransfer; 
	struct UInventory* GeneralInventory; 
	float FillScale; 
	int32_t StoredUnits; 
	int32_t MaximumStoredUnits; 
	struct UFMODEvent* ConsumeOxygenSound; 
	struct UFMODEvent* ActiveSound; 

	void GetWidgetClass(struct UUserWidget*& Widget); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GeneratorStateUpdate(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void Update_FmodParameters(); // (Public|BlueprintCallable|BlueprintEvent)
	void Deployable_Pickup(struct AActor* Instigator, bool& PickedUp); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Leak(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_FillScale(); // (BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void FillableUnitsUpdated(); // (BlueprintCallable|BlueprintEvent)
	void OnInventoryItemAdded(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void Multi_OnConsumeOxygen(struct AIcarusPlayerCharacter* Instigator); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void DeployableTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_BasicOxiteDissolver(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

