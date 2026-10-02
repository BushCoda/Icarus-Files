// BlueprintGeneratedClass BTT_GetFollowerMoveLocation.BTT_GetFollowerMoveLocation_C
struct UBTT_GetFollowerMoveLocation_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector SquadManagerKey; 
	struct FBlackboardKeySelector ActorMoveTargetKey; 

	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_GetFollowerMoveLocation(int32_t EntryPoint); // (Final|UbergraphFunction)
};

