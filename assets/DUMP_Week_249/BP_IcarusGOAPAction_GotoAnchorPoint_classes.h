// BlueprintGeneratedClass BP_IcarusGOAPAction_GotoAnchorPoint.BP_IcarusGOAPAction_GotoAnchorPoint_C
struct UBP_IcarusGOAPAction_GotoAnchorPoint_C : UBP_IcarusGOAPAction_Base_C {
	int32_t TimesBlocked; 
	int32_t TimesBlockedBeforeTeleport; 
	struct FVector LastBlockLocation; 

	bool ExecutionComplete(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ResetGOAPState(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool GetActionStats(struct TMap<struct FBaseStatsEnum, int32_t>& ActionStats); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnGOAPMovementBlocked(struct FVector CurrentLocation, struct FVector TargetLocation); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool ActionReset(bool Interrupted); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool PlanAction(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
};

