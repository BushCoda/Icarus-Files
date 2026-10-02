// BlueprintGeneratedClass BTD_CheckSandWormState.BTD_CheckSandWormState_C
struct UBTD_CheckSandWormState_C : UBTDecorator_BlueprintBase {
	struct FBlackboardKeySelector StateKey; 
	enum class SandWormState DesiredState; 

	bool PerformConditionCheck(struct AActor* OwnerActor); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
};

