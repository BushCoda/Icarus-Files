// BlueprintGeneratedClass BP_ModifierState_Enzyme_Elixir.BP_ModifierState_Enzyme_Elixir_C
struct UBP_ModifierState_Enzyme_Elixir_C : UBP_Modifier_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TArray<struct FAISetupRowHandle> Creatures; 
	float TimeBetweenSpawns; 
	float TimeBetweenSpawnsMultiplier; 
	int32_t BaseCreatures; 
	struct TArray<struct ABP_IcarusNPCGOAPCharacter_C*> SpawnedNPC's; 
	struct FRandomStream Random Stream; 
	struct AActor* Enemy Target; 
	struct FMulticastInlineDelegate CreatureKilled; 
	struct FVector Item; 
	float AdditionalCreaturesPerPlayer; 
	int32_t Creature Limit; 
	float MinQuerierDistance; 
	float MaxQuerierDistance; 
	float MinDistance; 
	float MaxDistance; 
	float Spacing; 
	enum class EEnvQueryRunMode RunMode; 
	struct AActor* Spawn Target; 
	struct FAIRelationshipsRowHandle AIRelationshipOverride; 

	bool ModifierApplied(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Select AITo Spawn(struct FAISetupRowHandle& Output); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetRelationshipOverride(struct FAIRelationshipsRowHandle Creatures); // (Public|BlueprintCallable|BlueprintEvent)
	void Initialise(float TimeBetweenSpawns, int32_t BaseCreatures, float AdditionalCreaturesPerPlayer, int32_t Creature Limit, struct TArray<struct FAISetupRowHandle>& Creatures); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Configure Distances(float MinQuerierDistance, float MaxQuerierDistance, float MinDistance, float MaxDistance, float Spacing); // (Public|BlueprintCallable|BlueprintEvent)
	void GetMaxCreatures(int32_t& ScaledNumber); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool CanSpawn(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateTargets(struct AActor* EnemyTarget, struct AActor* Spawn Target); // (Public|BlueprintCallable|BlueprintEvent)
	void AngerNPC(struct AIcarusNPCGOAPCharacter* NPC); // (Public|BlueprintCallable|BlueprintEvent)
	void EQSComplete(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void OnActorDeath(struct UActorState* ActorState); // (BlueprintCallable|BlueprintEvent)
	void SpawnCreature(); // (BlueprintCallable|BlueprintEvent)
	void OnEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (BlueprintCallable|BlueprintEvent)
	void SpawnGroup(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ModifierTick(float DeltaTime); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ModifierState_Enzyme_Elixir(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void CreatureKilled__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

