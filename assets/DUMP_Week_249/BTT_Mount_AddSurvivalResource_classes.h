// BlueprintGeneratedClass BTT_Mount_AddSurvivalResource.BTT_Mount_AddSurvivalResource_C
struct UBTT_Mount_AddSurvivalResource_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	enum class ESurvivalConsumableType SurvivalResourceType; 
	int32_t UnitsToAdd; 
	struct FVirtualStatsEnum StatBasedUnitsToAdd; 
	bool ShouldSubtractResource; 
	float RandomDeviationPercent; 
	int32_t RandomDeviation; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_Mount_AddSurvivalResource(int32_t EntryPoint); // (Final|UbergraphFunction)
};

