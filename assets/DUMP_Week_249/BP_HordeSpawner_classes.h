// BlueprintGeneratedClass BP_HordeSpawner.BP_HordeSpawner_C
struct ABP_HordeSpawner_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* DefaultSceneRoot; 
	struct FVector Location; 
	struct FMulticastInlineDelegate NPCSpawned; 
	struct FHordeCreatureSetup Creature; 
	float Multiplier; 
	struct FRandomStream Random Stream; 
	float SpawnRadius; 
	float SpaceBetween; 

	void GetLevelForAI(int32_t& Level); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void EQSComplete(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void SpawnCreature(struct FHordeCreatureSetup Creature, float Multiplier, float InitialSpawnDelay); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_HordeSpawner(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void NPCSpawned__DelegateSignature(struct ABP_IcarusNPCGOAPCharacter_C* NPC); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

