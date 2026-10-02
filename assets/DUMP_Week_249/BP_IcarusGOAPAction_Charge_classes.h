// BlueprintGeneratedClass BP_IcarusGOAPAction_Charge.BP_IcarusGOAPAction_Charge_C
struct UBP_IcarusGOAPAction_Charge_C : UBP_IcarusGOAPAction_Base_C {
	float LastChargeTime; 

	void IsTargetWithinValidChargeDistance(struct AIcarusNPCGOAPController* Controller, struct AActor* Target, bool& WithinValidDistance); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	bool ExecutionComplete(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool IsInRange(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool PlanAction(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool CheckContextualPreconditions(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
};

