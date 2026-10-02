// BlueprintGeneratedClass BP_AISpawner.BP_AISpawner_C
struct ABP_AISpawner_C : AAISpawner {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* DefaultSceneRoot; 
	int32_t AmountToSpawn; 
	struct TArray<struct AActor*> SpawnedActors; 
	float SpawnRadius; 
	float MaxPlayerDistance; 
	struct FVector SpawnLocation; 
	bool SpawningActivated; 
	struct TMap<struct AActor*, struct FActorArrayStruct> TetheredAIMap; 
	struct AActor* NextTetherTarget; 
	struct FActorArrayStruct CurrentTethers; 
	struct FTimerHandle TetherCleanupTimer; 
	struct FRandomStream RandomStream; 
	struct TArray<struct UObject*> StoredGameplayTextures; 
	struct TArray<struct TSoftObjectPtr<UGameplayTexture>> HeatmapTextures; 
	struct AIcarusNPCGOAPCharacter* SpawnedNPC; 
	int32_t DefaultSpawnDensity; 
	bool IsRunningSpawnEQS; 
	struct TArray<struct AIcarusNPCGOAPCharacter*> SpawnedChildren; 
	struct ABP_WeatherController_C* WeatherControllerRef; 
	struct TMap<struct FBiomesRowHandle, int32_t> BiomePerceptionModifiers; 
	struct FAISpawnConfigData Spawn Config; 
	enum class EBPLogVerbosity LoggingVerbosity; 
	int32_t MaximumAILevel; 
	int32_t MinimumAILevel; 
	int32_t GeneratedLevel; 
	struct TMap<struct FVector, float> RecentSpawnBlockerLocations; 
	bool ShouldBlockSpawningNearRecentDeath; 
	struct FTimerHandle SpawnBlockerUpdateTimer; 
	float SpawnBlockerRadius; 
	float SpawnBlockerDuration; 
	bool DebugSpawnBlockers; 
	struct TArray<struct FSpawnBlocker> ActiveSpawnBlockers; 
	struct FName ProtectedActorKey; 
	bool IsSpawningActor; 
	struct FAISetupRowHandle CurrentAISpawnType; 
	bool SpawnMultipleAI; 
	struct TArray<struct AIcarusNPCGOAPCharacter*> SpawnedFollowers; 
	struct FEpicCreaturesRowHandle CurrentAIEpicCreature; 
	struct AIcarusNPCGOAPCharacter* LastSpawnedFollower; 
	struct TArray<struct UObject*> AsyncLoadedClasses; 
	bool ShouldSpawnGroup; 
	struct FStatsRowHandle IceMammothWorldStat; 

	void OnCustomProspectStatsUpdated(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool IsNPCSpawned(struct AIcarusNPCGOAPCharacter* NPC); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetSpawnedActors(struct TArray<struct AActor*>& OutActors); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void PickIrradiatedNPC(struct FAISetupRowHandle& AISetup, struct FEpicCreaturesRowHandle& EpicCreature); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TrySpawnAdditionalCreatureAroundAttractor(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetSoftClassArray(struct TSoftClassPtr<UObject>& MainClass, struct TArray<struct FAISetupRowHandle>& AdditionalAI, struct TArray<struct TSoftClassPtr<UObject>>& Classes); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PrintDebugInformation(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	void NearWater(struct FVector Location, int32_t Distance, bool& NearWater); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ModifySpawnWeights(struct FVector AtLocation, int32_t WeightedListUID, struct TMap<struct FAISpawnListItemData, int32_t> BaseSpawnWeights); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void WantsSpawnJuvenile(struct FVector WorldLocation, struct FAISetupRowHandle ParentSetup, bool& WantsSpawn, struct FVector& position, struct FAISetupRowHandle& JuvenileType, int32_t& Level); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UntetherActor(struct AActor*& Actor); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TrySpawnJuvenileAroundLocation(struct FVector WorldLocation, struct FAISetupRowHandle ParentSetup, struct AIcarusNPCGOAPCharacter*& JuvenileCharacter); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Check Manual Spawn(struct FAISetupEnum AISetup, bool& CanSpawn); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetNumAliveNPCs(bool IncludeLatentDeaths, int32_t& Num); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool GetDebugSpawnBlockers(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void OnNPCDeath(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateSpawnBlockers(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetTetherDebugName(struct AActor* Tether, struct FName& Name); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetTotalSpawnWeightForBiome(struct FVector Locarion, int32_t& TotalWeight); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetNearbyNPCs(struct FVector InOrigin, struct TArray<struct ABP_IcarusNPCGOAPCharacter_C*>& OutputNPCs); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	void GetModifiedSpawnWeightForAI(struct FAISetupRowHandle InAIType, struct FVector AtLocation, int32_t OriginalWeight, int32_t& ModifiedWeight); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Debug Biome Perception Modifiers(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateBiomePerceptionModifiers(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetSpawnDensityForLocation(struct FVector WorldLocation, int32_t& Biome Spawn Density); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReorganiseCleanupQueue(); // (Public|BlueprintCallable|BlueprintEvent)
	int32_t GetNumberOfAINearTarget(struct AActor* Target); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PickNewAIToSpawn(struct FVector AtLocation, bool ManualSpawn, struct FAISetupRowHandle& Output, struct FEpicCreaturesRowHandle& EpicCreature, int32_t& Level, bool& ValidSpawn); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TetherActor(struct AActor*& Actor, struct AActor*& TetherTarget); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CleanupDestroyedActors(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TrySpawn(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetNewTetherTarget(struct AActor*& OutControllerTether); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DebugDistances(); // (Public|BlueprintCallable|BlueprintEvent)
	void FindSpawnLocation(struct FVector& Locaiton, bool& Return); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void CheckLocation(struct FVector Location, bool& Found); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void CheckAIDistance(struct ABP_IcarusNPCGOAPCharacter_C* AI); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_2B8B2B624CE5F97DAE6892B799469007(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_E27239C84FEE2ECDA1A4DC9F386AA4C5(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_E27239C84FEE2ECDA1A4DC9F4FE50C50(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_E484710A49B479B889B10EB5F9BB56D9(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void SpawnActor(struct AActor* CustomTetherTarget); // (BlueprintCallable|BlueprintEvent)
	void ValidateAndSpawn(); // (BlueprintCallable|BlueprintEvent)
	void EQSFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void TryDestroyAI(); // (BlueprintCallable|BlueprintEvent)
	void OnEQSComplete(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void OnSeedUpdated(int32_t Seed); // (BlueprintCallable|BlueprintEvent)
	void SpawnPointGenerationComplete(); // (Event|Public|BlueprintEvent)
	void WeatherEventStarted(struct FBiomesRowHandle& Biome, struct FWeatherEventsRowHandle& Event); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void WeatherEventCompleted(struct FBiomesRowHandle& Biome, struct FWeatherEventsRowHandle& Event); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnBiomePerceptionUpdated(int32_t NewValue, struct FBiomesRowHandle Biome); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void SetDebugSpawnBlockers(bool bEnabled); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void SetupNPC(struct AIcarusNPCGOAPCharacter* SpawnedNPC); // (Event|Protected|BlueprintCallable|BlueprintEvent)
	void UnlinkSpawnedNPC(struct AActor* NPC); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void MC_PreLoadClass(struct TArray<struct TSoftClassPtr<UObject>>& AssetClasses); // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SpawnFollower(struct FAISetupRowHandle& AISetup, int32_t Number); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_AISpawner(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

