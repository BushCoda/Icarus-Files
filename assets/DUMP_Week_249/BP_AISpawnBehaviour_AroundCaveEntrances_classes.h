// BlueprintGeneratedClass BP_AISpawnBehaviour_AroundCaveEntrances.BP_AISpawnBehaviour_AroundCaveEntrances_C
struct UBP_AISpawnBehaviour_AroundCaveEntrances_C : UAISpawnBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool IgnoreStatRequirement; 
	struct UEnvQuery* SpawnEQS; 
	struct FVector SpawnLocation; 
	bool UseFallbackSpawnPoint; 
	float CleanupLifespan; 
	struct AActor* SuccessfullySpawnedAI; 
	struct FVector SpawnScale; 
	struct AActor* TargetCaveEntrance; 
	struct TMap<struct AActor*, struct FActorArrayStruct> PreviousSpawns; 
	struct TArray<struct AActor*> CurrentCaveSpawns; 
	struct TMap<struct AActor*, float> CaveSpawnCooldowns; 
	float CaveSpawnCooldownDuration; 

	void OnSpawnedCaveActorDestroyed(struct AActor* DestroyedActor); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DoesCaveSupportSpawning(struct ACaveEntranceBase* Cave, bool& SupportsSpawning); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void DoesCaveHavePreviouslySpawnedAI(struct ACaveEntranceBase* CaveEntrance, bool& HasAI); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CustomEvent(struct UObject* Context1, struct FVector SpawnLocation1); // (Public|BlueprintCallable|BlueprintEvent)
	void OnSpawnedAI(struct AActor* AISpawned); // (Public|BlueprintCallable|BlueprintEvent)
	bool IsLocationWithinAffectedTerrainZone(struct UObject* WorldContextObject, struct FVector WorldLocation); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool TrySpawnAI(struct UObject* WorldContextObject); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TrySpawnAsync(struct AActor* AroundCave); // (BlueprintCallable|BlueprintEvent)
	void QueryFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void CleanupAI(struct AActor* AI); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void DoSpawn(struct UObject* Context, struct FVector SpawnLocation); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_AISpawnBehaviour_AroundCaveEntrances(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

