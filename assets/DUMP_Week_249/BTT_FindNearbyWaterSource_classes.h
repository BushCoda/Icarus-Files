// BlueprintGeneratedClass BTT_FindNearbyWaterSource.BTT_FindNearbyWaterSource_C
struct UBTT_FindNearbyWaterSource_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector TargetActorKey; 
	struct FBlackboardKeySelector TargetLocationKey; 
	float NearbyDistance; 
	struct FBlackboardKeySelector FillableContainerKey; 

	void FindValidItem(struct FVector AroundLocation, float MaxDistance, struct APawn* OwnerPawn, struct AIcarusActor*& Item, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_FindNearbyWaterSource(int32_t EntryPoint); // (Final|UbergraphFunction)
};

