// BlueprintGeneratedClass BTTask_PerformAction_SpitAttack.BTTask_PerformAction_SpitAttack_C
struct UBTTask_PerformAction_SpitAttack_C : UBTTask_PerformAction_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FName CurrentTargetKeyName; 
	float ProjectileSpeed; 
	int32_t SpitballCount; 
	float SpitballInaccuracy; 
	struct FItemsStaticRowHandle SpitballItemData; 
	struct FName ProjectileSpawnLocationOverride; 
	bool AdjustForTargetVelocity; 
	struct FVector2D AdvancedSpitballInaccuracy; 
	bool FavourHighArc; 
	struct FVector ManualLaunchImpulse; 
	float DelayBetweenProjectileSpawns; 
	bool IsFiringProjectiles; 
	bool UseSocketForLaunchVector; 
	float OverrideLaunchForce; 
	struct FVector OverrideSpawnLocation; 
	int32_t ProjSpawnedPerDelay; 
	int32_t RemainingProjSpawns; 
	bool ProperlyAccountForProjectileWeight; 
	struct UBallisticComponent* Ballistic; 
	struct FTransform SpawnTransform; 
	bool ReportAINoiseEvent; 
	float NoiseEventLoudness; 
	bool UseDistanceBasedAccuracy; 
	float MinDistance; 
	float MinDistanceAccuracy; 
	float MaxDistance; 
	float MaxDistanceAccuracy; 
	bool IgnoreProjectileVelocitySuggestion; 
	struct FName NoiseEventTag; 
	bool UseStatBasedAccuracy; 
	struct TArray<struct FBlackboardKeySelector> BlackboardActorsToIgnore; 

	void AddIgnoreActors(struct UBallisticComponent* FiredBallistic); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnProjectileFired(struct FTransform SpawnTransform); // (Public|BlueprintCallable|BlueprintEvent)
	void GetProjectileSourceLocationAndRotation(struct FVector& OutDamageSource, struct FRotator& OutCustomLaunchRotation); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnProjectileHit(struct FHitResult Hit); // (Public|BlueprintCallable|BlueprintEvent)
	void CanSuccessfullyFinishExecute(bool& CanFinish); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FVector ApplyRandomOffsetToLaunchImpulse(struct FVector& LaunchImpulse); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FVector Get Projectile Target Location(struct FVector ProjectileSpawnLocation, float LaunchSpeed); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetSpitballScale(struct FVector& OutScale); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void DoAction(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void StartSpawningProjectiles(struct FItemData& ItemData, struct FVector Location, struct FVector& LaunchImpulse); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BTTask_PerformAction_SpitAttack(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

