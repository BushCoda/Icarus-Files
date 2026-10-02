// BlueprintGeneratedClass BTT_FindPlayerWithThrownItem.BTT_FindPlayerWithThrownItem_C
struct UBTT_FindPlayerWithThrownItem_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector FoundPlayerKey; 
	float MaxDistance; 
	struct AIcarusPlayerCharacter* ChosenPlayer; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_FindPlayerWithThrownItem(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

