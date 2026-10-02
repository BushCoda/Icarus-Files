// BlueprintGeneratedClass BP_ActionableBehaviour_FireArm_FireController_SemiAuto_LegendarySaw.BP_ActionableBehaviour_FireArm_FireController_SemiAuto_LegendarySaw_C
struct UBP_ActionableBehaviour_FireArm_FireController_SemiAuto_LegendarySaw_C : UBP_ActionableBehaviour_FireArm_FireController_SemiAuto_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UIcarusStatContainer* StatContainer; 
	int32_t CalculatedToolDurabilityLoss; 
	struct TSoftObjectPtr<UObject> 3rdFireAnimation; 

	void GetProjectileMeshOverride(struct TSoftObjectPtr<UStreamableRenderAsset>& OverrideMesh); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FTransform GetFirePositionOverride(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetProjectileSpawnTransform(float CameraShakeScale, struct FBallisticData BallisticData, struct FTransform& NewProjectileTransform); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	enum class CanFireReturnType CanFire(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void DamageItemDurability(int32_t Amount); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void PlayFireFailed(); // (BlueprintCallable|BlueprintEvent)
	void PlayFireAnims(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_FireArm_FireController_SemiAuto_LegendarySaw(int32_t EntryPoint); // (Final|UbergraphFunction)
};

