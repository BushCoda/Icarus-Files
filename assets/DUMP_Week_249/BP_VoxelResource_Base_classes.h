// BlueprintGeneratedClass BP_VoxelResource_Base.BP_VoxelResource_Base_C
struct ABP_VoxelResource_Base_C : AVoxelResource {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UShelteredModifierComponent* ShelteredModifier; 
	struct UBP_HitableBehaviour_VoxelResource_C* BP_HitableBehaviour_VoxelResource; 
	struct UExperienceComponent* Experience; 
	float InstantVoxelMineResourceMulti; 
	struct FExperienceRowHandle StoneVoxelExperienceRow; 
	struct FItemTemplateRowHandle StoneResourceType; 

	void PlayFullyMinedFX(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetResourceType(struct FItemTemplateRowHandle& ItemRow); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetResourceMaterial(struct UMaterialInterface* Material); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReInitVoxel(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__FLODActorComponent_K2Node_ComponentBoundEvent_1_OnActorRevealing__DelegateSignature(struct UFLODActorComponent* Component, struct AActor* Actor, struct FTransform& Transform); // (HasOutParms|BlueprintEvent)
	void ConsumeHit(struct FIcarusDamagePacket DamagePacket); // (BlueprintCallable|BlueprintEvent)
	void ResourcesMined(float ResourceMinedCount, struct AIcarusPlayerController* LastHitPlayerController); // (Event|Public|BlueprintEvent)
	void OnVoxelCompleted(); // (Event|Public|BlueprintEvent)
	void UpdateExperienceComponent(struct FItemTemplateRowHandle& ForResourceType); // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_VoxelResource_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

