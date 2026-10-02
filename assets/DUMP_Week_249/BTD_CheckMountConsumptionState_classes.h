// BlueprintGeneratedClass BTD_CheckMountConsumptionState.BTD_CheckMountConsumptionState_C
struct UBTD_CheckMountConsumptionState_C : UBTDecorator_BlueprintBase {
	struct FBlackboardKeySelector StateKey; 
	enum class EMountConsumptionBehaviourState DesiredState; 

	bool PerformConditionCheck(struct AActor* OwnerActor); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
};

