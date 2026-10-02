// BlueprintGeneratedClass BP_WaterWheel_Generator.BP_WaterWheel_Generator_C
struct ABP_WaterWheel_Generator_C : ABP_Deployable_PowerToggleableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_DEP_GEN_WaterWheel_v2; 
	struct UNiagaraComponent* NS_WaterDropping03; 
	struct UNiagaraComponent* NS_WaterDropping02; 
	struct UNiagaraComponent* NS_WaterMoving; 
	struct UParticleSystemComponent* ParticleSystem; 
	struct UCameraComponent* Camera; 
	struct UFMODAudioComponent* FMODAudio; 
	struct UInventory* GeneralInventory; 
	float RotationRate; 
	bool Is Active; 
	struct FTimerHandle AddItemTimer; 

	void GetWeatherResourceModifierStrengthAndType(int32_t BaseModifierEffectiveness, struct FModifierStatesRowHandle Modifier, int32_t& PowerModifierEffectiveness, int32_t& WaterModifierEffectiveness); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool IsClogged(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CalculateIsDeviceRunning(bool& IsRunning); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateEffects(bool bNewActive); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddItem(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheckForActivation(); // (Public|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnInventoryUpdated(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void AddItems(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceStartRunning(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceStopRunning(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceOnStateChanged(bool bIsOn); // (BlueprintCallable|BlueprintEvent)
	void UpdateAddItemTimerState(bool TimerActive); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ClearWeatherResourceModifier(); // (Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_WaterWheel_Generator(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

