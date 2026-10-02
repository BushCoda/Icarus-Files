// BlueprintGeneratedClass BP_ActionableBehaviour_Chainsaw.BP_ActionableBehaviour_Chainsaw_C
struct UBP_ActionableBehaviour_Chainsaw_C : UBP_ActionableBehaviour_Base_C {
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
	struct FTimerHandle ChainsawHitTimer; 
	struct FTimerHandle ScreenshakeTimer; 
	struct FFirearmData FirearmData; 
	struct AIcarusActor* OwningActor; 
	bool IsLegendaryChainsaw; 

	void Play Out Of Ammo FX(bool OutOfFuel); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetupFirearmData(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetStatAdjustedDamageTimerFreq(float& TickTime); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool CheckEnoughFuel(int32_t& FuelUsed); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
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
	void OnActionHitEvent(struct AActor* Invoking Actor, struct UPrimitiveComponent* OverlappedComponent , struct FHitResult& SweepResult); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetSweepingEnabled(bool Enabled); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup(struct AActor* OwningActor); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_2B8B2B624CE5F97DAE6892B743964BB5(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnTraitAnimNotify(struct FAnimNotifyEvent& Notify, struct AActor* AnimInstancePawn); // (Event|Public|HasOutParms|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void OnMontageComplete(struct UAnimMontage* Montage, bool bInterrupted); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void OnActionInsufficientStamina(enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void DoAttack(); // (BlueprintCallable|BlueprintEvent)
	void OnActionHit(struct AActor* InvokingActor, struct UPrimitiveComponent* OverlappedComponent, struct FHitResult& SweepResult, struct UTraitBehaviour* InstigatingBehaviour); // (Event|Public|HasOutParms|BlueprintEvent)
	void StopChainsaw(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void OnActionAborted(enum class EActionableEventType EventType); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void FireCamShake(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Chainsaw(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

