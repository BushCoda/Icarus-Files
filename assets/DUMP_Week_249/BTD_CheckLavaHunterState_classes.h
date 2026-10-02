// BlueprintGeneratedClass BTD_CheckLavaHunterState.BTD_CheckLavaHunterState_C
struct UBTD_CheckLavaHunterState_C : UBTDecorator_BlueprintBase {
	struct FBlackboardKeySelector StateKey; 
	enum class LavaHunterState DesiredState; 

	bool PerformConditionCheck(struct AActor* OwnerActor); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
};

