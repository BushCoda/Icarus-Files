// BlueprintGeneratedClass BP_BallisticFunctionLibrary.BP_BallisticFunctionLibrary_C
struct UBP_BallisticFunctionLibrary_C : UBlueprintFunctionLibrary {

	void GetClosestBoneAlongProjectilePrediction(struct FPredictProjectilePathResult InPredictionData, struct AActor* InActor, struct UObject* __WorldContext, struct FName& HitBone, struct UPrimitiveComponent*& HitComponent); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PredictProjectileDamage(struct AActor* Weapon, struct AActor* Defender, struct FHitResult ProjectileHit, bool Killcam, struct UObject* __WorldContext, float& OutDamage); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CreateCriticalHitResult(struct FHitResult InPredictedHit, struct FName CriticalHitBone, struct UObject* __WorldContext, struct FHitResult& OutCriticalHit); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct UBallisticPoolManager* GetBallisticPoolManager(struct UObject* __WorldContext); // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
};

