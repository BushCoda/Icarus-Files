// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C
struct UBP_ActionableBehaviour_Firearm_AimController_Base_C : UBP_ActionableBehaviour_Firearm_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float AimAlpha; 
	bool UseExtraVignetteStrength; 
	bool AllowAimWhileReloading; 
	bool AimPressed; 
	bool IsScopeShown; 

	void WantsBowMode(bool& bWantsBowMode); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void WantsShowCrosshair(bool& bShowCrosshair); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetCrosshairAimAlpha(float& AimAlpha); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void CheckForScopeAlteration(struct AIcarusPlayerCharacter* PlayerCharacter, struct FFirearmScopeDataRowHandle& NewScopeRow); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateCosmetics(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetExtraVignetteStrengthEnabled(bool Enabled); // (Public|BlueprintCallable|BlueprintEvent)
	void TickCameraEffects(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateAim(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	float GetADSTimeMultiplier(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CanAim(bool& CanAim); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ToggleAim(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetAim(bool NewAim); // (Public|BlueprintCallable|BlueprintEvent)
	void IsAiming(bool& IsAiming); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IsToggleAim(bool& IsToggleAim); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void LateSetup(); // (BlueprintCallable|BlueprintEvent)
	void NotifyReloadStart(); // (BlueprintCallable|BlueprintEvent)
	void NotifyReloadEnd(); // (BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void SprintToAim(); // (BlueprintCallable|BlueprintEvent)
	void FinishSprintToAimDelay(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AimController_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

