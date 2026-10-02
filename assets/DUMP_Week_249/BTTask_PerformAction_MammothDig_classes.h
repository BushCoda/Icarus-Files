// BlueprintGeneratedClass BTTask_PerformAction_MammothDig.BTTask_PerformAction_MammothDig_C
struct UBTTask_PerformAction_MammothDig_C : UBTTask_PerformAction_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FName DummyObjectBlackboardName; 
	struct FBlackboardKeySelector LastLocation; 

	void DoAction(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_PerformAction_MammothDig(int32_t EntryPoint); // (Final|UbergraphFunction)
};

