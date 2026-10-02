// BlueprintGeneratedClass BP_AISpawnBehaviour_AroundPlayers_PrebuiltStructure.BP_AISpawnBehaviour_AroundPlayers_PrebuiltStructure_C
struct UBP_AISpawnBehaviour_AroundPlayers_PrebuiltStructure_C : UBP_AISpawnBehaviour_AroundPlayers_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float MinTimeBetweenSpawns; 
	float LastSpawnTime; 

	void GetPrebuiltNPCs(struct UObject* Object, struct TArray<struct AActor*>& SpawnedNPCs); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool ShouldCleanupAI(struct AActor* AI, struct TArray<struct AActor*>& ValidPlayers); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool TrySpawnAI(struct UObject* WorldContextObject); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool CanCleanupAI(struct AActor* AI); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TrySpawnAsync(struct AActor* AroundPlayer); // (BlueprintCallable|BlueprintEvent)
	void DoSpawn(struct UObject* Context, struct FVector SpawnLocation); // (BlueprintCallable|BlueprintEvent)
	void QueryFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void InitialiseSpawnBehaviour(struct FAutonomousSpawnsRowHandle& InSpawnData); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_AISpawnBehaviour_AroundPlayers_PrebuiltStructure(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

