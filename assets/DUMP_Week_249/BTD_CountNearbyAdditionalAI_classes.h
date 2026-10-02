// BlueprintGeneratedClass BTD_CountNearbyAdditionalAI.BTD_CountNearbyAdditionalAI_C
struct UBTD_CountNearbyAdditionalAI_C : UBTDecorator_BlueprintBase {
	struct FAISetupRowHandle AIType; 
	int32_t NearbyRange; 
	struct TMap<enum class EMissionDifficulty, struct FAdditionalAddsBTTaskConfig> PerDifficultyConfig; 

	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

