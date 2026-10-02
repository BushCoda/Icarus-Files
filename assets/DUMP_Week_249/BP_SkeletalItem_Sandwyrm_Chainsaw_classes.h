// BlueprintGeneratedClass BP_SkeletalItem_Sandwyrm_Chainsaw.BP_SkeletalItem_Sandwyrm_Chainsaw_C
struct ABP_SkeletalItem_Sandwyrm_Chainsaw_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UChildActorComponent* Arrow; 
	struct UFMODAudioComponent* AudioIdleLoop; 
	bool Is On; 
	struct AIcarusPlayerCharacterSurvival* ItemOwner; 
	struct ULivingItemComponent* Living Item; 
	bool SawbladeShowing; 
	struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* AmmoController; 
	struct UAnimMontage* AnimMontageFP; 
	struct UAnimMontage* AnimMontageTP; 
	bool OldOn; 

	void GetFireTransform(bool& Success, struct FTransform& FireTransform); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_SawbladeShowing(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_Is On(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void WeaponFired(); // (BlueprintCallable|BlueprintEvent)
	void WeaponReloaded(); // (BlueprintCallable|BlueprintEvent)
	void StatContainerUpdated(); // (BlueprintCallable|BlueprintEvent)
	void DynamicDataUpdate(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Sandwyrm_Chainsaw(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

