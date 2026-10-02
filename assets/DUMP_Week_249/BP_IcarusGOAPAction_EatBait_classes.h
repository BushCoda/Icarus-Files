// BlueprintGeneratedClass BP_IcarusGOAPAction_EatBait.BP_IcarusGOAPAction_EatBait_C
struct UBP_IcarusGOAPAction_EatBait_C : UBP_IcarusGOAPAction_Interact_Base_C {
	struct AIcarusItem* TargetBait; 
	struct FTagQueriesEnum OmnivoreBaitQuery; 
	struct FTagQueriesEnum CarnivoreBaitQuery; 
	struct FTagQueriesEnum HerbivoreBaitQuery; 
	bool HasEatenBait; 

	bool ActionReset(bool Interrupted); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetNearestRelevantBaitItem(struct AIcarusNPCGOAPController* ForController, bool SkipPathCheck, struct AIcarusItem*& BaitItem, struct FVector& PathEnd); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	bool GOAPAnimNotify(struct FString NotifyName, struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void EatBait(struct AIcarusNPCGOAPController* Controller); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CheckContextualPreconditions(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void GetInteractLocation(struct AIcarusNPCGOAPController* ForController, struct FVector& OutLocation, bool& Success); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
};

