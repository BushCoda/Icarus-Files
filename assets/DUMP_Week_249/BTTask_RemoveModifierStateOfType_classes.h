// BlueprintGeneratedClass BTTask_RemoveModifierStateOfType.BTTask_RemoveModifierStateOfType_C
struct UBTTask_RemoveModifierStateOfType_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FModifierStatesRowHandle ModifierType; 
	bool FailWithoutRemoval; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_RemoveModifierStateOfType(int32_t EntryPoint); // (Final|UbergraphFunction)
};

