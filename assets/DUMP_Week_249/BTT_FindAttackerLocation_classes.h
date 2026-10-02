// BlueprintGeneratedClass BTT_FindAttackerLocation.BTT_FindAttackerLocation_C
struct UBTT_FindAttackerLocation_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector TargetLocation; 
	float FallbackDistance; 
	struct FBlackboardKeySelector TargetActor; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_FindAttackerLocation(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

