// BlueprintGeneratedClass BTTask_AddArmorPercentage.BTTask_AddArmorPercentage_C
struct UBTTask_AddArmorPercentage_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	int32_t PercentageToAdd; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_AddArmorPercentage(int32_t EntryPoint); // (Final|UbergraphFunction)
};

