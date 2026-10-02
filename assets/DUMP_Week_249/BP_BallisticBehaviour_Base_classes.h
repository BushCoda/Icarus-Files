// BlueprintGeneratedClass BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C
struct UBP_BallisticBehaviour_Base_C : UBallisticComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBallisticComponent* BallisticComponent; 
	struct FBallisticData BallisticData; 
	bool Killcam; 
	struct UObject* PayloadClass; 
	bool OnBreak; 
	bool DeployPayloadOnLoad; 
	struct FHitResult PreviousHitResult; 
	struct UFMODAudioComponent* FlightSound; 
	struct UFXSystemComponent* TrailParticle; 
	bool DebugBallistic; 
	struct UPhysicsAsset* InitialPhysicsAsset; 
	bool HasProjectileSettled; 
	bool HasValidHit; 
	struct USkeletalMesh* InitialSkeletalMesh; 
	struct FProjectileFireParams AdvancedParams; 
	struct FVector Bounds; 
	struct FBallisticAudioData AudioData; 
	struct AActor* TargetActor; 
	struct FMulticastInlineDelegate PayloadClassLoaded; 
	bool ProjectileFrozen; 
	struct FTimerHandle PostPayloadDestroyTimer; 
	struct FVector LaunchImpulse; 
	struct FTimerHandle TryStopFlightSoundTimerHandle; 
	struct USceneComponent* ReplicatedHomingComponent; 
	struct FName ReplicatedHomingBone; 
	struct UStaticMesh* InitialStaticMesh; 
	struct TArray<struct UObject*> AsyncLoadedObjects; 
	struct FVector SpawnLocation; 
	struct AActor* PredictedKillCamTarget; 
	bool HasRicocheted; 
	int32_t NumBounces; 
	int32_t MAX_BOUNCES; 
	struct FMulticastInlineDelegate PrePayloadDeploy; 
	struct FVector MaxHeightAtApex; 
	struct AIcarusPlayerCharacter* FiringPlayer; 
	bool FirePiercedProjectile; 
	struct FVector CachedImpulse; 
	struct FProjectileFireParams CachedFireParams; 
	bool ResetIgnoredActors; 
	enum class EPayloadDeploymentType BallisticPayloadDeploymentType; 
	struct FItemData WeaponItemData; 

	void CacheWeaponItemData(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetStat(struct FStatsEnum InputPin, struct AIcarusCharacter* Player, int32_t& Value); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IgnorePlayerCollision(); // (Public|BlueprintCallable|BlueprintEvent)
	void ShouldPierce(struct FHitResult ProjectileHit, bool& Valid); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void DelayFirePiercedProjectile(); // (Public|BlueprintCallable|BlueprintEvent)
	void PierceObject(struct AActor* HitActor, struct FHitResult HitResult, bool ValidHit); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ConditionalConsumeZapEnergy(struct FHitResult HitResult); // (Public|BlueprintCallable|BlueprintEvent)
	void GetDebugState(); // (Public|BlueprintCallable|BlueprintEvent)
	void ClearIgnoreActors(); // (Public|BlueprintCallable|BlueprintEvent)
	void AddIgnoreActor(struct AActor* Actor); // (Public|BlueprintCallable|BlueprintEvent)
	void GetMaxBounces(int32_t& MaxNumBounces); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ApplyDamage(struct AActor* HitActor, struct FHitResult& HitInfo); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ShouldRicochet(struct FHitResult ProjectileHit, bool& ShouldRicochet, bool& ShouldDealRicochetDamage); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetupParticleComponent(struct UFXSystemAsset* FXSystemAsset); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayHitAudio(struct FVector ImpactPoint, enum class EPhysicalSurface Surface, bool ValidHit, struct FHitResult& Hit); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetBallisticRowHandle(struct FBallisticRowHandle& RowHandle); // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void DebugTrajectory(float DeltaSeconds); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DisableCosmetics(); // (Public|BlueprintCallable|BlueprintEvent)
	void StopFlightSound(); // (Private|BlueprintCallable|BlueprintEvent)
	void PlayFlightSound(); // (Private|BlueprintCallable|BlueprintEvent)
	void UpdateTrailLocation(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct UBP_CriticalHitComponent_C* GetCriticalHitComponent(bool& Success); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	enum class ECollisionChannel GetTraceChannel(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	float GetHomingMagnitude(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool CanKillcam(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool CanAimAssist(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ApplyKillCam(struct AActor* InActor); // (Public|BlueprintCallable|BlueprintEvent)
	void ApplyAimAssist(struct AActor* InActor, struct FName TargetBone, struct USceneComponent* TargetComponent); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CheckKillCamOnTarget(struct AActor* HitActor, struct FName CriticalHitBone, struct FPredictProjectilePathResult InPredictedHit); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CheckKillCam(struct AActor*& Target, struct FName& HitBone, struct UPrimitiveComponent*& HitComponent); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CheckAimAssist(struct AActor*& HitActor, struct FName& HitBone, struct USceneComponent*& HitComponent, struct FPredictProjectilePathResult& PredictResults); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheckSpecialMovement(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void LogCurrentHomingTarget(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnAttachParentUpdated(struct AActor* NewParent); // (Public|BlueprintCallable|BlueprintEvent)
	void DamageBlackListTagsCheck(struct AActor* Actor, bool& Blacklisted); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CleanupBallistic(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void DestroyBallisticItem(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_ProjectileFrozen(); // (BlueprintCallable|BlueprintEvent)
	void OnProjectileFrozen(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetProjectileDamage(struct FHitResult HitInfo); // (Public|BlueprintCallable|BlueprintEvent)
	void Check Stealth Attack(); // (Public|BlueprintCallable|BlueprintEvent)
	void PlayHitEffects(struct FHitResult Hit, bool ValidHit); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnPayloadDeploy(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnHitActorEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (Public|BlueprintCallable|BlueprintEvent)
	void SpawnPayload(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_OnBreak(); // (BlueprintCallable|BlueprintEvent)
	void DoProjectileHit(struct FHitResult HitResult); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_BC74464F40A013B4C602FDBDB44FD47D(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_65DBCD26461857A86035D28F5CD97DF7(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_2B8B2B624CE5F97DAE6892B7B9A50C8A(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void OnProjectileFired(struct FVector Impulse, struct FVector InstigatorVelocity, struct FProjectileFireParams AdvancedParameters); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void OnProjectileActivated(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnProjectileDeactivated(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void Multi_PlayHitFX(struct FHitResult Hit, bool ValidHit); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void TryStopFlightSound(); // (BlueprintCallable|BlueprintEvent)
	void CheckStopFlightSoundValid(); // (BlueprintCallable|BlueprintEvent)
	void BlockLoadAndDeployPayload(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_BallisticBehaviour_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void PrePayloadDeploy__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void PayloadClassLoaded__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

