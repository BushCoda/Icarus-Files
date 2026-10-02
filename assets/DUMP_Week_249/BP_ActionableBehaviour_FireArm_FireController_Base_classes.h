// BlueprintGeneratedClass BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C
struct UBP_ActionableBehaviour_FireArm_FireController_Base_C : UBP_ActionableBehaviour_Firearm_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool WantsFire; 
	bool IsFiring; 
	struct FMulticastInlineDelegate OnWeaponFired; 
	float LastFireTime; 
	struct FTimerHandle RefireTimer; 
	struct TArray<struct UObject*> LoadedAssets; 
	bool AssetsLoaded; 
	struct TMap<struct UFMODAudioComponent*, struct FFirearmSoundData> PersistentAudioComponents; 
	struct UFXSystemComponent* MuzzleFlashComp; 
	bool LoadingMuzzleFlash; 
	int32_t ChanceToNotConsumeAmmoSeed; 
	struct FRandomStream ChanceToNotConsumeAmmoStream; 
	bool FireAnimPlaying; 
	bool FirePressed; 
	struct FName FireAnimationCallbackId; 
	struct FTimerHandle FireAnimPlayingTimer; 
	struct FMulticastInlineDelegate OnShotRollback; 
	int32_t HoldModifierUID; 
	struct FMulticastInlineDelegate OnProjectileSpawned; 
	bool PlayFireAnimationBeforeProjectile; 
	struct FString NotifyEvent; 

	void OnFireAdjustRotation(struct FTransform InTransform, struct FRotator& NewRotation, bool& Override); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OverrideForceMatch(bool& Override); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FTransform GetFirePositionOverride(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool IsPlayingFirstPersonFireMontage(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void PlayPreFireAnimation(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetTargetPosition(float Distance, struct FVector& HitLocation, struct FVector& CrosshairEndPoint); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsCloseToWall(float DistanceToCheck, bool& CloseToWall, struct FHitResult& OutHit); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheckIfWeaponIsObstructed(struct FVector WeaponBarrelPosition, float CheckDistance, bool& IsObstructed, struct FHitResult& ObstructingHitResult); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetWeaponFireTransform(struct FName FallbackFireSocketName, bool& Valid, struct FTransform& FireTransform); // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FRotator ApplySpread(struct FRotator BaseAim, float CurrentShakeScale); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void RemoveHoldModifier(); // (Public|BlueprintCallable|BlueprintEvent)
	void AddHoldModifier(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void HandleRep_WantsFire(); // (Protected|BlueprintCallable|BlueprintEvent)
	void OnRep_ChanceToNotConsumeAmmoSeed(); // (BlueprintCallable|BlueprintEvent)
	void Setup(struct AIcarusActor* ForOwner); // (Public|BlueprintCallable|BlueprintEvent)
	void PlayFPWeaponAnimInstanceFire(); // (Public|BlueprintCallable|BlueprintEvent)
	void AIStimulus(); // (Public|BlueprintCallable|BlueprintEvent)
	float GetLaunchForce(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FTransform ApplyProjectileSpread(struct FTransform& InTransform, struct FVector2D InVec); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CalcAmmoToConsume(int32_t& AmmoToConsume); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void IsReloading(bool& IsReloading); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetCurrentAmmo(int32_t& CurrentAmmoCount); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IsAiming(bool& IsAiming); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PlayFiringCameraShake(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetProjectileSpawnTransform(float CameraShakeScale, struct FBallisticData BallisticData, struct FTransform& NewProjectileTransform); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetFirePositionAndRotation(struct FBallisticData BallisticData, struct FVector& FirePosition, struct FRotator& FireRotation); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayNoFireAudio(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayFireAudio(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateAudioPerspective(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void StopPersistentAudio(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void StartPersistentAudio(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SpawnProjectile(struct FProjectileFireParams ProjectileParams); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DoFire(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_WantsFire(); // (BlueprintCallable|BlueprintEvent)
	void ConvertRoundsPerMinuteToFireRate(int32_t RoundsPerMinute, float& FireRate); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetRefireRate(float& RefireRate); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetFireRate(float& FireRate); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	enum class CanFireReturnType CanFire(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void FinishFiring(); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckRefire(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void EndFire(); // (Public|BlueprintCallable|BlueprintEvent)
	void BeginFire(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnLoaded_2B8B2B624CE5F97DAE6892B79E7605F8(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_6AEAFDFE4BB14A1620E931B275F3002A(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void MC_PlayFireAnimation(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void Local_PlayFireAnimation(); // (BlueprintCallable|BlueprintEvent)
	void PlayFireAnimation(); // (BlueprintCallable|BlueprintEvent)
	void PlayFireFailed(); // (BlueprintCallable|BlueprintEvent)
	void PreloadAssets(); // (BlueprintCallable|BlueprintEvent)
	void PlayMuzzleFlash(); // (BlueprintCallable|BlueprintEvent)
	void PlayFireAnims(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void Server_BeginFire(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Server_EndFire(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void LateSetup(); // (BlueprintCallable|BlueprintEvent)
	void NotifyReloadEnd(); // (BlueprintCallable|BlueprintEvent)
	void OnFirstPersonAnimationStart(struct FName AnimationId); // (BlueprintCallable|BlueprintEvent)
	void OnFirstPersonAnimationEnd(struct FName AnimationId); // (BlueprintCallable|BlueprintEvent)
	void OnActionInsufficientDurability(enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ClearFireAnimPlaying(); // (BlueprintCallable|BlueprintEvent)
	void Client_RejectShot(); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void SprintToBeginFire(); // (BlueprintCallable|BlueprintEvent)
	void FinishSprintToFireDelay(); // (BlueprintCallable|BlueprintEvent)
	void RetryPostReloadFire(); // (BlueprintCallable|BlueprintEvent)
	void PlayFireFX(); // (BlueprintCallable|BlueprintEvent)
	void MC_PlayFireFX(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void Local_PlayFireFX(); // (BlueprintCallable|BlueprintEvent)
	void OnTraitAnimNotify(struct FAnimNotifyEvent& Notify, struct AActor* AnimInstancePawn); // (Event|Public|HasOutParms|BlueprintEvent)
	void DelayProjectileVisiblity(struct AIcarusItem* Projectile, float DelayTime); // (Net|NetServer|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_FireArm_FireController_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnProjectileSpawned__DelegateSignature(struct AIcarusItem* Projectile); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnShotRollback__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnWeaponFired__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

