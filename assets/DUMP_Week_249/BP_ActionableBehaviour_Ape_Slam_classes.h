// BlueprintGeneratedClass BP_ActionableBehaviour_Ape_Slam.BP_ActionableBehaviour_Ape_Slam_C
struct UBP_ActionableBehaviour_Ape_Slam_C : UBP_ActionableBehaviour_Generic_Melee_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FVector HitLocation_1; 
	struct FVector HitImpactNormal_1; 
	enum class EPhysicalSurface SurfaceHit_1; 
	struct AActor* HitActor_1; 
	bool SecondaryAttack; 
	struct FModifierStatesRowHandle ModifierToApply; 
	bool bHasSlam; 

	bool ShouldConsumeActionInput(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnActionHitEvent(struct AActor* Invoking Actor, struct UPrimitiveComponent* OverlappedComponent , struct FHitResult& SweepResult, bool& WasHitSuccessful); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Ape_Slam(int32_t EntryPoint); // (Final|UbergraphFunction)
};

