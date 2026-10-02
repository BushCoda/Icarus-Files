// BlueprintGeneratedClass BTT_ProduceMilk.BTT_ProduceMilk_C
struct UBTT_ProduceMilk_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusCharacter* CharacterRef; 
	struct UInventory* Container; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_ProduceMilk(int32_t EntryPoint); // (Final|UbergraphFunction)
};

