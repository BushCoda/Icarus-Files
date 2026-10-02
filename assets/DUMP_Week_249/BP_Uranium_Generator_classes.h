// BlueprintGeneratedClass BP_Uranium_Generator.BP_Uranium_Generator_C
struct ABP_Uranium_Generator_C : ABP_Deployable_PowerToggleableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct USceneComponent* Scene_Lights; 
	struct UNiagaraComponent* NS_OrganicExtractor_Steam; 
	struct UNiagaraComponent* NS_CrudeOil_Refiner_FanSmoke1; 
	struct UNiagaraComponent* NS_CrudeOil_Refiner_FanSmoke; 
	struct UCameraComponent* Camera; 
	struct UFMODAudioComponent* FMODAudio; 
	struct UInventory* FuelInventory; 

	void GetWeatherResourceModifierStrengthAndType(int32_t BaseModifierEffectiveness, struct FModifierStatesRowHandle Modifier, int32_t& PowerModifierEffectiveness, int32_t& WaterModifierEffectiveness); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GeneratorStateUpdate(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void OnActivateStateChanged(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnDeviceStartRunning(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceStopRunning(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceTurnedOn(); // (BlueprintCallable|BlueprintEvent)
	void ClearWeatherResourceModifier(); // (Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Uranium_Generator(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

