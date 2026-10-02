// BlueprintGeneratedClass BP_StoneFurnace.BP_StoneFurnace_C
struct ABP_StoneFurnace_C : ABP_FireProcessorBase_C {
	struct UStaticMeshComponent* SM_DEP_Campfire_Wood_Full_v2; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UNiagaraComponent* Niagara; 
	struct UPointLightComponent* PointLight_Bounce_Exterior; 
	struct UPointLightComponent* PointLight_Bounce_Top; 
	struct USceneComponent* Scene_Lights; 

	void UpdateEffects(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
};

