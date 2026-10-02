// BlueprintGeneratedClass BTTask_FindNearestTaggedActor.BTTask_FindNearestTaggedActor_C
struct UBTTask_FindNearestTaggedActor_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector TargetActorKey; 
	struct FBlackboardKeySelector TargetLocationKey; 
	struct FName TagName; 
	struct TSoftClassPtr<UObject> ActorClassFilter; 
	float MaxDistanceToPawn; 
	bool FindFurthest; 
	struct FName OptionalComponentTag; 
	struct FVector OutLocation; 
	bool RequireAlive; 
	struct FVector OutLocationOffset; 

	void FindActor(struct APawn* SelfPawn, struct AActor*& Actor); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_FindNearestTaggedActor(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

