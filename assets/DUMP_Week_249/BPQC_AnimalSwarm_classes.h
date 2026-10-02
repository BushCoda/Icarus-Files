// BlueprintGeneratedClass BPQC_AnimalSwarm.BPQC_AnimalSwarm_C
struct UBPQC_AnimalSwarm_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float TimeBetweenSpawns; 
	float TimeBetweenSpawnsMultiplier; 
	int32_t MaxCreatures; 
	struct FAISetupRowHandle Creature; 
	struct TArray<struct AIcarusNPCGOAPCharacter*> NPCs; 
	struct FRandomStream Random Stream; 
	struct AActor* Target; 
	struct FMulticastInlineDelegate CreatureKilled; 
	struct FVector Item; 
	bool Player Max Number Scaling; 
	float AdditionalCreaturesPerPlayer; 
	int32_t Hard Creature Limit; 
	struct TArray<struct FAISetupRowHandle> Creatures; 
	struct AActor* SpawnTarget; 
	float MinPlayerDistance; 
	float MinDistance; 
	float MaxDistance; 
	float Spacing; 
	enum class EEnvQueryRunMode RunMode; 
	struct UEnvQuery* QueryTemplate; 
	int32_t LevelBonus; 
	struct FTransform SpawnTransformOverride; 
	struct FRotator SpawnRotation; 
	struct FEpicCreaturesRowHandle EpicCreature; 
	struct FMulticastInlineDelegate CreatureSpawned; 

	void SetLevelBonus(int32_t LevelBonus); // (Public|BlueprintCallable|BlueprintEvent)
	void SetTimeBetweenSpawnsMultiplier(float TimeBetweenSpawnsMultiplier); // (Public|BlueprintCallable|BlueprintEvent)
	void Configure Distances(float MinPlayerDistance, float MinDistance, float MaxDistance, float Spacing); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateSpawnTarget(struct TArray<struct AActor*>& SpawnTargets); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Get Creature(struct FAISetupRowHandle& Creature); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetupMultiCreature(float TimeBetweenSpawns, int32_t MaxCreatures, struct TArray<struct FAISetupRowHandle>& Creature); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetupMultiplayerScaling(bool Player Max Number Scaling, float AdditionalCreaturesPerPlayer, int32_t HardLimit); // (Public|BlueprintCallable|BlueprintEvent)
	void GetMaxCreatures(int32_t& ScaledNumber); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool CanSpawn(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateTarget(struct AActor* Target); // (Public|BlueprintCallable|BlueprintEvent)
	void Setup(float TimeBetweenSpawns, int32_t MaxCreatures, struct FAISetupRowHandle Creature); // (Public|BlueprintCallable|BlueprintEvent)
	void AngerNPC(struct AIcarusNPCGOAPCharacter* NPC); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void EQSComplete(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void OnActorDeath(struct UActorState* ActorState); // (BlueprintCallable|BlueprintEvent)
	void SpawnCreature(); // (BlueprintCallable|BlueprintEvent)
	void OnEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void SpawnAtCustomLocation(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BPQC_AnimalSwarm(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void CreatureSpawned__DelegateSignature(struct AActor* Creature); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void CreatureKilled__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

