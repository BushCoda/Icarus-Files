// BlueprintGeneratedClass BTTask_Detonate.BTTask_Detonate_C
struct UBTTask_Detonate_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float DetonationTime; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_Detonate(int32_t EntryPoint); // (Final|UbergraphFunction)
};

