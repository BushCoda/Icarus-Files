// BlueprintGeneratedClass BP_Workshop_Heater.BP_Workshop_Heater_C
struct ABP_Workshop_Heater_C : ABP_Deployable_PowerToggleableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* Proxy_Fuel; 
	struct UCameraComponent* Camera; 
	struct URectLightComponent* RectLight; 
	struct USceneComponent* Scene_Lights; 
	struct UFMODAudioComponent* ActiveAudio; 
	struct UNiagaraComponent* Niagara; 
	int32_t LastRangeValue; 
	struct FModifierStatesRowHandle AuraEffect; 
	struct UInventory* FuelInventory; 

	void CalculateIsDeviceRunning(bool& IsRunning); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void UpdateAuraEffect(bool Active); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateThermalComponent(); // (Public|BlueprintCallable|BlueprintEvent)
	void On Active State Changed(bool Active); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnDeviceStartRunning(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceStopRunning(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnStatContainerUpdated(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceTurnedOn(); // (BlueprintCallable|BlueprintEvent)
	void OnFuelInventoryUpdated(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Workshop_Heater(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

