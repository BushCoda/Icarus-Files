// BlueprintGeneratedClass BTD_CheckSurvivalResourceLevel.BTD_CheckSurvivalResourceLevel_C
struct UBTD_CheckSurvivalResourceLevel_C : UBTDecorator_BlueprintBase {
	int32_t AbovePercentThreshold; 
	enum class ESurvivalConsumableType SurvivalResource; 

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
};

