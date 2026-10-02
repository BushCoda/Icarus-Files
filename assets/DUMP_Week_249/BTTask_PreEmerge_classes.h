// BlueprintGeneratedClass BTTask_PreEmerge.BTTask_PreEmerge_C
struct UBTTask_PreEmerge_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FName RetreatTargetActorKey; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_PreEmerge(int32_t EntryPoint); // (Final|UbergraphFunction)
};

