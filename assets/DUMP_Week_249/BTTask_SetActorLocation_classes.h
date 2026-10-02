// BlueprintGeneratedClass BTTask_SetActorLocation.BTTask_SetActorLocation_C
struct UBTTask_SetActorLocation_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector ActorKey; 
	struct FBlackboardKeySelector TargetLocationKey; 

	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_SetActorLocation(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

