// BlueprintGeneratedClass BP_Smoker_T3.BP_Smoker_T3_C
struct ABP_Smoker_T3_C : ABP_ToggleableProcessorBase_C {
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UPointLightComponent* PointLight_Fill; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UNiagaraComponent* NS_Potbelly_Smoke; 
	struct UNiagaraComponent* NS_Potbelly_Fire; 
	struct USceneComponent* Scene_Effects; 

	void UpdateEffects(bool Active); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
};

