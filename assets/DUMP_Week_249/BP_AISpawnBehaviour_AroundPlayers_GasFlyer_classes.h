// BlueprintGeneratedClass BP_AISpawnBehaviour_AroundPlayers_GasFlyer.BP_AISpawnBehaviour_AroundPlayers_GasFlyer_C
struct UBP_AISpawnBehaviour_AroundPlayers_GasFlyer_C : UBP_AISpawnBehaviour_AroundPlayers_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void GetAdditionalFlyerSpawnLocation(struct FVector Around, struct FVector& OutLocation, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TrySpawnAsync(struct AActor* AroundPlayer); // (BlueprintCallable|BlueprintEvent)
	void DoSpawn(struct UObject* Context, struct FVector SpawnLocation); // (BlueprintCallable|BlueprintEvent)
	void QueryFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_AISpawnBehaviour_AroundPlayers_GasFlyer(int32_t EntryPoint); // (Final|UbergraphFunction)
};

