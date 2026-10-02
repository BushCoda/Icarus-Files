// BlueprintGeneratedClass BTTask_GreatApe_FindRunAwayLocation.BTTask_GreatApe_FindRunAwayLocation_C
struct UBTTask_GreatApe_FindRunAwayLocation_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector RunAwayKeyLocation; 
	struct FBlackboardKeySelector JumpTrunkKeyLocation; 
	struct FBlackboardKeySelector JumpBranchKeyLocation; 
	float MinDistance; 

	void GetValuesForItem(struct ABP_GreatApe_Runaway_Location_C* Item); // (Public|BlueprintCallable|BlueprintEvent)
	void FindValidRunAwayPoint(struct AActor* Pawn, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_GreatApe_FindRunAwayLocation(int32_t EntryPoint); // (Final|UbergraphFunction)
};

