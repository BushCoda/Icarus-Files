// BlueprintGeneratedClass BTTask_StatBasedDelay.BTTask_StatBasedDelay_C
struct UBTTask_StatBasedDelay_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FStatsRowHandle Stat; 
	bool IsPerMinuteRateStat; 
	int32_t DefaultStatValue; 
	float DeviationPercent; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_StatBasedDelay(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

