// BlueprintGeneratedClass BTT_FindNearbyFoodContainer.BTT_FindNearbyFoodContainer_C
struct UBTT_FindNearbyFoodContainer_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector TargetActorKey; 
	struct FBlackboardKeySelector TargetLocationKey; 
	float NearbyDistance2D; 
	bool AvoidNearbyPlayers; 
	struct FBlackboardKeySelector FoodContainerKey; 
	bool OnlyAcceptUnshelteredContainers; 
	struct FTagQueriesRowHandle ContainerQuery; 
	bool SortByPathCost; 
	bool IgnoreUnreachable; 

	void IsLocationFreeFromHostileTargets(struct FVector Location, bool& FreeFromHostiles); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FindValidItem(struct FVector AroundLocation, float MaxDistance, struct AIcarusActor*& Item, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_FindNearbyFoodContainer(int32_t EntryPoint); // (Final|UbergraphFunction)
};

