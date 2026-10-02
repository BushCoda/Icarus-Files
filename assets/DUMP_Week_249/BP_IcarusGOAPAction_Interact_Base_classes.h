// BlueprintGeneratedClass BP_IcarusGOAPAction_Interact_Base.BP_IcarusGOAPAction_Interact_Base_C
struct UBP_IcarusGOAPAction_Interact_Base_C : UBP_IcarusGOAPAction_Base_C {
	struct FVector ProjectionExtent; 
	struct ABP_GOAPInteractable_Base_C* InteractableClass; 
	struct ABP_GOAPInteractable_Base_C* SpawnedNode; 

	bool ActionReset(bool Interrupted); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SpawnDummyNode(struct AIcarusNPCGOAPController* ForController, struct FVector Spawn Transform Location, struct ABP_GOAPInteractable_Base_C*& SpawnedNode); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool PlanAction(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetInteractLocation(struct AIcarusNPCGOAPController* ForController, struct FVector& OutLocation, bool& Success); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool Execute(struct AIcarusNPCGOAPController* Controller, float Delta); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool IsInRange(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
};

