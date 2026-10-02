// BlueprintGeneratedClass BTD_CheckLastMountMovementResult.BTD_CheckLastMountMovementResult_C
struct UBTD_CheckLastMountMovementResult_C : UBTDecorator_BlueprintBase {
	struct FBlackboardKeySelector ResultKey; 
	enum class MountLastMoveResult DesiredState; 

	bool PerformConditionCheck(struct AActor* OwnerActor); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
};

