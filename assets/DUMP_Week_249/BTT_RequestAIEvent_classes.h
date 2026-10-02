// BlueprintGeneratedClass BTT_RequestAIEvent.BTT_RequestAIEvent_C
struct UBTT_RequestAIEvent_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAIEventsEnum EventToRequest; 
	bool MustSucceed; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_RequestAIEvent(int32_t EntryPoint); // (Final|UbergraphFunction)
};

