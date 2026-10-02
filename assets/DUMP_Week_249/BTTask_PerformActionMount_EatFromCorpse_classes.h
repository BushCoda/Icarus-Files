// BlueprintGeneratedClass BTTask_PerformActionMount_EatFromCorpse.BTTask_PerformActionMount_EatFromCorpse_C
struct UBTTask_PerformActionMount_EatFromCorpse_C : UBTT_Mount_ConsumeSurvivalResouce_C {
	struct FBlackboardKeySelector CorpseActorKey; 
	float CorpseHarvestMultiplier; 

	void GetContainerInventory(struct UInventory*& Inventory); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void DoAction(); // (Public|BlueprintCallable|BlueprintEvent)
};

