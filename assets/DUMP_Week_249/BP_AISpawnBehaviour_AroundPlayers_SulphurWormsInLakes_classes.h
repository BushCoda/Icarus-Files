// BlueprintGeneratedClass BP_AISpawnBehaviour_AroundPlayers_SulphurWormsInLakes.BP_AISpawnBehaviour_AroundPlayers_SulphurWormsInLakes_C
struct UBP_AISpawnBehaviour_AroundPlayers_SulphurWormsInLakes_C : UBP_AISpawnBehaviour_AroundPlayers_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FVector LocToSpawn; 
	struct FGameplayTag TAG_TO_MATCH; 
	struct FGameplayTagQuery ValidLakeQuery; 

	bool GetNextAIToSpawn(struct FAISetupEnum& AISetup, struct TSoftClassPtr<UObject>& ActorClass); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void TrySpawnAsync(struct AActor* AroundPlayer); // (BlueprintCallable|BlueprintEvent)
	void OnSpawnedAI(struct AActor* AISpawned); // (Public|BlueprintCallable|BlueprintEvent)
	void CleanupAI(struct AActor* AI); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void Cleanup(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_AISpawnBehaviour_AroundPlayers_SulphurWormsInLakes(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

