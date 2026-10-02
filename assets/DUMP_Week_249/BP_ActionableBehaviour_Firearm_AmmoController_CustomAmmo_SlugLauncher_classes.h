// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_AmmoController_CustomAmmo_SlugLauncher.BP_ActionableBehaviour_Firearm_AmmoController_CustomAmmo_SlugLauncher_C
struct UBP_ActionableBehaviour_Firearm_AmmoController_CustomAmmo_SlugLauncher_C : UBP_ActionableBehaviour_Firearm_AmmoController_CustomAmmo_C {

	void CanReload(bool& CanReload); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ConsumeAmmo(int32_t Amount); // (Public|BlueprintCallable|BlueprintEvent)
	float GetReloadAnimPlayRate(struct UAnimMontage* Montage); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	float GetReloadTimeMultiplier(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CheckAmmo(bool bInitial); // (Public|BlueprintCallable|BlueprintEvent)
	void HasAmmo(bool& HasAmmo); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetFiredProjectileInfo(bool& HasBallisticData, struct FBallisticData& BallisticData, int32_t& ProjectileCount, struct FVector2D& ProjectileAccuracy); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

