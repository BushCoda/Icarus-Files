// BlueprintGeneratedClass BP_IcarusGOAPAction_EatNearbyCarcasses_BecomeAggressive.BP_IcarusGOAPAction_EatNearbyCarcasses_BecomeAggressive_C
struct UBP_IcarusGOAPAction_EatNearbyCarcasses_BecomeAggressive_C : UBP_IcarusGOAPAction_EatNearbyCarcasses_C {
	struct FName ProtectedActorKey; 

	bool UpdateCost(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool ExecutionComplete(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool Execute(struct AIcarusNPCGOAPController* Controller, float Delta); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool PlanAction(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
};

