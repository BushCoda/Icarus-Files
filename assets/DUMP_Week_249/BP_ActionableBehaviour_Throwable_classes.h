// BlueprintGeneratedClass BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C
struct UBP_ActionableBehaviour_Throwable_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool IsFiring; 
	float LastFireDrawPower; 
	struct AIcarusPlayerCharacter* OwningPlayer; 
	struct FRangedWeaponData RangedWeaponData; 
	float DrawPower; 
	float ThrowOffset; 
	struct AIcarusItem* IcarusItemRef; 
	bool IsDrawing; 
	struct AIcarusItem* ThrownItem; 
	struct TArray<struct UObject*> StoredAnimMontages; 
	float CachedDrawPower; 
	bool ReadyToThrow; 
	struct FName ThrowAnimSection; 
	struct FName IdleAnimSection; 
	struct UPostProcessComponent* ActionablePostProcess; 
	float FullDrawPowerTimeStamp; 
	struct UCameraComponent* FPCamera; 
	bool Thrown; 
	enum class EActionableEventType ThrowEventType; 
	int32_t HoldModifierUID; 
	bool HasPressedButtonDown; 

	void WantsBowMode(bool& bWantsBowMode); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void WantsShowCrosshair(bool& bShowCrosshair); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetCrosshairAimAlpha(float& AimAlpha); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UnhideActor(); // (Public|BlueprintCallable|BlueprintEvent)
	void PrepareProjectile(struct FItemData UnPrepared, struct FItemData& Prepared); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void RemoveAimingStat(); // (Public|BlueprintCallable|BlueprintEvent)
	void AddAimingStat(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	int32_t GetStat(struct FStatsEnum Stat); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void RemoveHoldModifier(); // (Public|BlueprintCallable|BlueprintEvent)
	void AddHoldModifier(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool BP_ShouldApplyEndStaminaCost(enum class EActionableEventType EventType); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void StopAimAnim(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool HasIdleAnim(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void HasThrowAnim(bool& HasThrowAnim); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdatePostProcessAndShake(); // (Public|BlueprintCallable|BlueprintEvent)
	void IsCharging(bool& Charging); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void RequestThrow(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetFiring(bool IsFiring); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetCurrentDrawPercentage(float& Percentage); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CanThrow(bool& CanThrow); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void DoThrow(struct FTransform SpawnTransform, float Power); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup(struct AActor* OwningActor); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_2B8B2B624CE5F97DAE6892B75088DB11(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void OnActionAborted(enum class EActionableEventType EventType); // (Event|Public|BlueprintEvent)
	void Server_RequestThrow(struct FTransform SpawnTransform, float Power); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Multicast_PostThrow(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void OnTraitAnimNotify(struct FAnimNotifyEvent& Notify, struct AActor* AnimInstancePawn); // (Event|Public|HasOutParms|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Throwable(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

