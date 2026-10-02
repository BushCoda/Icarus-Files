// BlueprintGeneratedClass BTT_AssignStatToBBKey.BTT_AssignStatToBBKey_C
struct UBTT_AssignStatToBBKey_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector FloatBlackboardKey; 
	struct FBlackboardKeySelector IntBlackboardKey; 
	struct FStatsEnum Stat; 
	int32_t DefaultValue; 
	bool Debug; 
	struct FBlackboardKeySelector dummykey; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_AssignStatToBBKey(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

