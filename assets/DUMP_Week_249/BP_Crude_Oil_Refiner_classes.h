// BlueprintGeneratedClass BP_Crude_Oil_Refiner.BP_Crude_Oil_Refiner_C
struct ABP_Crude_Oil_Refiner_C : ABP_Deployable_PowerToggleableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCameraComponent* Camera; 
	struct UNiagaraComponent* NS_CrudeOil_Refiner_FanSmoke; 
	struct UNiagaraComponent* NS_CrudeOil_Refiner_Smoke; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct USceneComponent* Lights; 
	struct UFMODAudioComponent* FMODAudio; 
	bool bFillingEffectsActive; 
	float ConversionRate; 
	float EnergyScale; 

	void SetFillingEffects(bool FillingEffectsOn); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_bFillingEffectsActive(); // (BlueprintCallable|BlueprintEvent)
	void ActorsRequiringOil(int32_t& NumActors); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void FillContainer(); // (BlueprintCallable|BlueprintEvent)
	void CheckOilConversion(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void TimerCheck(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceStartRunning(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceStopRunning(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Crude_Oil_Refiner(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

