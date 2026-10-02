// BlueprintGeneratedClass BTTask_IcarusGOAP_SetMovementState.BTTask_IcarusGOAP_SetMovementState_C
struct UBTTask_IcarusGOAP_SetMovementState_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	enum class EMovementState NewMovementState; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_IcarusGOAP_SetMovementState(int32_t EntryPoint); // (Final|UbergraphFunction)
};

