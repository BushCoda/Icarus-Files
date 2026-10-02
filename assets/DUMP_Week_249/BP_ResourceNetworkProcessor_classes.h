// BlueprintGeneratedClass BP_ResourceNetworkProcessor.BP_ResourceNetworkProcessor_C
struct ABP_ResourceNetworkProcessor_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool HasEnergy; 
	struct FModifierStatesRowHandle WaterConnectionSpeedUpModifier; 

	void UpdateWaterRequirement(bool bActive); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateEffects(bool EnergyFlowChanged, bool ProcessorActiveChanged); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_HasEnergy(); // (BlueprintCallable|BlueprintEvent)
	void ProcessorStateUpdate(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateWater(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateEnergy(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateDevice(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateModifiers(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnDeviceResourceChanged(struct FIcarusResourcesEnum ResourceType); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ResourceNetworkProcessor(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

