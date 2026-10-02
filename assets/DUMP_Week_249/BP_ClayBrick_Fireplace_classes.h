// BlueprintGeneratedClass BP_ClayBrick_Fireplace.BP_ClayBrick_Fireplace_C
struct ABP_ClayBrick_Fireplace_C : ABP_Fireplace_C {
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Bounce; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Fill; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight; 
	struct UNiagaraComponent* NS_Fireplace_FX; 

	void UpdateEffects(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
};

