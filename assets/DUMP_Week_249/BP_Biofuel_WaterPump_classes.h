// BlueprintGeneratedClass BP_Biofuel_WaterPump.BP_Biofuel_WaterPump_C
struct ABP_Biofuel_WaterPump_C : ABP_Deployable_PowerToggleableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCameraComponent* Camera; 
	struct UStaticMeshComponent* StaticMesh; 
	struct UNiagaraComponent* NS_WaterPump; 
	struct UFMODAudioComponent* FMODAudio; 
	struct UInventory* FuelInventory; 

	void GetWeatherResourceModifierStrengthAndType(int32_t BaseModifierEffectiveness, struct FModifierStatesRowHandle Modifier, int32_t& PowerModifierEffectiveness, int32_t& WaterModifierEffectiveness); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GeneratorStateUpdate(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void UpdateRunningEffects(bool Running); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnDeviceStartRunning(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceStopRunning(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceTurnedOn(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ClearWeatherResourceModifier(); // (Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Biofuel_WaterPump(int32_t EntryPoint); // (Final|UbergraphFunction)
};

