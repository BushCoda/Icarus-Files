// BlueprintGeneratedClass BTT_GetBlockingActor.BTT_GetBlockingActor_C
struct UBTT_GetBlockingActor_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector BlockedTargetKey; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_GetBlockingActor(int32_t EntryPoint); // (Final|UbergraphFunction)
};

