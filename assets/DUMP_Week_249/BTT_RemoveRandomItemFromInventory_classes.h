// BlueprintGeneratedClass BTT_RemoveRandomItemFromInventory.BTT_RemoveRandomItemFromInventory_C
struct UBTT_RemoveRandomItemFromInventory_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector TargetContainerKey; 
	struct FTagQueriesRowHandle ValidItemQuery; 
	int32_t RemovedItemsCount; 
	int32_t RemovedItemsCountDeviation; 
	bool SucceedIfAnyItemsFound; 
	int32_t RequiredItemNum; 
	int32_t NumItemsRemoved; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_RemoveRandomItemFromInventory(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

