// BlueprintGeneratedClass BP_ActionableBehaviour_FireArm_FireController_FillableAmmo_LaserPistol.BP_ActionableBehaviour_FireArm_FireController_FillableAmmo_LaserPistol_C
struct UBP_ActionableBehaviour_FireArm_FireController_FillableAmmo_LaserPistol_C : UBP_ActionableBehaviour_FireArm_FireController_FillableAmmo_C {

	void GetCurrentAmmoInfo(struct TSoftObjectPtr<UTexture2D>& AmmoIcon, struct FText& CurrentAmmo, struct FText& TotalAmmo, struct FText& AmmoTextOverride, bool& HideReload, bool& IsFluid, struct FIcarusResourcesRowHandle& Resource, float& Percent); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ProcessResource(); // (Public|BlueprintCallable|BlueprintEvent)
	enum class CanFireReturnType CanFire(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	float GetLaunchForce(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
};

