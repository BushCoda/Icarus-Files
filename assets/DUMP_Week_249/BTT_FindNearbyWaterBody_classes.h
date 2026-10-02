// BlueprintGeneratedClass BTT_FindNearbyWaterBody.BTT_FindNearbyWaterBody_C
struct UBTT_FindNearbyWaterBody_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector TargetActorKey; 
	struct FBlackboardKeySelector TargetLocationKey; 
	float NearbyDistance; 
	float MaxBodyDistance; 
	struct TArray<struct FWaterSetupRowHandle> ValidSetupTypes; 

	void FindValidLocation(struct FVector AroundLocation, float MaxDistance, struct APawn* OwnerPawn, struct FVector& Location, struct AActor*& LocationActor, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_FindNearbyWaterBody(int32_t EntryPoint); // (Final|UbergraphFunction)
};

