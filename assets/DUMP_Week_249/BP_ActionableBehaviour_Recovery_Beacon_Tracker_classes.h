// BlueprintGeneratedClass BP_ActionableBehaviour_Recovery_Beacon_Tracker.BP_ActionableBehaviour_Recovery_Beacon_Tracker_C
struct UBP_ActionableBehaviour_Recovery_Beacon_Tracker_C : UBP_ActionableBehaviour_Scanner_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AActor* TrackedActor; 
	struct FMulticastInlineDelegate TrackedActorUpdated; 

	void UpdateScanningIntensity(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateScanningIntensity_1(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_TrackedActor(); // (BlueprintCallable|BlueprintEvent)
	void GetTrackedActor(struct AActor*& Item); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetActors(struct TArray<struct AActor*>& OutActors); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CycleBeacon(bool Forward); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FilterActors(struct TArray<struct AActor*>& Actors, struct TArray<struct AActor*>& Filtered); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ForceUpdate(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Recovery_Beacon_Tracker(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void TrackedActorUpdated__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

