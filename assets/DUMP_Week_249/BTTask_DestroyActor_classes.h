// BlueprintGeneratedClass BTTask_DestroyActor.BTTask_DestroyActor_C
struct UBTTask_DestroyActor_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector TargetActorKey; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_DestroyActor(int32_t EntryPoint); // (Final|UbergraphFunction)
};

