// BlueprintGeneratedClass BTT_CalculateBestWanderEQSSize.BTT_CalculateBestWanderEQSSize_C
struct UBTT_CalculateBestWanderEQSSize_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector WanderEQSGridSizeKey; 
	struct FBlackboardKeySelector WanderEQSConeSizeKey; 
	struct FBlackboardKeySelector WanderEQSHalfMaximumSizeKey; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_CalculateBestWanderEQSSize(int32_t EntryPoint); // (Final|UbergraphFunction)
};

