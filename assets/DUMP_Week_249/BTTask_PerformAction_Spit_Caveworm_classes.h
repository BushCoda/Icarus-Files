// BlueprintGeneratedClass BTTask_PerformAction_Spit_Caveworm.BTTask_PerformAction_Spit_Caveworm_C
struct UBTTask_PerformAction_Spit_Caveworm_C : UBTTask_PerformAction_Base_C {
	struct FName CurrentTargetKey; 
	float ProjectileSpeed; 
	int32_t SpitballCount; 
	float SpitballInaccuracy; 
	struct FItemsStaticRowHandle SpitballItemData; 

	void GetSpitballScale(struct FVector& OutScale); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void DoAction(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
};

