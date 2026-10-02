// BlueprintGeneratedClass BP_AISpawnBehaviour_AroundPlayers.BP_AISpawnBehaviour_AroundPlayers_C
struct UBP_AISpawnBehaviour_AroundPlayers_C : UAISpawnBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FVector SpawnLocation; 
	bool UseFallbackSpawnPoint; 
	bool DebugIgnoreZoneCheck; 
	struct UEnvQuery* SpawnEQS; 
	struct AActor* SuccessfullySpawnedAI; 
	struct FVector SpawnScale; 
	float CleanupLifespan; 
	bool IgnoreStatRequirement; 

	void GetSpawnRotation(struct FVector SpawnLocation, struct FRotator& OutRotation); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void OnSpawnedAI(struct AActor* AISpawned); // (Public|BlueprintCallable|BlueprintEvent)
	bool IsLocationWithinAffectedTerrainZone(struct UObject* WorldContextObject, struct FVector WorldLocation); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool TrySpawnAI(struct UObject* WorldContextObject); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TrySpawnAsync(struct AActor* AroundPlayer); // (BlueprintCallable|BlueprintEvent)
	void QueryFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void CleanupAI(struct AActor* AI); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void DoSpawn(struct UObject* Context, struct FVector SpawnLocation); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_AISpawnBehaviour_AroundPlayers(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

