// BlueprintGeneratedClass BTD_CheckMountGrazingState.BTD_CheckMountGrazingState_C
struct UBTD_CheckMountGrazingState_C : UBTDecorator_BlueprintBase {
	struct FBlackboardKeySelector StateKey; 
	struct TArray<enum class EMountGrazingBehaviourState> DesiredStates; 

	bool PerformConditionCheck(struct AActor* OwnerActor); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
};

