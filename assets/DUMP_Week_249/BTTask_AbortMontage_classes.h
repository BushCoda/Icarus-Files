// BlueprintGeneratedClass BTTask_AbortMontage.BTTask_AbortMontage_C
struct UBTTask_AbortMontage_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AAIController* ControllerRef; 
	struct AIcarusCharacter* IcarusCharacterRef; 
	struct AIcarusPawn* IcarusPawnRef; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_AbortMontage(int32_t EntryPoint); // (Final|UbergraphFunction)
};

