// BlueprintGeneratedClass BTTask_CacheActorTargetLocation.BTTask_CacheActorTargetLocation_C
struct UBTTask_CacheActorTargetLocation_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector TargetActorKey; 
	struct FBlackboardKeySelector TargetLocationKey; 
	bool AdjustForTargetVelocity; 
	struct FVector TargetLocationOffset; 
	float TimeAheadAdjustment; 
	struct FVector ManualTargetOffset; 
	struct FName TargetHeightKeyName; 

	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_CacheActorTargetLocation(int32_t EntryPoint); // (Final|UbergraphFunction)
};

