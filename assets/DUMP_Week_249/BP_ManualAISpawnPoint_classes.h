// BlueprintGeneratedClass BP_ManualAISpawnPoint.BP_ManualAISpawnPoint_C
struct ABP_ManualAISpawnPoint_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTerrainAnchorComponent* TerrainAnchor; 
	struct UTextRenderComponent* TextRender; 
	struct UBillboardComponent* Billboard; 
	struct USceneComponent* DefaultSceneRoot; 
	struct FEpicCreaturesRowHandle EpicCreature; 
	struct FAISetupRowHandle AIToSpawn; 
	int32_t MinSpawnLevel; 
	int32_t MaxSpawnLevel; 
	bool ShouldRespawn; 
	float RespawnDelay; 
	float RespawnDelayDeviation; 
	struct FRandomStream RandomStream; 
	struct FTimerHandle SpawnTimer; 
	struct AActor* SpawnedAI; 
	bool HasAIBeenKilled; 
	bool ShouldTetherToSpawner; 
	int32_t TetherDistance; 
	struct FMulticastInlineDelegate AiKilled; 
	bool FilterSpawnWithEQS; 
	struct UEnvQuery* SpawnEQSTemplate; 
	enum class EEnvQueryRunMode SpawnEQSMode; 
	bool FreezeAIOnTerrainInvalidation; 
	bool IsCurrentlyFrozen; 
	enum class EMovementMode PreviousMovementMode; 
	struct FMulticastInlineDelegate AIKilled_SpawnerArgument; 
	struct FMulticastInlineDelegate Spawned; 
	bool ApplyRegenOnReturn; 
	bool TeleportOnReturnIfBlocked; 
	bool HasBroadcastDeathEvent; 
	bool CleanupAIOnTerrainInvalidation; 
	bool UseMaxSpawnDistanceInsteadOfAnchor; 
	float MaxPlayerSpawnDistance; 
	bool CleanupAIOnEndPlay; 
	struct AQuestMarker* LinkedQuestMarker; 
	bool SkipSpawnPointProjection; 

	void CanSpawnAI(bool& CanSpawn); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnSpawnedAIDeath(struct UActorState* ActorState); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetSpawnedAIFrozen(bool IsFrozen); // (Public|BlueprintCallable|BlueprintEvent)
	void CleanupAI(struct FString Reason); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnSpawnedAIEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupAI(struct AActor* AI); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SpawnAI(struct FVector Location); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CalculateSpawnLevel(int32_t& Level); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnSeedUpdated(int32_t Seed); // (BlueprintCallable|BlueprintEvent)
	void TrySpawn(); // (BlueprintCallable|BlueprintEvent)
	void UpdateSpawnTimer(); // (BlueprintCallable|BlueprintEvent)
	void StartSpawnTimer(); // (BlueprintCallable|BlueprintEvent)
	void OnEQSComplete(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void RaiseCurtain(); // (BlueprintCallable|BlueprintEvent)
	void DoSpawn(struct FVector& Point); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_ManualAISpawnPoint(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void Spawned__DelegateSignature(struct AActor* SpawnedAI); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void AIKilled_SpawnerArgument__DelegateSignature(struct AActor* Spawner); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void AiKilled__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

