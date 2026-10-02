// BlueprintGeneratedClass BP_Exotic_Processor.BP_Exotic_Processor_C
struct ABP_Exotic_Processor_C : ABP_ResourceNetworkProcessor_C {
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight_Red; 
	struct USceneComponent* Scene_Lights; 
	struct UFMODAudioComponent* FMODAudio_StartProcessor; 
	struct UNiagaraComponent* Niagara; 
	bool IsPlayingAnim; 

	void UpdateEffects(bool EnergyFlowChanged, bool ProcessorActiveChanged); // (Public|BlueprintCallable|BlueprintEvent)
};

