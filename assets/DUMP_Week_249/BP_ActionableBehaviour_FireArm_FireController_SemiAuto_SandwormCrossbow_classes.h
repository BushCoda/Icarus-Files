// BlueprintGeneratedClass BP_ActionableBehaviour_FireArm_FireController_SemiAuto_SandwormCrossbow.BP_ActionableBehaviour_FireArm_FireController_SemiAuto_SandwormCrossbow_C
struct UBP_ActionableBehaviour_FireArm_FireController_SemiAuto_SandwormCrossbow_C : UBP_ActionableBehaviour_FireArm_FireController_SemiAuto_C {

	void OnQueryFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnProjectileLanded(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SpawnProjectile(struct FProjectileFireParams ProjectileParams); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
};

