// BlueprintGeneratedClass BTD_CanDestroyBlockingActor.BTD_CanDestroyBlockingActor_C
struct UBTD_CanDestroyBlockingActor_C : UBTDecorator_BlueprintBase {
	struct FBlackboardKeySelector ActorToDestroy; 
	bool ShouldCheckActorToDestroy; 

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
};

