// BlueprintGeneratedClass BTTask_PerformAction_LayEgg.BTTask_PerformAction_LayEgg_C
struct UBTTask_PerformAction_LayEgg_C : UBTTask_PerformAction_Base_C {
	struct FName SpawnSocket; 
	struct FAISetupRowHandle AIToSpawn; 
	int32_t AILevel; 
	float TimeToHatch; 
	float TimeToHatch_RandomDeviation; 
	struct ABP_LavaHunterEgg_C* EggClass; 
	int32_t NumberToSpawn; 
	int32_t NumberToSpawnDeviation; 
	int32_t StartingHealth; 
	struct FScalingRulesEnum SpawnCountScalingRule; 

	void DoAction(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
};

