// BlueprintGeneratedClass BP_Bait_Poisoned.BP_Bait_Poisoned_C
struct ABP_Bait_Poisoned_C : ABP_DeployableBase_C {
	struct UParticleSystemComponent* P_Smoke_Poison; 
	struct UFMODAudioComponent* FlyAudio; 
	struct UNiagaraComponent* NS_Flies1; 

	void GetModifierToApplyOnConsume(struct FModifierStatesRowHandle& Modifier, float& LifeTime); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
};

