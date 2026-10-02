// BlueprintGeneratedClass BTD_CheckTimeToIntercept.BTD_CheckTimeToIntercept_C
struct UBTD_CheckTimeToIntercept_C : UBTDecorator_BlueprintBase {
	struct FBlackboardKeySelector TargetActorKey; 
	float TimeToIntercept; 
	float ConstantTimeUnderThresholdRequirement; 
	float TimeSinceUnderThreshold; 

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
};

