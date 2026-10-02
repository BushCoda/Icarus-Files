// BlueprintGeneratedClass BP_ActionableBehaviour_FireArm_FireController_FillableAmmo_LavaHunterFlamethrower.BP_ActionableBehaviour_FireArm_FireController_FillableAmmo_LavaHunterFlamethrower_C
struct UBP_ActionableBehaviour_FireArm_FireController_FillableAmmo_LavaHunterFlamethrower_C : UBP_ActionableBehaviour_FireArm_FireController_FillableAmmo_C {
	float DefaultRadius; 

	void GetExplosiveAttributes(float& Radius); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ProcessResource(); // (Public|BlueprintCallable|BlueprintEvent)
	void ConsumeFillableBioFuel(); // (Public|BlueprintCallable|BlueprintEvent)
	enum class CanFireReturnType CanFire(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Fire_Burst(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DoFire(); // (Public|BlueprintCallable|BlueprintEvent)
};

