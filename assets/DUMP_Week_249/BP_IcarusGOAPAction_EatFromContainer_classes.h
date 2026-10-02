// BlueprintGeneratedClass BP_IcarusGOAPAction_EatFromContainer.BP_IcarusGOAPAction_EatFromContainer_C
struct UBP_IcarusGOAPAction_EatFromContainer_C : UBP_IcarusGOAPAction_Base_C {
	struct FTagQueriesRowHandle ValidFoodQuery; 
	struct ABP_GOAPInteractable_FoodNode_C* SpawnedFoodNode; 
	int32_t Array Index; 
	struct AFLODTile* Tile; 
	int32_t RecordIndex; 
	int32_t FLODInstanceIndex; 
	struct ABP_GOAP_Corpse_C* TargetCorpse; 
	int32_t MaxEatAmount; 
	bool IsEating; 
	struct FTimerHandle EatTimer; 

	bool Execute(struct AIcarusNPCGOAPController* Controller, float Delta); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool CheckContextualPreconditions(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	bool ExecutionComplete(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

