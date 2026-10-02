// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_Heavy.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_Heavy_C
struct UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_Heavy_C : UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	int32_t ModifierUID; 

	void OnReloadEnd(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void PlayReload(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_Heavy(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

