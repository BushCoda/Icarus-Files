// BlueprintGeneratedClass BP_ResourceNodeBase.BP_ResourceNodeBase_C
struct ABP_ResourceNodeBase_C : AGenericResourceBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_Flammable_FLODActor_ResourceNode_C* Flammable; 
	struct UStaticMeshComponent* StaticMesh; 
	struct UExperienceComponent* Experience; 
	struct UBP_HitableBehaviour_ResourceNode_C* BP_HitableBehaviour_ResourceNode; 
	struct UFLODActorComponent* FLODComponent; 
	struct UHighlightableComponent* Highlightable; 
	struct UInteractableComponent* Interactable; 
	int32_t ResourceCount; 
	int32_t MaxResourceCount; 
	float ReplenishDelay; 
	struct FTimerHandle ReplenishTimer; 
	bool HasBlockingCollision; 
	bool DestroyOnInteract; 
	bool ShouldReplenish; 
	struct FItemRewardsRowHandle ResourceRewardRow; 
	struct FInteractableRowHandle InteractableRowHandle; 
	struct FResourceNodeAudioDataRowHandle AudioRowHandle; 
	struct FItemRewardsRowHandle HitableRewardRow; 
	bool PlayHarvestFxOnRevealing; 
	struct FName HarvestFXSocket; 
	struct FStatsEnum SecondaryResourceStat; 
	struct FItemRewardsRowHandle SecondaryResourceRewardRow; 
	float RewardsModifier; 

	void ScaleSeeds(float SeedMultiplier, struct TArray<struct FItemData>& Items, struct TArray<struct FItemData>& Scaled); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FVector GetHarvestFXLocation(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void HitableHarvest_ByNonCharacter(int32_t ResourceTake, struct UInventoryComponent* Inventory); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayHarvestFX(struct FVector Location, struct AIcarusPlayerCharacter* Instigator); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetHasBlockingCollision(bool HasBlockingCollision); // (Public|BlueprintCallable|BlueprintEvent)
	void HitableHarvest(struct AIcarusPlayerCharacter* PlayerCharacter, int32_t ResourceTake, struct FToolTypesEnum Tooltype); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InteractHarvest(struct FHitResult HitResult, struct AIcarusPlayerCharacter* PlayerCharacter); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnResourceCountChanged(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateNodeVisuals(bool& Success); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void TryReplenishResource(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_ResourceCount(); // (BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnModifiersUpdated(struct UModifierStateComponent* ModifiedComponent, bool Removed); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void MULTI_PlayNodeDepletedFX(struct FVector Location); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void MULTI_PlayHarvestFX(struct FVector Location, struct AIcarusPlayerCharacter* Instigator); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void BndEvt__FLODComponent_K2Node_ComponentBoundEvent_1_OnActorRevealing__DelegateSignature(struct UFLODActorComponent* Component, struct AActor* Actor, struct FTransform& Transform); // (HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_ResourceNodeBase(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

