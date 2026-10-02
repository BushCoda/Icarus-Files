// BlueprintGeneratedClass BP_AISpawnBehaviour_TrappedCreatures.BP_AISpawnBehaviour_TrappedCreatures_C
struct UBP_AISpawnBehaviour_TrappedCreatures_C : UAISpawnBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FVector SpawnLocation; 
	bool UseFallbackSpawnPoint; 
	bool DebugIgnoreZoneCheck; 
	struct UEnvQuery* SpawnEQS; 
	struct AActor* SuccessfullySpawnedAI; 
	struct FVector SpawnScale; 
	float CleanupLifespan; 
	struct AAIController* DummyAIQuerier; 
	bool YumYum; 
	struct UObject* ChosenTrap; 

	bool CanCleanupAI(struct AActor* AI); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool GetNextAIToSpawn(struct FAISetupEnum& AISetup, struct TSoftClassPtr<UObject>& ActorClass); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsLocationWithinAffectedTerrainZone(struct UObject* WorldContextObject, struct FVector WorldLocation); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool TrySpawnAI(struct UObject* WorldContextObject); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TrySpawnAsync(struct AActor* AroundTrap); // (BlueprintCallable|BlueprintEvent)
	void QueryFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void CleanupAI(struct AActor* AI); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void DoSpawn(struct UObject* Context, struct FVector SpawnLocation); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_AISpawnBehaviour_TrappedCreatures(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

