// BlueprintGeneratedClass BP_AISpawnBehaviour_AroundCaveEntrances_Spider.BP_AISpawnBehaviour_AroundCaveEntrances_Spider_C
struct UBP_AISpawnBehaviour_AroundCaveEntrances_Spider_C : UBP_AISpawnBehaviour_AroundCaveEntrances_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	int32_t TetherDistance; 
	bool ApplyRegenOnReturn; 
	bool TeleportOnReturnIfBlocked; 
	int32_t DawnHour; 
	int32_t DuskHour; 

	bool ShouldCleanupAI(struct AActor* AI, struct TArray<struct AActor*>& ValidPlayers); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool TrySpawnAI(struct UObject* WorldContextObject); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnSpawnedAI(struct AActor* AISpawned); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAdditionalSpiderSpawnLocations(struct FVector Around, struct FVector& OutLocation, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void QueryFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void InitialiseSpawnBehaviour(struct FAutonomousSpawnsRowHandle& InSpawnData); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnCustomProspectStatsUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_AISpawnBehaviour_AroundCaveEntrances_Spider(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

