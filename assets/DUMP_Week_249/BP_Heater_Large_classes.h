// BlueprintGeneratedClass BP_Heater_Large.BP_Heater_Large_C
struct ABP_Heater_Large_C : ABP_Deployable_PowerToggleableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct URectLightComponent* RectLight; 
	struct USceneComponent* Scene_Lights; 
	struct UFMODAudioComponent* ActiveAudio; 
	struct UNiagaraComponent* Niagara; 
	int32_t LastRangeValue; 
	struct FModifierStatesRowHandle AuraEffect; 

	void UpdateAuraEffect(bool Active); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateThermalComponent(); // (Public|BlueprintCallable|BlueprintEvent)
	void Update Running Effects(bool ReceivingPower); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnDeviceStartRunning(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceStopRunning(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnStatContainerUpdated(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceResourceChanged(struct FIcarusResourcesEnum ResourceType); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Heater_Large(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

