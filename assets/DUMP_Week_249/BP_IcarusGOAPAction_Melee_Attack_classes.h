// BlueprintGeneratedClass BP_IcarusGOAPAction_Melee_Attack.BP_IcarusGOAPAction_Melee_Attack_C
struct UBP_IcarusGOAPAction_Melee_Attack_C : UBP_IcarusGOAPAction_Base_C {
	struct AActor* TargetActor; 
	struct AAITargetNode_C* TargetNodeRef; 
	float LastTargetSwitchTime; 

	void TrySwitchAttackTarget(struct AIcarusNPCGOAPController* Controller, bool& DidSwitch); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ActionReset(bool Interrupted); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool UpdateCost(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool IsInRange(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool PlanAction(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool CheckContextualPreconditions(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
};

