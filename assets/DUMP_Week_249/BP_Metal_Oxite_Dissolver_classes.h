// BlueprintGeneratedClass BP_Metal_Oxite_Dissolver.BP_Metal_Oxite_Dissolver_C
struct ABP_Metal_Oxite_Dissolver_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* FMOD_Active; 
	struct UNiagaraComponent* Niagara1; 
	struct USceneComponent* Scene_Niagara; 
	struct UPointLightComponent* PointLight7; 
	struct UPointLightComponent* PointLight6; 
	struct UPointLightComponent* PointLight5; 
	struct UPointLightComponent* PointLight4; 
	struct UPointLightComponent* PointLight3; 
	struct UPointLightComponent* PointLight2; 
	struct UPointLightComponent* PointLight1; 
	struct USceneComponent* Scene_Lights; 

	void ProcessorStateUpdate(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateEffects(bool Active); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Metal_Oxite_Dissolver(int32_t EntryPoint); // (Final|UbergraphFunction)
};

