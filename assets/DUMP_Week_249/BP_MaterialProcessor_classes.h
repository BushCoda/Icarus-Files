// BlueprintGeneratedClass BP_MaterialProcessor.BP_MaterialProcessor_C
struct ABP_MaterialProcessor_C : ABP_ResourceNetworkProcessor_C {
	struct UFMODAudioComponent* FMODAudio; 
	struct UNiagaraComponent* NS_HeatHaze_Soft; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UStaticMeshComponent* DF_Chute; 

	void UpdateEffects(bool EnergyFlowChanged, bool ProcessorActiveChanged); // (Public|BlueprintCallable|BlueprintEvent)
	void ProcessorStateUpdate(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
};

