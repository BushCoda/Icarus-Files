// BlueprintGeneratedClass BP_Spike_Trap_Base.BP_Spike_Trap_Base_C
struct ABP_Spike_Trap_Base_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* Niagara_Wood_Damage; 
	struct UParticleSystemComponent* ParticleSystem_Blood; 
	struct USceneComponent* Scene_Effects; 
	struct UBoxComponent* Box01_Primary; 
	struct USceneComponent* Scene_OverlapChecks; 
	struct AActor* OverlapClassToDamage; 
	int32_t InitialHitDamage; 
	int32_t OverlapDamage; 
	int32_t SelfDamage; 
	float PlayerDamageMultiplier; 
	struct FTimerHandle OverlapTimerRef; 
	struct UStaticMesh* BaseStaticMesh; 
	struct UStaticMesh* DestructionStaticMeshState_2; 
	struct UStaticMesh* DestructionStaticMeshState_3; 
	struct UStaticMesh* DestructionStaticMeshState_4; 

	void DoEffects(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DoDamage(int32_t DamageAmount, struct AActor* Defender); // (Public|BlueprintCallable|BlueprintEvent)
	void LaunchCharacter(struct ACharacter* IcarusCharacter); // (Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__BoxCombined_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OverlapAndDamageCheck(); // (BlueprintCallable|BlueprintEvent)
	void UpdateDamageState(struct UActorState* ActorState, float NewHealth); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Spike_Trap_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

