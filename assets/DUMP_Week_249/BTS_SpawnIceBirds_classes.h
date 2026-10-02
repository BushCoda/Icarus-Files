// BlueprintGeneratedClass BTS_SpawnIceBirds.BTS_SpawnIceBirds_C
struct UBTS_SpawnIceBirds_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	int32_t SpawnRate; 
	int32_t BirdsPerPlayer; 
	struct FBlackboardKeySelector HasArmor; 
	struct ABP_NPC_Ice_MammothBoss_Character_C* MammothBoss; 
	struct FBlackboardKeySelector CurrentPhase; 
	struct TArray<struct FAISetupRowHandle> ActorsToSpawn; 
	struct TArray<struct AActor*> SpawnedBirds; 
	struct FBlackboardKeySelector SwarmBirds; 
	struct USceneComponent* SpawnLocation; 
	int32_t AdjustedMaxBirds; 
	struct FScalingRulesEnum ScalingRules; 
	int32_t TicksTillSpawn; 
	int32_t ElapsedTicks; 
	int32_t AdjustedSpawnRate; 
	int32_t ClampedBirds; 
	int32_t ChanceToSpawn; 

	void Cache Birds Types(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void OnCreatureDeath(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BTS_SpawnIceBirds(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

