// BlueprintGeneratedClass BTT_FindWanderLocation.BTT_FindWanderLocation_C
struct UBTT_FindWanderLocation_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector target_location; 
	float Distance; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_FindWanderLocation(int32_t EntryPoint); // (Final|UbergraphFunction)
};

