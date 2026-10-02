// BlueprintGeneratedClass BP_Prebuilt_WorldSpawner.BP_Prebuilt_WorldSpawner_C
struct ABP_Prebuilt_WorldSpawner_C : ABP_WorldObject_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FMulticastInlineDelegate CreatureSpawned; 
	struct TArray<struct FPrebuiltStructuresRowHandle> PossiblePrebuiltStructures; 
	struct ABP_Prebuilt_Base_C* PrebuiltRef; 
	struct TArray<struct FAISetupRowHandle> PossibleAISetupSpawns; 
	struct FVector2D SpawnedAILevel; 
	struct FVector2D NumAIToSpawn; 
	struct TArray<struct AActor*> SpawnedNPCs; 
	bool AnchorNPCs; 
	struct FItemRewardsRowHandle ContainerLoot; 

	void PopulateContainersWithLoot(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TrySpawnAI(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void CustomEvent_1(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Prebuilt_WorldSpawner(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void CreatureSpawned__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

