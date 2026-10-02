// BlueprintGeneratedClass BP_ActionableBehaviour_SlugAxe.BP_ActionableBehaviour_SlugAxe_C
struct UBP_ActionableBehaviour_SlugAxe_C : UBP_ActionableBehaviour_Gauntlet_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FName NonChargedSection; 
	struct FName IdleAnimSection; 

	bool ShouldConsumeActionInput(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnActionHitEvent(struct AActor* Invoking Actor, struct UPrimitiveComponent* OverlappedComponent , struct FHitResult& SweepResult, struct UTraitBehaviour* TraitBehaviour); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetIsCharging(bool IsChargingHit); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ApplyChargeStats(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_SlugAxe(int32_t EntryPoint); // (Final|UbergraphFunction)
};

