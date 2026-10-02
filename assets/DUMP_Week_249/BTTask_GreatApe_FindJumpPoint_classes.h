// BlueprintGeneratedClass BTTask_GreatApe_FindJumpPoint.BTTask_GreatApe_FindJumpPoint_C
struct UBTTask_GreatApe_FindJumpPoint_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector JumpStartKeyLocation; 
	struct FBlackboardKeySelector JumpTrunkKeyLocation; 
	struct FBlackboardKeySelector JumpBranch1KeyLocation; 
	bool Furtherest; 
	bool Random; 

	void GetValuesForIndex(int32_t Index, struct TArray<struct ABP_GreatApe_JumpPoint_C*>& Values, bool& Success); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindValidJumpPoint(struct AActor* Pawn, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_GreatApe_FindJumpPoint(int32_t EntryPoint); // (Final|UbergraphFunction)
};

