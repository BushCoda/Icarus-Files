// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_AmmoController_CustomAmmo.BP_ActionableBehaviour_Firearm_AmmoController_CustomAmmo_C
struct UBP_ActionableBehaviour_Firearm_AmmoController_CustomAmmo_C : UBP_ActionableBehaviour_Firearm_AmmoController_Base_C {
	struct FItemsStaticRowHandle CustomAmmo; 

	void HasAmmo(bool& HasAmmo); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetCurrentAmmoItem(bool& SlotValid, struct FItemData& AmmoItemRef); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};

