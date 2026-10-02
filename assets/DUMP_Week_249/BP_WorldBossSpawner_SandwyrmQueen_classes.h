// BlueprintGeneratedClass BP_WorldBossSpawner_SandwyrmQueen.BP_WorldBossSpawner_SandwyrmQueen_C
struct ABP_WorldBossSpawner_SandwyrmQueen_C : ABP_WorldBossSpawner_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FFactionMissionsRowHandle QueenMission; 
	bool IsMissionActive; 

	struct AActor* SpawnBoss(); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	void CanSpawnSandWyrmQueen(bool& CanSpawn); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnWorldStatsUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void UpdateIconVisibility(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_WorldBossSpawner_SandwyrmQueen(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

