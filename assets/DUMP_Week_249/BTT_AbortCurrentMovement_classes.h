// BlueprintGeneratedClass BTT_AbortCurrentMovement.BTT_AbortCurrentMovement_C
struct UBTT_AbortCurrentMovement_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_AbortCurrentMovement(int32_t EntryPoint); // (Final|UbergraphFunction)
};

