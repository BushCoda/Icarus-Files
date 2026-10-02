// BlueprintGeneratedClass BTTask_GreatApe_FindJumpDownPoint.BTTask_GreatApe_FindJumpDownPoint_C
struct UBTTask_GreatApe_FindJumpDownPoint_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector JumpStartKeyLocation; 
	bool Random; 

	void JumpPointDownPoint(struct AActor* Pawn, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_GreatApe_FindJumpDownPoint(int32_t EntryPoint); // (Final|UbergraphFunction)
};

