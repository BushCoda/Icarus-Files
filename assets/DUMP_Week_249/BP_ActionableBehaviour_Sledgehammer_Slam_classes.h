// BlueprintGeneratedClass BP_ActionableBehaviour_Sledgehammer_Slam.BP_ActionableBehaviour_Sledgehammer_Slam_C
struct UBP_ActionableBehaviour_Sledgehammer_Slam_C : UBP_ActionableBehaviour_Sledgehammer_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FString NotifyHitName; 
	float AOERadius; 

	bool ShouldConsumeActionInput(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void OnTraitAnimNotify(struct FAnimNotifyEvent& Notify, struct AActor* AnimInstancePawn); // (Event|Public|HasOutParms|BlueprintEvent)
	void OnActionHit(struct AActor* InvokingActor, struct UPrimitiveComponent* OverlappedComponent, struct FHitResult& SweepResult, struct UTraitBehaviour* InstigatingBehaviour); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Sledgehammer_Slam(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

