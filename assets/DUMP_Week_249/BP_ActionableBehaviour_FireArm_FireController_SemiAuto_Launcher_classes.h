// BlueprintGeneratedClass BP_ActionableBehaviour_FireArm_FireController_SemiAuto_Launcher.BP_ActionableBehaviour_FireArm_FireController_SemiAuto_Launcher_C
struct UBP_ActionableBehaviour_FireArm_FireController_SemiAuto_Launcher_C : UBP_ActionableBehaviour_FireArm_FireController_SemiAuto_C {
	struct FBallisticData BallisticData; 
	float ZeroRange; 

	void GetBallisticWeight(float& Weight); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetZeroedRotation(float RangeMeters, struct FTransform LaunchTransform, struct FRotator& Rotation, bool& Override); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnFireAdjustRotation(struct FTransform InTransform, struct FRotator& NewRotation, bool& Override); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OverrideForceMatch(bool& Override); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	float GetLaunchForce(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
};

