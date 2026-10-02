// BlueprintGeneratedClass BTD_CheckIceMammothState.BTD_CheckIceMammothState_C
struct UBTD_CheckIceMammothState_C : UBTDecorator_BlueprintBase {
	struct FBlackboardKeySelector StateKey; 
	enum class IceMammothState DesiredState; 

	bool PerformConditionCheck(struct AActor* OwnerActor); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
};

