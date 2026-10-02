// BlueprintGeneratedClass BP_ActionableBehaviour_Sledgehammer_With_Sweep.BP_ActionableBehaviour_Sledgehammer_With_Sweep_C
struct UBP_ActionableBehaviour_Sledgehammer_With_Sweep_C : UBP_ActionableBehaviour_Sledgehammer_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FString HitNotifyName; 
	struct FString EnableHitNotifyName; 
	struct FString DisableHitNotifyName; 

	bool ShouldConsumeActionInput(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnTraitAnimNotify(struct FAnimNotifyEvent& Notify, struct AActor* AnimInstancePawn); // (Event|Public|HasOutParms|BlueprintEvent)
	void OnActionHit(struct AActor* InvokingActor, struct UPrimitiveComponent* OverlappedComponent, struct FHitResult& SweepResult, struct UTraitBehaviour* InstigatingBehaviour); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Sledgehammer_With_Sweep(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

