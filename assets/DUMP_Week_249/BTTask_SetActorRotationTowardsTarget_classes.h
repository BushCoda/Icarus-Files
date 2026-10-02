// BlueprintGeneratedClass BTTask_SetActorRotationTowardsTarget.BTTask_SetActorRotationTowardsTarget_C
struct UBTTask_SetActorRotationTowardsTarget_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector TargetKey; 
	bool YawOnly; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_SetActorRotationTowardsTarget(int32_t EntryPoint); // (Final|UbergraphFunction)
};

