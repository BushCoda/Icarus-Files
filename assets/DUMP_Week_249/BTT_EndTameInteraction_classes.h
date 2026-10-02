// BlueprintGeneratedClass BTT_EndTameInteraction.BTT_EndTameInteraction_C
struct UBTT_EndTameInteraction_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector InteractableActorKey; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_EndTameInteraction(int32_t EntryPoint); // (Final|UbergraphFunction)
};

