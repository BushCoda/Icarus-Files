// BlueprintGeneratedClass BTD_HasStat.BTD_HasStat_C
struct UBTD_HasStat_C : UBTDecorator_BlueprintBase {
	int32_t AtLeastRequiredValue; 
	struct FStatsEnum RequiredStat; 

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
};

