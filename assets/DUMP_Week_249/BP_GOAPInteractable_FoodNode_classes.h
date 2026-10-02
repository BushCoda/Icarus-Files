// BlueprintGeneratedClass BP_GOAPInteractable_FoodNode.BP_GOAPInteractable_FoodNode_C
struct ABP_GOAPInteractable_FoodNode_C : ABP_GOAPInteractable_Base_C {
	int32_t FLODInstanceIndex; 
	struct AFLODTile* FLODTile; 
	int32_t FLODRecordInstance; 
	struct ADeployable* CropPlot; 

	void OnInteractionComplete(struct AIcarusNPCGOAPController* Controller); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
};

