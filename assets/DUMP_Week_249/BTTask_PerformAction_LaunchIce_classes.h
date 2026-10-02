// BlueprintGeneratedClass BTTask_PerformAction_LaunchIce.BTTask_PerformAction_LaunchIce_C
struct UBTTask_PerformAction_LaunchIce_C : UBTTask_PerformAction_SpitAttack_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FName DummyObjectBlackboardName; 
	struct FVector SpitballScale; 
	struct FBlackboardKeySelector LastLocation; 
	float Min; 
	float Max; 

	void GetSpitballScale(struct FVector& OutScale); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void DoAction(); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_PerformAction_LaunchIce(int32_t EntryPoint); // (Final|UbergraphFunction)
};

