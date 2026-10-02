// BlueprintGeneratedClass BTTask_PerformAction_FireNPCWeapon.BTTask_PerformAction_FireNPCWeapon_C
struct UBTTask_PerformAction_FireNPCWeapon_C : UBTTask_PerformAction_SpitAttack_C {

	void GetProjectileSourceLocationAndRotation(struct FVector& OutDamageSource, struct FRotator& OutCustomLaunchRotation); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnProjectileFired(struct FTransform SpawnTransform); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DoAction(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
};

