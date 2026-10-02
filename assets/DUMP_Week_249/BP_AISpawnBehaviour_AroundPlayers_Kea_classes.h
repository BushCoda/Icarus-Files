// BlueprintGeneratedClass BP_AISpawnBehaviour_AroundPlayers_Kea.BP_AISpawnBehaviour_AroundPlayers_Kea_C
struct UBP_AISpawnBehaviour_AroundPlayers_Kea_C : UBP_AISpawnBehaviour_AroundPlayers_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool SpawnFlying; 

	bool FindValidSpawnLocationInsideTree(struct AActor* AroundActor, struct FVector& SpawnLocation); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TrySpawnAsync(struct AActor* AroundPlayer); // (BlueprintCallable|BlueprintEvent)
	void DoSpawn(struct UObject* Context, struct FVector SpawnLocation); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_AISpawnBehaviour_AroundPlayers_Kea(int32_t EntryPoint); // (Final|UbergraphFunction)
};

