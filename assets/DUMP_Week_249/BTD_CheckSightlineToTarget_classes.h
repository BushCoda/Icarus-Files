// BlueprintGeneratedClass BTD_CheckSightlineToTarget.BTD_CheckSightlineToTarget_C
struct UBTD_CheckSightlineToTarget_C : UBTDecorator_BlueprintBase {
	struct FBlackboardKeySelector TargetActorKey; 
	bool Controller Needs Line Of Sight to Target; 
	bool Needs Target Within Controller View; 
	bool Needs Controller Within Target View; 
	float DesiredDotLimit; 
	bool UseControlRotationInsteadOfLookRotation; 
	bool Use2DDotChecks; 

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
};

