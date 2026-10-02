// BlueprintGeneratedClass BP_ConcreteFurnace.BP_ConcreteFurnace_C
struct ABP_ConcreteFurnace_C : ABP_FireProcessorBase_C {
	struct UPointLightComponent* PointLight; 
	struct USpotLightComponent* SpotLight; 
	struct USceneComponent* Scene_Lights; 
	struct UParticleSystemComponent* ParticleSystem; 

	void UpdateEffects(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
};

