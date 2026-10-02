// BlueprintGeneratedClass BTTask_SetArmorPercentage.BTTask_SetArmorPercentage_C
struct UBTTask_SetArmorPercentage_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	int32_t NewPercentage; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_SetArmorPercentage(int32_t EntryPoint); // (Final|UbergraphFunction)
};

