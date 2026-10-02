// BlueprintGeneratedClass BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C
struct UBP_ActionableBehaviour_Generic_Melee_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCapsuleComponent* HitCollider; 
	struct AIcarusPlayerCharacter* OwningPlayer; 
	bool ActionCooldownActive; 
	bool IsHitReacting; 
	bool DebugDraw; 
	bool IsSweepingCollision; 
	struct FVector LastColliderLocation; 
	struct FToolDamage ToolDamage; 
	bool ShouldSweepCollision; 
	enum class ETraceTypeQuery CollisionTraceChannel; 
	bool ShouldReverseAnimOnHit; 
	float ScreenshakeScale; 
	bool DebugForceOwnership; 
	struct FRandomStream RandomStream_1; 
	float HitTraceDistance; 
	struct TArray<struct UObject*> StoredMontages; 
	struct FString CustomHitNotifyName; 
	struct TArray<struct AActor*> SweepIgnoreActors; 

	void ConditionalConsumeFuel(struct FHitResult HitResult); // (Public|BlueprintCallable|BlueprintEvent)
	bool ShouldConsumeActionInput(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	enum class EViewTraceResultPriority GetHitResultPriorityLow(struct FViewTraceResult& Result); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void CheckRepairIfBreak(struct AIcarusItem* ItemInstance, int32_t DurabilityLossFromHit, bool& AutoRepaired); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PlayMeleeSwing(struct AIcarusPlayerCharacter* TargetPlayer); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	int32_t GetStatAdjustedDurability(int32_t DurabilityLoss); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	enum class EViewTraceResultPriority GetHitResultPriority(struct FViewTraceResult& Result); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetHitFromViewTraces(struct FHitResult& OutHit); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SelectRandomWeightedMontage_1(struct TArray<struct FName>& Sections, struct UAnimMontage* Montage, struct FName& ChosenSection); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PlayHitSound(bool HitSuccessful, struct FVector HitLocation, enum class EPhysicalSurface SurfaceHit, struct FHitResult& SweepResult); // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayScreenshake(float Scale, bool Hit); // (Public|BlueprintCallable|BlueprintEvent)
	struct USkeletalMeshComponent* GetAnimatingMesh(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void HitCollision(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InvokeHit(struct FHitResult Hit); // (Public|BlueprintCallable|BlueprintEvent)
	void SweepCollision(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnActionHitEvent(struct AActor* Invoking Actor, struct UPrimitiveComponent* OverlappedComponent , struct FHitResult& SweepResult, bool& WasHitSuccessful); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetSweepingEnabled(bool Enabled); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup(struct AActor* OwningActor); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_2B8B2B624CE5F97DAE6892B73345A5DB(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnTraitAnimNotify(struct FAnimNotifyEvent& Notify, struct AActor* AnimInstancePawn); // (Event|Public|HasOutParms|BlueprintEvent)
	void OnActionHit(struct AActor* InvokingActor, struct UPrimitiveComponent* OverlappedComponent, struct FHitResult& SweepResult, struct UTraitBehaviour* InstigatingBehaviour); // (Event|Public|HasOutParms|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void OnMontageComplete(struct UAnimMontage* Montage, bool bInterrupted); // (BlueprintCallable|BlueprintEvent)
	void ActionTimeout(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void DoSwing(enum class EActionableEventType ActionType); // (BlueprintCallable|BlueprintEvent)
	void OnActionInsufficientStamina(enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void StopRepeating(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Generic_Melee(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

