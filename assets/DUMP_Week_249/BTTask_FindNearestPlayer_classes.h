// BlueprintGeneratedClass BTTask_FindNearestPlayer.BTTask_FindNearestPlayer_C
struct UBTTask_FindNearestPlayer_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float MaxDistance; 
	struct FBlackboardKeySelector TargetActorKey; 
	bool FailIfNoPlayerFound; 

	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_FindNearestPlayer(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

