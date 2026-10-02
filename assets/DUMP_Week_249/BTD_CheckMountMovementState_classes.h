// BlueprintGeneratedClass BTD_CheckMountMovementState.BTD_CheckMountMovementState_C
struct UBTD_CheckMountMovementState_C : UBTDecorator_BlueprintBase {
	struct FBlackboardKeySelector StateKey; 
	enum class EMountMovementBehaviourState DesiredState; 

	bool PerformConditionCheck(struct AActor* OwnerActor); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
};

