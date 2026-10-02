// BlueprintGeneratedClass BP_WorldBoss_SandWorm_MovementProxy.BP_WorldBoss_SandWorm_MovementProxy_C
struct ABP_WorldBoss_SandWorm_MovementProxy_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* FMODAudio; 
	struct UStaticMeshComponent* SM_SandMound; 
	struct UCameraShakeSourceComponent* CameraShakeSource; 
	struct UNiagaraComponent* FX_Charge_Hit; 
	struct UNiagaraComponent* FX_Charge; 
	struct USkeletalMeshComponent* SK_Worm; 
	struct USceneComponent* DefaultSceneRoot; 
	float Timeline_Submerge_Alpha_488BCE5F4F4F04002EC84CA91CC5C402; 
	enum class ETimelineDirection Timeline_Submerge__Direction_488BCE5F4F4F04002EC84CA91CC5C402; 
	struct UTimelineComponent* Timeline_Submerge; 
	struct FTransform Target; 
	struct FVector LastDamageLocation; 
	float DamageRadius; 
	struct TMap<struct AActor*, float> RecentlyDamagedActors; 
	struct AActor* WorldBossReference; 
	float RecentDamageDuration; 
	bool IsAttacking; 

	void SetupStats(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TickDamageActorsInPath(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetDesiredTransform(struct FTransform TargetTransform); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Timeline_Submerge__FinishedFunc(); // (BlueprintEvent)
	void Timeline_Submerge__UpdateFunc(); // (BlueprintEvent)
	void BeginTravelEffects(); // (BlueprintCallable|BlueprintEvent)
	void Cleanup(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_WorldBoss_SandWorm_MovementProxy(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

