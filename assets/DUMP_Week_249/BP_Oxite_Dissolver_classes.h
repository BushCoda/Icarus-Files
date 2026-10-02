// BlueprintGeneratedClass BP_Oxite_Dissolver.BP_Oxite_Dissolver_C
struct ABP_Oxite_Dissolver_C : ABP_ProcessorBase_C {
	struct UNiagaraComponent* Niagara_Drip04; 
	struct UNiagaraComponent* Niagara_Drip03; 
	struct UNiagaraComponent* Niagara_Drip02; 
	struct UNiagaraComponent* Niagara_Drip01; 
	struct UNiagaraComponent* Niagara_TopFX; 
	struct USceneComponent* Niagara; 
	struct UFMODAudioComponent* FMOD_ActiveAudio_Combust; 
	struct UFMODAudioComponent* FMOD_ActiveAudio_Tanks; 
	struct USkeletalMeshComponent* SK_DEP_Oxite_Dissolver_Door_Sulfur; 
	struct USkeletalMeshComponent* SK_DEP_Oxite_Dissolver_Door_Oxite; 

	void UpdateEffects(bool Active); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ProcessorStateUpdate(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
};

