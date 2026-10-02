// BlueprintGeneratedClass BTD_CheckSoldierCombatMode.BTD_CheckSoldierCombatMode_C
struct UBTD_CheckSoldierCombatMode_C : UBTDecorator_BlueprintBase {
	struct FBlackboardKeySelector CombatModeKey; 
	enum class SoldierCombatMode DesiredCombatMode; 

	bool PerformConditionCheck(struct AActor* OwnerActor); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
};

