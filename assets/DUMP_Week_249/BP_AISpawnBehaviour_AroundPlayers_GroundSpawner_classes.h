// BlueprintGeneratedClass BP_AISpawnBehaviour_AroundPlayers_GroundSpawner.BP_AISpawnBehaviour_AroundPlayers_GroundSpawner_C
struct UBP_AISpawnBehaviour_AroundPlayers_GroundSpawner_C : UBP_AISpawnBehaviour_AroundPlayers_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float MinTimeBetweenSpawns; 
	float LastSpawnTime; 

	bool TrySpawnAI(struct UObject* WorldContextObject); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool CanCleanupAI(struct AActor* AI); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TrySpawnAsync(struct AActor* AroundPlayer); // (BlueprintCallable|BlueprintEvent)
	void DoSpawn(struct UObject* Context, struct FVector SpawnLocation); // (BlueprintCallable|BlueprintEvent)
	void QueryFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_AISpawnBehaviour_AroundPlayers_GroundSpawner(int32_t EntryPoint); // (Final|UbergraphFunction)
};

