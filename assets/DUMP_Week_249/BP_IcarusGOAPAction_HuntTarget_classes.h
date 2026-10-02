// BlueprintGeneratedClass BP_IcarusGOAPAction_HuntTarget.BP_IcarusGOAPAction_HuntTarget_C
struct UBP_IcarusGOAPAction_HuntTarget_C : UBP_IcarusGOAPAction_Base_C {
	struct AActor* TargetActor; 
	float MaxTargetDistance; 
	bool ShouldHuntAsPack; 

	void EngageAllHuntingNPCs(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool ExecutionComplete(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetClosestHuntingTarget(struct AActor*& Target); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	bool ActionReset(bool Interrupted); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool CheckContextualPreconditions(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	bool PlanAction(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool IsInRange(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
};

