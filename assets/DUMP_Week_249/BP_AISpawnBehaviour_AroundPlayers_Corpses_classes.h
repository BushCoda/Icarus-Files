// BlueprintGeneratedClass BP_AISpawnBehaviour_AroundPlayers_Corpses.BP_AISpawnBehaviour_AroundPlayers_Corpses_C
struct UBP_AISpawnBehaviour_AroundPlayers_Corpses_C : UBP_AISpawnBehaviour_AroundPlayers_GroundSpawner_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool DOUBLE_SPAWN; 

	void FindNearbyCorpse(struct AActor* TargetPlayer, struct AActor*& CorpseOut); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void QueryComplete(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void TrySpawnAsync(struct AActor* AroundPlayer); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_AISpawnBehaviour_AroundPlayers_Corpses(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

