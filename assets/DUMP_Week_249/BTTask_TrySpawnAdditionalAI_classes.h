// BlueprintGeneratedClass BTTask_TrySpawnAdditionalAI.BTTask_TrySpawnAdditionalAI_C
struct UBTTask_TrySpawnAdditionalAI_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAISetupRowHandle AI_ToSpawn; 
	struct FEpicCreaturesRowHandle EpicCreatureRow; 
	struct FVector SpawnScale; 
	int32_t NearbyRange; 
	struct APawn* PawnRef; 
	int32_t RequiredSpawns; 
	int32_t RemainingSpawns; 
	int32_t MaxSpawnsForThisAction; 
	float SpawnRadius; 
	struct TMap<enum class EMissionDifficulty, struct FAdditionalAddsBTTaskConfig> PerDifficultyConfig; 
	struct UEnvQuery* EQS; 
	enum class EEnvQueryRunMode RunMode; 
	bool MakeSpawnHostileTowardsNearestPlayer; 
	bool MakeSpawnHostileTowardsRandomNearbyPlayer; 
	struct FName TargetActorKeyName; 
	float NearestHostilePlayerDistance; 
	bool MakeSpawnHostileTowardsTarget; 
	struct FBlackboardKeySelector HostileTargetActor; 
	struct FName OverrideSpawnLocationSocket; 

	void SpawnAI(struct FVector Spawn Transform Location); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ConfigureSpawnedAI(struct AActor* SpawnedAI); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetConfigForCurrentDifficulty(struct FAdditionalAddsBTTaskConfig& Config); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	int32_t GetNumNearbyAdds(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetMaxAdds(int32_t& Max); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void OnQueryFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BTTask_TrySpawnAdditionalAI(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

