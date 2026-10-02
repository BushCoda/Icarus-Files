// BlueprintGeneratedClass BTT_SetMovementMode.BTT_SetMovementMode_C
struct UBTT_SetMovementMode_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	enum class EMovementMode New Movement Mode; 
	char New Custom Mode; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_SetMovementMode(int32_t EntryPoint); // (Final|UbergraphFunction)
};

