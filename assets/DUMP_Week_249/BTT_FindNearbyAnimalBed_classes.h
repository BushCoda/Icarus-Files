// BlueprintGeneratedClass BTT_FindNearbyAnimalBed.BTT_FindNearbyAnimalBed_C
struct UBTT_FindNearbyAnimalBed_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector TargetActorKey; 
	struct FBlackboardKeySelector TargetLocationKey; 
	float NearbyDistance; 
	struct FTagQueriesRowHandle BedQuery; 
	struct FBlackboardKeySelector IgnoreUnreachableKey; 

	void IsAnimalBedUnoccupied(struct AActor* BedActor, struct APawn* OwnerPawn, bool& Unoccupied); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsLocationFreeFromHostileTargets(struct FVector Location, bool& FreeFromHostiles); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FindValidItem(struct FVector AroundLocation, float MaxDistance, struct APawn* OwnerPawn, struct AIcarusActor*& Item, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_FindNearbyAnimalBed(int32_t EntryPoint); // (Final|UbergraphFunction)
};

