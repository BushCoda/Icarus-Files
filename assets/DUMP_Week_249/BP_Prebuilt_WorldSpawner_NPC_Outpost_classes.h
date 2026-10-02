// BlueprintGeneratedClass BP_Prebuilt_WorldSpawner_NPC_Outpost.BP_Prebuilt_WorldSpawner_NPC_Outpost_C
struct ABP_Prebuilt_WorldSpawner_NPC_Outpost_C : ABP_Prebuilt_WorldSpawner_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool HasPoppedFlare; 
	float FlareDelayTime; 
	float DroneDelayTime; 
	int32_t BackupDronesToSpawn; 

	bool GetFirstAliveNPC(struct AActor*& AliveNPC); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void DelayedSummonBackup(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnSpawnedNPCTargetUpdated(struct AActor* NewTarget); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TrySpawnAI(); // (Public|BlueprintCallable|BlueprintEvent)
	void MULTI_EnemyDetected(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void SpawnDroneBackup(); // (BlueprintCallable|BlueprintEvent)
	void OnBackupLocationsFound(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Prebuilt_WorldSpawner_NPC_Outpost(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

