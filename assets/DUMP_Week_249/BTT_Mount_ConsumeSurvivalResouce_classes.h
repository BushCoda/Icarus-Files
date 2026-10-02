// BlueprintGeneratedClass BTT_Mount_ConsumeSurvivalResouce.BTT_Mount_ConsumeSurvivalResouce_C
struct UBTT_Mount_ConsumeSurvivalResouce_C : UBTTask_PerformAction_Mount_C {
	struct FBlackboardKeySelector ContainerKey; 
	struct FTagQueriesRowHandle TargetResourceItem; 
	enum class ESurvivalConsumableType SurvivalResourceType; 
	int32_t FillableUnitConsumption; 
	bool ScaleConsumptionByNPCWeight; 
	float NutritionMultiplier; 

	void GetContainerInventory(struct UInventory*& Inventory); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void DoAction(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
};

