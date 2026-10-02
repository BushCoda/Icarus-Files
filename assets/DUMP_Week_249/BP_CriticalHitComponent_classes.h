// BlueprintGeneratedClass BP_CriticalHitComponent.BP_CriticalHitComponent_C
struct UBP_CriticalHitComponent_C : UIcarusCriticalHitComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FTimerHandle ResetTimer; 
	enum class ECriticalHitStage CurrentStage; 
	bool HomingMissile; 
	bool CHRotationLocked; 
	struct FVector CachedTargetLocation; 
	float CHTargetRotation; 
	struct FCriticalHitSetup CurrentCriticalHitConfig; 
	struct UMatineeCameraShake* ProjectileShake; 
	bool ProjStopped; 
	float DebugLength; 
	float LuckyBuffer; 
	bool Debug; 
	bool IgnoreDamage; 
	float TargetTimestamp; 
	float TransitionSpeed; 
	float ProjectileBaseDamage; 
	struct AActor* Projectile; 
	struct FRotator FacingTargetRotation; 
	bool ProjMissed; 
	bool CanUseKillCamAudio; 
	bool KillCamAudioApplied; 
	struct UFMODEvent* KillCamAudioEvent; 
	struct FFMODEventInstance KillCamAudioEventInstance; 
	struct FVector TrackingTargetLocation; 
	struct FRotator CachedProjectileRotation; 
	struct FVector CachedProjectileLocation; 
	float TargetFOV; 
	float LastProjectileDistance; 
	struct AActor* CriticalHitData_Projectile; 
	struct AActor* CriticalHitData_Target; 
	bool KillCamRunning; 
	bool KillcamEnabled; 

	void UpdateCamera(struct FVector InLocation, struct FRotator InRotation, float InFOV, bool ForceUpdate, struct FVector& OutLocation, struct FRotator& OutRotation, float& OutFOV, bool& Return); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool GetIgnoreDamage(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool GetDebug(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	float GetLuckyBuffer(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void OnRep_KillcamEnabled(); // (BlueprintCallable|BlueprintEvent)
	void UpdateCriticalHitData(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_CriticalHitData_Target(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_CriticalHitData_Projectile(); // (BlueprintCallable|BlueprintEvent)
	bool ProjectileToTargetCheck(bool& Force); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateTargetFOV(bool Zoom, float ZoomSpeed); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateTargetRotation(bool Rotate, float RotateSpeed); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateTrackingLocation(struct FVector InLocation, float SmoothingSpeed); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateFacingRotation(struct FVector Start, struct FVector End, float SmoothingSpeed); // (Public|BlueprintCallable|BlueprintEvent)
	struct FVector GetCriticalLocationOnTarget(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct FVector GetTargetCentreLocation(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateAudio(); // (Private|BlueprintCallable|BlueprintEvent)
	void ResetVariables(); // (Public|BlueprintCallable|BlueprintEvent)
	void ProjectileStopped(struct AActor* Projectile, struct AActor* HitActor); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CancelCriticalHit(); // (Public|BlueprintCallable|BlueprintEvent)
	void SwitchToTarget(bool ServerTriggered); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetTimeScale(); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckCameraShake(); // (Public|BlueprintCallable|BlueprintEvent)
	void CriticalHitSpringArm(float SpringArmYaw, struct FVector TargetLocation, struct FVector PivotOffset, struct FVector CameraOffset, struct FRotator CameraRotationOffset, struct FVector& Location, struct FRotator& Rotation); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CalculateTargetCamera(struct FCriticalHitSetup Config, struct FVector Location, struct FRotator Rotation, struct FVector& OutLocation, struct FRotator& OutRotation, float& OutFOV); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void CalculateProjectileCamera(struct FCriticalHitSetup Config, struct AActor* Projectile, struct FVector& OutLocation, struct FRotator& OutRotation, float& OutFOV); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CalculatePlayerCamera(struct FCriticalHitSetup Config, struct AActor* Player, struct FVector& OutLocation, struct FRotator& OutRotation, float& OutFOV); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetTimeScale(float& TimeScale); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CriticalHitActive(bool& Active); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ProcessCriticalHit(struct FPredictProjectilePathParams ProjectilePrediction, struct AActor* Projectile, bool& CriticalHit, struct AActor*& Target); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SwitchToProjectile(); // (Public|BlueprintCallable|BlueprintEvent)
	void SwitchToPlayer(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_CriticalHitData(); // (BlueprintCallable|BlueprintEvent)
	void GetProjectile(struct AActor*& Projectile); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetTarget(struct AActor*& Target); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SERVER_CancelCriticalHit(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void CLIENT_SwitchStage(enum class ECriticalHitStage Stage); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void OnKillcamEnabledApplied(bool Value); // (BlueprintCallable|BlueprintEvent)
	void SERVER_SetKillcamEnabled(bool Enabled); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void SetupKillcamSetting(); // (BlueprintCallable|BlueprintEvent)
	void BP_SetIgnoreDamage(bool bIgnore); // (Event|Public|BlueprintEvent)
	void BP_SetLuckyBuffer(float NewLuckyBuffer); // (Event|Public|BlueprintEvent)
	void BP_SetDebug(bool bDebug); // (Event|Public|BlueprintEvent)
	void SetCriticalHitConfig(struct FName& Name); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_CriticalHitComponent(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

