// BlueprintGeneratedClass BP_IcarusCaveAISpawner.BP_IcarusCaveAISpawner_C
struct ABP_IcarusCaveAISpawner_C : AIcarusCaveAISpawner {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FNone* BP_CaveSpawnerHelperComponent; 
	struct USceneComponent* DefaultSceneRoot; 
	struct FMulticastInlineDelegate RequestSpawnerBake; 
	struct TArray<struct AActor*> SpawnActorsToBake; 
	float MaxPlayerDistanceBeforeSpawn; 
	float MaxPlayerDistanceBeforeDespawn; 
	struct AIcarusGameStateSurvival* GameState; 
	struct FRandomStream RandomStream; 
	struct TArray<struct AActor*> RuntimeSpawnedActors; 
	int32_t GameSeed; 
	bool DebugUseRandomSeed; 
	int32_t RespawnTimer; 
	int32_t RespawnTimerRandomDeviation; 
	bool SpawnOnCaveEntry; 
	struct AActor* LinkedCaveActor; 
	struct UCavePrefabAsset* LinkedCavePrefab; 
	int32_t AdditionalPlayerSpawnCountPlusPercent; 
	bool DehumidifierPreventsSpawning; 
	struct TArray<struct FCaveActorSpawnTimeStamp> LoadCache; 
	struct FCaveActorSpawnTimeStamp Temp; 
	struct TArray<struct AActor*> SpawnedActorsPendingCleanup; 
	struct FTimerHandle CleanupActorTimer; 
	struct TArray<struct AActor*> SecondaryAISpawns; 
	float OrphanedAILifespan; 

	void TickCleanupActors(); // (Public|BlueprintCallable|BlueprintEvent)
	void InitialiseSpawnedActor(struct AActor* SpawnedActor); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Action Database Restore(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheckDehumidifierAuraAtLocation(struct FVector Location, bool& HasDehumidifierAura); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FilterSpawnTransforms(struct TArray<struct FTransform>& TransformArrayReference); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetRandomNumberToSpawn(struct FCaveSpawnConfig& CaveSpawnConfig, int32_t& Output); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnSpawnedActorDeath(struct UActorState* ActorState); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CanRespawn(bool& CanRespawn); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetAllBakedWorldSpaceSpawnLocations(struct TArray<struct FVector>& SpawnLocations); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetAllBakedWorldSpaceSpawnTransforms(struct TArray<struct FTransform>& SpawnTransforms); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CleanupCaveCreatures(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SpawnCaveCreatures(bool ForceSpawn); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ArePlayersInCaveAndNearby(bool& Nearby); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UnbakeAndSpawnStoredActors(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BakeDownAndDestroySelectedSpawnActors(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void OnSeedInitialised(int32_t Seed); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void OnWorldStatsSet(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnRestoredFromDatabase(); // (Event|Protected|BlueprintEvent)
	void OnAdditionalActorSpawned(struct AActor* SpawnedActor); // (Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_IcarusCaveAISpawner(int32_t EntryPoint); // (Final|UbergraphFunction)
	void RequestSpawnerBake__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

