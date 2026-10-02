// BlueprintGeneratedClass BTD_IsFacingTarget.BTD_IsFacingTarget_C
struct UBTD_IsFacingTarget_C : UBTDecorator_BlueprintBase {
	struct FBlackboardKeySelector ActorOrLocationTargetKey; 
	float DotThreshold; 
	bool IgnoreHeight; 
	bool DebugDot; 

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

