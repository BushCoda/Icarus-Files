// BlueprintGeneratedClass BP_FireProcessorBase.BP_FireProcessorBase_C
struct ABP_FireProcessorBase_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* FMOD_Fire_Audio; 
	struct FModifierStatesRowHandle AuraEffect; 
	struct UFMODEvent* StopAudioEvent; 

	void GeneratorStateUpdate(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateTraits(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateAura(bool Active); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateEffects(bool Active); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateActiveState(bool NewActiveState); // (Public|BlueprintCallable|BlueprintEvent)
	void OnDeviceOnStateChanged(bool bIsOn); // (BlueprintCallable|BlueprintEvent)
	void OnGeneratorOutOfFuel(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_FireProcessorBase(int32_t EntryPoint); // (Final|UbergraphFunction)
};

