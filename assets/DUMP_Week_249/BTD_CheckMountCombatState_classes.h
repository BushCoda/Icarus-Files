// BlueprintGeneratedClass BTD_CheckMountCombatState.BTD_CheckMountCombatState_C
struct UBTD_CheckMountCombatState_C : UBTDecorator_BlueprintBase {
	struct FBlackboardKeySelector StateKey; 
	enum class EMountCombatBehaviourState DesiredState; 

	bool PerformConditionCheck(struct AActor* OwnerActor); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
};

