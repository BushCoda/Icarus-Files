// BlueprintGeneratedClass BP_WorldBossSpawner_LavaHunter.BP_WorldBossSpawner_LavaHunter_C
struct ABP_WorldBossSpawner_LavaHunter_C : ABP_WorldBossSpawner_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FFactionMissionsRowHandle LavaHunterMission; 
	bool IsMissionActive; 

	struct AActor* SpawnBoss(); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	void CanSpawnLavaHunter(bool& CanSpawn); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void OnQuestComplete(struct AQuest* InitialQuest); // (BlueprintCallable|BlueprintEvent)
	void OnWorldStatsUpdated(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnFactionMissionChanged(struct FFactionMissionsRowHandle FactionMission); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_WorldBossSpawner_LavaHunter(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

