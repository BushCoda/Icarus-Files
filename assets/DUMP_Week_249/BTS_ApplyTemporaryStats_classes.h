// BlueprintGeneratedClass BTS_ApplyTemporaryStats.BTS_ApplyTemporaryStats_C
struct UBTS_ApplyTemporaryStats_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	int32_t StatUID; 
	struct TMap<struct FStatsEnum, int32_t> ActionStats; 

	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTS_ApplyTemporaryStats(int32_t EntryPoint); // (Final|UbergraphFunction)
};

