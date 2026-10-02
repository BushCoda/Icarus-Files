// BlueprintGeneratedClass BTD_CheckNotHungryOrThirsty.BTD_CheckNotHungryOrThirsty_C
struct UBTD_CheckNotHungryOrThirsty_C : UBTDecorator_BlueprintBase {
	int32_t PercentThreshold; 
	float LastFoodContainerCheckTime; 
	float MinTimeBetweenContainerSearches; 
	float LastWaterContainerCheckTime; 

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
};

