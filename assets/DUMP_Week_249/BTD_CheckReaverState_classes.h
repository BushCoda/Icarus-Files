// BlueprintGeneratedClass BTD_CheckReaverState.BTD_CheckReaverState_C
struct UBTD_CheckReaverState_C : UBTDecorator_BlueprintBase {
	enum class ReaverState DesiredState; 
	struct FBlackboardKeySelector CurrentStateKey; 

	bool PerformConditionCheck(struct AActor* OwnerActor); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
};

