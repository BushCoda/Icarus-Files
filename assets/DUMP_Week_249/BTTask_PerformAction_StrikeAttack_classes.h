// BlueprintGeneratedClass BTTask_PerformAction_StrikeAttack.BTTask_PerformAction_StrikeAttack_C
struct UBTTask_PerformAction_StrikeAttack_C : UBTTask_PerformAction_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TMap<struct AActor*, float> HitActors; 
	bool MustHitWhitelistBones; 
	struct TArray<struct FCriticalHitLocation> WhitelistBones; 
	struct FName RequiredAnimCurve; 
	struct FName RequiredBlackboardBool; 
	bool IncludedDamageSourceCollision; 
	struct TArray<enum class EObjectTypeQuery> DamageSourceCollisionObjectTypes; 
	bool IsPerfomingDamageSourceAttack; 
	float CustomLaunchForce; 
	bool AutoCalculateLaunchForce; 
	float SecondaryHitCooldown; 
	struct APawn* ControlledPawn; 
	float UpwardsLaunchAngle; 
	bool AreHitsRelevant; 
	struct FName DamageSourceLocationOverride; 
	bool IgnoreFriendlyFire; 
	float LaunchRadiusMultiplier; 
	bool OriginalDoOverlaps; 
	bool AutoEnableOverlapsOnMesh; 
	bool UnbindEventsOnHit; 

	void RemoveStaleHitActors(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void WasValidHit(struct FHitResult& Hit, bool& WasValid); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct USkeletalMeshComponent* GetRelevantSkeletalMeshComponent(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnAnimatingMeshHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnAnimatingMeshOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DamageHitTarget(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DoAction(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveAbort(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void OnMontageComplete(); // (BlueprintCallable|BlueprintEvent)
	void OnMontageInterrupted(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BTTask_PerformAction_StrikeAttack(int32_t EntryPoint); // (Final|UbergraphFunction)
};

