// BlueprintGeneratedClass BP_IcarusGOAPAction_RetreatAndRegenerate.BP_IcarusGOAPAction_RetreatAndRegenerate_C
struct UBP_IcarusGOAPAction_RetreatAndRegenerate_C : UBP_IcarusGOAPAction_Base_C {
	struct FName LastRetreatHealthKey; 
	struct FName LastRetreatTimeKey; 
	struct FName RetreatTargetLocationKey; 
	struct FName RetreatTargetActorKey; 

	bool PlanAction(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CheckContextualPreconditions(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	bool ExecutionComplete(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
};

