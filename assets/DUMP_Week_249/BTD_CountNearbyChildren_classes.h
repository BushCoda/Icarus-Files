// BlueprintGeneratedClass BTD_CountNearbyChildren.BTD_CountNearbyChildren_C
struct UBTD_CountNearbyChildren_C : UBTDecorator_BlueprintBase {
	float NearbyDistance; 
	int32_t NearbyChildrenCount; 
	int32_t MinChildren; 
	int32_t MaxChildren; 
	struct FScalingRulesEnum MaxChildrenScalingRule; 

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

