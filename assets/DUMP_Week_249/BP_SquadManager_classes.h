// BlueprintGeneratedClass BP_SquadManager.BP_SquadManager_C
struct ABP_SquadManager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* DefaultSceneRoot; 
	struct AActor* SquadLeader; 
	struct TArray<struct AActor*> SquadFollowers; 
	struct TArray<struct AAITargetNode_C*> TargetNodes; 
	int32_t FollowDistance; 
	int32_t FlankingAngle; 
	struct AActor* SquadTargetActor; 
	bool ShouldSynchronisePerception; 

	void SynchroniseStimuli(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnFollowerEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (Public|BlueprintCallable|BlueprintEvent)
	void GetTargetLocationForFollower(int32_t FollowerIndex, struct FVector& TargetLocation); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void RequestFollowTarget(struct AActor* Follower, struct AActor*& TargetNode); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_SquadManager(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

