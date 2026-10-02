// BlueprintGeneratedClass BP_DragonFlyNest.BP_DragonFlyNest_C
struct ABP_DragonFlyNest_C : ABP_BatNest_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	int32_t NewVar_1; 
	struct ABP_NPC_DragonFly_Character_C* NewVar_2; 

	void SpawnBat(struct FVector& Location, struct FRotator Rotation, bool StartAggressive); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_DragonFlyNest(int32_t EntryPoint); // (Final|UbergraphFunction)
};

