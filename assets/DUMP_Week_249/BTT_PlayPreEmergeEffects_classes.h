// BlueprintGeneratedClass BTT_PlayPreEmergeEffects.BTT_PlayPreEmergeEffects_C
struct UBTT_PlayPreEmergeEffects_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector LocationKey; 
	bool IsFirstEmerge; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_PlayPreEmergeEffects(int32_t EntryPoint); // (Final|UbergraphFunction)
};

