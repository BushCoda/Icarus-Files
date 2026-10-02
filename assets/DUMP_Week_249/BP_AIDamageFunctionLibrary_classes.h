// BlueprintGeneratedClass BP_AIDamageFunctionLibrary.BP_AIDamageFunctionLibrary_C
struct UBP_AIDamageFunctionLibrary_C : UBlueprintFunctionLibrary {

	void TryRestoreHealthAfterKillingBlow(struct APawn* SelfAITargetable, struct AActor* Target, struct UObject* __WorldContext); // (Static|Public|BlueprintCallable|BlueprintEvent)
	void CanActorBeKnockedBack(struct AActor* Target, struct UObject* __WorldContext, bool& CanBeKnockedBack); // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CalcLaunchAmount(struct FVector Dir, struct AActor* SelfNPC, struct AActor* TargetActor, struct UObject* __WorldContext, struct FVector& OutForce); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayAttackHitEffects(struct AIcarusCharacter* SelfNPC, struct AActor* HitActor, struct UObject* __WorldContext, struct FHitResult& OutHit); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void LaunchAttackTarget(struct AActor* SelfNPC, struct AActor* TargetActor, bool IncludeSelf, struct FVector OverrideLaunchDirection, struct UObject* __WorldContext); // (Static|Public|BlueprintCallable|BlueprintEvent)
	void NPC_DealDamage(struct AIcarusCharacter* CauserNPC, struct AActor* TargetActor, bool LaunchSelf, bool IgnoreRangeCheck, struct FVector OverrideLaunchDirection, struct UObject* __WorldContext); // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
};

