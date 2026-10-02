// BlueprintGeneratedClass BP_ToggleableProcessorBase.BP_ToggleableProcessorBase_C
struct ABP_ToggleableProcessorBase_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* FMOD_Fire_Audio; 
	struct UFMODEvent* StopAudioEvent; 

	void GeneratorStateUpdate(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateTraits(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateEffects(bool Active); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateActiveState(bool NewActiveState); // (Public|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnDeviceOnStateChanged(bool bIsOn); // (BlueprintCallable|BlueprintEvent)
	void OnGeneratorOutOfFuel(); // (BlueprintCallable|BlueprintEvent)
	void OnFuelItemAdded(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ToggleableProcessorBase(int32_t EntryPoint); // (Final|UbergraphFunction)
};

