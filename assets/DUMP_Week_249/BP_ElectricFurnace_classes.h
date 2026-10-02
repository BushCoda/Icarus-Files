// BlueprintGeneratedClass BP_ElectricFurnace.BP_ElectricFurnace_C
struct ABP_ElectricFurnace_C : ABP_ResourceNetworkProcessor_C {
	struct URectLightComponent* RectLight1; 
	struct USpotLightComponent* SpotLight1; 
	struct USceneComponent* Lights1; 
	struct USpotLightComponent* SpotLight; 
	struct UPointLightComponent* PointLight; 
	struct URectLightComponent* RectLight; 
	struct USceneComponent* Lights; 
	struct UFMODAudioComponent* FMODAudio; 
	struct UParticleSystemComponent* ParticleSystem; 

	void UpdateEffects(bool EnergyFlowChanged, bool ProcessorActiveChanged); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
};

