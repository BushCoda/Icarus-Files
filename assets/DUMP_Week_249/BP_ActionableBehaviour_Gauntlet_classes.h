// BlueprintGeneratedClass BP_ActionableBehaviour_Gauntlet.BP_ActionableBehaviour_Gauntlet_C
struct UBP_ActionableBehaviour_Gauntlet_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCapsuleComponent* HitCollider; 
	struct AIcarusPlayerCharacter* OwningPlayer; 
	bool ActionCooldownActive; 
	bool IsHitReacting; 
	bool DebugDraw; 
	struct FVector LastColliderLocation; 
	struct FToolDamage ToolDamage; 
	bool ShouldSweepCollision; 
	enum class ETraceTypeQuery CollisionTraceChannel; 
	bool ShouldReverseAnimOnHit; 
	float ScreenshakeScale; 
	bool DebugForceOwnership; 
	float HitTraceDistance; 
	struct TArray<struct UObject*> StoredMontages; 
	bool IsChargingHit; 
	float ChargePower; 
	float ChargeTimeInSeconds; 
	struct AActor* Invoker; 
	struct UPostProcessComponent* ActionablePostProcess; 
	struct UMatineeCameraShake* CameraShake; 
	float MinChargePower; 
	bool CanHit; 
	struct FString AnimNotifyName; 

	void Select Random Weighted Montage(struct UAnimMontage* AnimMontage, struct TArray<struct FName>& SectionNames, struct FName& ChosenSection); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PlayChargedHitEffects(struct FHitResult& Hit, bool DidHit); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ApplyChargeStats(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CleanupActionable(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdatePostProcessAndShake(); // (Public|BlueprintCallable|BlueprintEvent)
	void TickCharging(float DeltaSeconds); // (Public|BlueprintCallable|BlueprintEvent)
	void IsCharging(bool& Charging); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	enum class EViewTraceResultPriority GetHitResultPriorityLow(struct FViewTraceResult& Result); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void CheckRepairIfBreak(struct AIcarusItem* ItemInstance, int32_t DurabilityLossFromHit, bool& AutoRepaired); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PlayMeleeSwing(struct AIcarusPlayerCharacter* TargetPlayer); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	int32_t GetStatAdjustedDurability(int32_t DurabilityLoss); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	enum class EViewTraceResultPriority GetHitResultPriority(struct FViewTraceResult& Result); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetHitFromViewTraces(struct FHitResult& OutHit); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayHitSound(bool HitSuccessful, struct FVector HitLocation, enum class EPhysicalSurface SurfaceHit, struct FHitResult& SweepResult); // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayScreenshake(float Scale, bool Hit); // (Public|BlueprintCallable|BlueprintEvent)
	struct USkeletalMeshComponent* GetAnimatingMesh(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void HitCollision(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InvokeHit(struct FHitResult Hit); // (Public|BlueprintCallable|BlueprintEvent)
	void OnActionHitEvent(struct AActor* Invoking Actor, struct UPrimitiveComponent* OverlappedComponent , struct FHitResult& SweepResult, struct UTraitBehaviour* TraitBehaviour); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup(struct AActor* OwningActor); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_2B8B2B624CE5F97DAE6892B7FC26C19E(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnTraitAnimNotify(struct FAnimNotifyEvent& Notify, struct AActor* AnimInstancePawn); // (Event|Public|HasOutParms|BlueprintEvent)
	void OnActionHit(struct AActor* InvokingActor, struct UPrimitiveComponent* OverlappedComponent, struct FHitResult& SweepResult, struct UTraitBehaviour* InstigatingBehaviour); // (Event|Public|HasOutParms|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void OnMontageComplete(struct UAnimMontage* Montage, bool bInterrupted); // (BlueprintCallable|BlueprintEvent)
	void ActionTimeout(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void DoSwing(enum class EActionableEventType ActionType); // (BlueprintCallable|BlueprintEvent)
	void OnActionInsufficientStamina(enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void StopRepeating(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void Server_SetCanHit(bool CanHit); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Gauntlet(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

