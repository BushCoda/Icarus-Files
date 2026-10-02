// BlueprintGeneratedClass BP_CreatureAudioComponent.BP_CreatureAudioComponent_C
struct UBP_CreatureAudioComponent_C : UCreatureAudioComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusNPCGOAPCharacter* Creature; 
	enum class EPhysicalSurface CurrentSurface; 
	float CurrentDistance; 
	struct UCurveFloat* DistanceCheckCurve; 
	struct UCurveFloat* SurfaceCheckCurve; 
	struct UCurveFloat* FoliageCheckCurve; 
	float CurrentWaterImmersion; 
	bool InFoliage; 
	struct UFMODAudioComponent* WorldMovementComponent; 
	struct UBP_GroundSurfaceChecker_C* SurfaceChecker; 
	struct UFMODAudioComponent* RagdollAudio; 
	struct FTimerHandle RagdollAudioUpdateTimerHandle; 
	float RagdollAudioUpdateFrequency; 
	float RagdollAudioLastCollisionTime; 
	float RagdollAudioNoCollisionTimeoutTime; 
	struct FAIAudioData AudioData; 
	struct UCurveFloat* ShelterCheckCurve; 
	float ShelterCheckMaxDistance; 
	bool WaterImmersionReadyForUpdate; 
	bool IsMountedByLocalPlayer; 
	struct UFMODEvent* AttackHitEffectSound; 
	struct UFMODEvent* FallDamageSound; 

	void GetCurrentSurface(enum class EPhysicalSurface& CurrentSurface); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetMountDamagedSound(enum class EIcarusDamageType DamageType, struct UFMODEvent*& FMODEvent); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnMountDamaged(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnHitEffectsSpawned(struct FTransform& SpawnTransform, enum class EPhysicalSurface HitSurface, struct AActor* HitActor); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	void StopRagdollAudio(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateRagdollAudio(); // (Public|BlueprintCallable|BlueprintEvent)
	void PlayRagdollSound(struct FHitResult& Hit); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnCreatureDeath(struct UActorState* ActorState); // (Public|BlueprintCallable|BlueprintEvent)
	void OnFootstepAnimNotify(enum class ECreatureFootstepType Type); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FoliageUpdate(); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShelterUpdate(); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SurfaceUpdate(); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DistanceUpdate(); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateMountState(struct AIcarusPlayerCharacter* MountingPlayer); // (Private|BlueprintCallable|BlueprintEvent)
	void TraceForWaterImmersion(float& WaterImmersion); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	float GetWaterImmersion(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PlayWorldMovementSound(); // (Private|BlueprintCallable|BlueprintEvent)
	void TraceForFoliage(bool& InFoliage); // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRagdollCollision(struct FHitResult Hit); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void OnMounted(struct AIcarusPlayerCharacter* Player); // (BlueprintCallable|BlueprintEvent)
	void OnDismounted(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_CreatureAudioComponent(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

