// BlueprintGeneratedClass BTTask_Basic_JumpTo_Attack.BTTask_Basic_JumpTo_Attack_C
struct UBTTask_Basic_JumpTo_Attack_C : UBTTask_Basic_JumpTo_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FName AttackMontageName; 
	struct FName DamageSourceLocationOverride; 
	struct FVector SourceLocation; 
	struct TArray<struct AActor*> TempIgnoreActors; 
	float LaunchRadiusMultiplier; 
	struct TArray<enum class EObjectTypeQuery> DamageSourceCollisionObjectTypes; 
	struct TMap<struct AActor*, float> HitActors; 
	bool IgnoreFriendlyFire; 
	bool DidHit; 
	bool AutoCalculateLaunchForce; 
	float CustomLaunchForce; 
	float UpwardsLaunchAngle; 
	float CustomAttackRadius; 

	void DamageHitTarget(struct AActor* HitActor, struct FHitResult Hit); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void StartJump(); // (BlueprintCallable|BlueprintEvent)
	void OnMontageNotify(struct FName NotifyName, struct USkeletalMeshComponent* Component, struct UAnimSequenceBase* Anim); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BTTask_Basic_JumpTo_Attack(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

