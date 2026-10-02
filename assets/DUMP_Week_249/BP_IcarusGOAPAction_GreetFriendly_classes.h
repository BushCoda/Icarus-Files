// BlueprintGeneratedClass BP_IcarusGOAPAction_GreetFriendly.BP_IcarusGOAPAction_GreetFriendly_C
struct UBP_IcarusGOAPAction_GreetFriendly_C : UBP_IcarusGOAPAction_Base_C {
	float MaxGreetDistance; 

	void IsTargetValid(struct AActor* Target, bool& IsValid); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	bool PlanAction(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetNearbyTargetToGreet(struct AActor*& ValidTarget); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	bool CheckContextualPreconditions(struct AIcarusNPCGOAPController* Controller); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
};

