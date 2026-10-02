// BlueprintGeneratedClass BP_IcarusGOAPAction_EatPlantFood.BP_IcarusGOAPAction_EatPlantFood_C
struct UBP_IcarusGOAPAction_EatPlantFood_C : UBP_IcarusGOAPAction_Interact_Base_C {
	struct FTagQueriesRowHandle ValidFoodQuery; 
	struct ABP_GOAPInteractable_FoodNode_C* SpawnedFoodNode; 
	int32_t Array Index; 
	struct AFLODTile* Tile; 
	int32_t RecordIndex; 
	int32_t FLODInstanceIndex; 
	struct ADeployable* TargetCropPlot; 

	void LookForCropPlot(struct AController* Controller, float SearchRadius, struct TArray<struct ADeployable*>& CropPlots); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SpawnDummyNode(struct AIcarusNPCGOAPController* ForController, struct FVector Spawn Transform Location, struct ABP_GOAPInteractable_Base_C*& SpawnedNode); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetInteractLocation(struct AIcarusNPCGOAPController* ForController, struct FVector& OutLocation, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool ExecutionComplete(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

