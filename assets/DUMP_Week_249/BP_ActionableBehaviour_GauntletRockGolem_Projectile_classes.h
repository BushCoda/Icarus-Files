// BlueprintGeneratedClass BP_ActionableBehaviour_GauntletRockGolem_Projectile.BP_ActionableBehaviour_GauntletRockGolem_Projectile_C
struct UBP_ActionableBehaviour_GauntletRockGolem_Projectile_C : UBP_ActionableBehaviour_Base_C {
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
	struct FName ChargeEndMontageSection; 

	bool ShouldConsumeActionInput(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Fire Projectile(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CanHeavyAttack(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void SetIsCharging(bool IsChargingHit); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
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
	struct USkeletalMeshComponent* GetAnimatingMesh(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Setup(struct AActor* OwningActor); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_2B8B2B624CE5F97DAE6892B72499BF3E(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void OnActionInsufficientStamina(enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_GauntletRockGolem_Projectile(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

