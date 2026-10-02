// BlueprintGeneratedClass BP_IcarusGOAPAction_Rest_AnimalBed.BP_IcarusGOAPAction_Rest_AnimalBed_C
struct UBP_IcarusGOAPAction_Rest_AnimalBed_C : UBP_IcarusGOAPAction_Rest_C {

	bool CheckContextualPreconditions(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void IsAnimalBedUnoccupied(struct AActor* BedActor, bool& Unoccupied); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	void GetNearestUnoccupiedAnimalBed(struct AActor*& ValidBed, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool PlanAction(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
};

