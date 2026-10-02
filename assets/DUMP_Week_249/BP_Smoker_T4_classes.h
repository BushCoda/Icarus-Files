// BlueprintGeneratedClass BP_Smoker_T4.BP_Smoker_T4_C
struct ABP_Smoker_T4_C : ABP_ProcessorBase_C {
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UPointLightComponent* PointLight_Fill; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Left; 
	struct UPointLightComponent* PointLight_Fill_Left; 
	struct UNiagaraComponent* NS_Potbelly_Fire_Left; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UNiagaraComponent* NS_Potbelly_Smoke; 
	struct UNiagaraComponent* NS_Potbelly_Fire; 
	struct USceneComponent* Scene_Effects; 
	struct UFMODAudioComponent* FMOD_Fire_Audio; 

	void ProcessorStateUpdate(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void GeneratorStateUpdate(bool Active); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
};

