// BlueprintGeneratedClass BP_Downed_Drone.BP_Downed_Drone_C
struct ABP_Downed_Drone_C : ABP_WorldObject_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* ExplosionAudio; 
	struct UParticleSystemComponent* Explode_Particle; 
	struct UFMODAudioComponent* AlarmAudio; 
	struct UGenericAITargetComponent* GenericAITarget; 
	struct UIcarusMapIconComponent* IcarusMapIcon; 
	struct UParticleSystemComponent* Sparks_Particle; 
	struct UParticleSystemComponent* Smoke_Particle; 
	struct UStaticMeshComponent* SM_ObjectMesh1; 
	struct UNiagaraComponent* Smoke; 
	bool PlayAlarm; 
	bool Explode; 

	void OnRep_Explode(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_PlayAlarm(); // (BlueprintCallable|BlueprintEvent)
	void WorldObject_Interact(struct AActor* Instigator); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Downed_Drone(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

