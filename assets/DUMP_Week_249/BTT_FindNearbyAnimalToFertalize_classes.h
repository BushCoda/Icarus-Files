// BlueprintGeneratedClass BTT_FindNearbyAnimalToFertalize.BTT_FindNearbyAnimalToFertalize_C
struct UBTT_FindNearbyAnimalToFertalize_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector TargetActorKey; 
	struct FBlackboardKeySelector TargetLocationKey; 
	float MaxDistance; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_FindNearbyAnimalToFertalize(int32_t EntryPoint); // (Final|UbergraphFunction)
};

