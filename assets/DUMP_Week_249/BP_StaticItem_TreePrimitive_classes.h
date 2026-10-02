// BlueprintGeneratedClass BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C
struct ABP_StaticItem_TreePrimitive_C : AStaticItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UExperienceComponent* Experience; 
	float KillFireTimeline_FireTemperatureMultiplier_A5931A634B2ED32ECBDFACA3307BB127; 
	enum class ETimelineDirection KillFireTimeline__Direction_A5931A634B2ED32ECBDFACA3307BB127; 
	struct UTimelineComponent* KillFireTimeline; 
	bool RequiresSubdivide; 
	float AngularDampingZ; 
	struct FItemRewardsRowHandle RewardsRowHandle; 
	bool SubdivideImmediately; 
	bool SubdivideCopyMeshTransform; 
	struct FTreePrimitiveSubdivideMeshes SubdivideMeshes; 
	struct FVector2D AudioCooldownLengthRange; 
	float AudioImpulseThreshold; 
	float AudioImpulseRangeMax; 
	float AudioCooldownEndTime; 
	struct UFMODEvent* CollisionFMODEvent; 
	float HitEventsLifespan; 
	float DefaultMass; 
	struct UFMODEvent* FMODEvent_Split; 
	float RewardMultiplier; 
	struct FItemData ScaledItem; 
	bool SubdivideRaycastPosition; 
	struct UPhysicalMaterial* PhysicalMaterialOverride; 
	float InfectedBarkRewardMulti; 
	int32_t TotalWoodSpawnedToRouteToParent; 

	void LegendChainsawSetHighlight(struct AIcarusPlayerCharacter* Player, struct AIcarusItem* IcarusItem); // (Public|BlueprintCallable|BlueprintEvent)
	void GenerateRefinedWood(int32_t WoodAmount); // (Public|BlueprintCallable|BlueprintEvent)
	void GenerateNaturalResources(int32_t WoodAmount); // (Public|BlueprintCallable|BlueprintEvent)
	struct FItemData TryGrantFrostedAlteration(struct UIcarusStatContainer* StatContainer, struct FItemData& ItemData); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GenerateCoal(int32_t WoodAmount); // (Public|BlueprintCallable|BlueprintEvent)
	void GenerateInfectedBark(int32_t BaseWoodAmount); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_RequiresSubdivide(); // (BlueprintCallable|BlueprintEvent)
	void ResolveSubdivideTraits(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_PhysicalMaterialOverride(); // (BlueprintCallable|BlueprintEvent)
	void ScaleItemReward(struct FItemData In, float AdditionalMultiplier, struct FItemData& Out); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void TryPlaySubdivideFX(); // (Public|BlueprintCallable|BlueprintEvent)
	void TrySubdivide(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateAngularDamping(float DeltaSeconds); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TryPlayCollisionSound(struct FVector Impulse, struct FHitResult& Hit); // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Initialize(struct FItemRewardsRowHandle RewardsRowHandle, bool SubdivideImmediately, bool SubdivideCopyMeshTransform, struct FTreePrimitiveSubdivideMeshes SubdivideMeshes, struct UStaticMeshComponent* Instigator, bool EnableHitEvents, float AngularDampingZ, float MaxHealth, bool SubdivideRaycastPosition, struct UPhysicalMaterial* PhysicalMaterialOverride); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void KillFireTimeline__FinishedFunc(); // (BlueprintEvent)
	void KillFireTimeline__UpdateFunc(); // (BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void SetupFireParams(float FireSpread, float FireTemperature, struct FVector LocalFireOrigin, struct FVector LocalBoundsSize); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void BndEvt__StaticMeshRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // (HasOutParms|BlueprintEvent)
	void DisableHitEvents(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void OnActorStateDeath(struct UActorState* ActorState); // (BlueprintCallable|BlueprintEvent)
	void MULTI_PlaySubdivideFX(float Mass, int32_t Pieces); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_StaticItem_TreePrimitive(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

