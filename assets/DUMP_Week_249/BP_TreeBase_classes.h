// BlueprintGeneratedClass BP_TreeBase.BP_TreeBase_C
struct ABP_TreeBase_C : ATreeBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UDecayableComponent* Decayable; 
	struct USmoothSync* SmoothSync; 
	struct UAudioOcclusionComponent* AudioOcclusion; 
	struct UAudioContextComponent* AudioContext; 
	struct UBP_HitableBehaviour_Tree_C* BP_HitableBehaviour_Tree; 
	struct UBP_Flammable_FLODActor_Tree_C* Flammable; 
	struct UBP_FLODTreeComponent_C* FLODTreeComponent; 
	struct UDurableComponent* Durable; 
	struct UExperienceComponent* Experience; 
	struct UStaticMeshComponent* ProxyTreeMesh; 
	struct UBP_BuoyancyComponent_C* BP_BuoyancyComponent; 
	struct UBP_TreePrimitive_C* RootTreePrimitive; 
	float Timeline_1_FallTime_993C5D0945E276AD384717AE461774C8; 
	enum class ETimelineDirection Timeline_1__Direction_993C5D0945E276AD384717AE461774C8; 
	struct UTimelineComponent* Timeline_2; 
	float Timeline_0_FallTime_506F6E0448CBBE8B1F14BF952EBE3FD3; 
	enum class ETimelineDirection Timeline_0__Direction_506F6E0448CBBE8B1F14BF952EBE3FD3; 
	struct UTimelineComponent* Timeline_1; 
	struct UTreePrimitiveComponent* HighestTreePrimitive; 
	float HighestVerticalOffset; 
	float PhysicsFellValue; 
	enum class EDOFMode CurrentConstraintMode; 
	struct FMulticastInlineDelegate OnHierarchyTransferredToNewTreeBase; 
	struct FMulticastInlineDelegate ServerOnTrunkHit; 
	struct FMulticastInlineDelegate OnBranchDetached; 
	struct FTreeAudioData AudioData; 
	struct FTreeSetupProperties SetupProperties; 
	struct TMap<struct UTreePrimitiveComponent*, struct UStaticMeshComponent*> TreePrimitiveDamageMeshesBottom; 
	struct TMap<struct UTreePrimitiveComponent*, struct UStaticMeshComponent*> TreePrimitiveDamageMeshesTop; 
	bool HasVolitileCollision; 
	float VolitileVelocityThreshold; 
	struct FVector AverageVelocityTop; 
	struct FVector AverageVelocityBottom; 
	struct FVector PreviousAverageVelocityTop; 
	struct FVector PreviousAverageVelocityBottom; 
	float AverageVelocitySmoothTime; 
	float MassRelativeCollisionDamageRatio; 
	struct FVector TempHitImpulse; 
	struct FVector TempHitLocation; 
	struct UCurveFloat* CollisionImpulseDamageScalarCurve; 
	float InitPhysicsFellValue; 
	float CollisionDamageImpulseMassRatioMin; 
	float CollisionDamageImpulseMassRatioMax; 
	float CollisionDamageCooldownTime; 
	float CollisionDamageCooldownValue; 
	struct TArray<struct UDecalComponent*> DecalComponents; 
	struct TArray<struct UMaterialInstance*> TreeHitDecal; 
	struct FVector TreeHitDecalSize; 
	bool IsBeingFelledInstantly; 
	bool HasGrantedInitialExperience; 
	struct FMulticastInlineDelegate OnInstantlyFelled; 
	struct UFMODEvent* FMODEvent_InstaFellOverride_StumpOnly; 
	struct UFMODEvent* FMODEvent_InstaFellOverride_Fallen; 
	bool bHasBeenTrackedAsCutOnce; 
	int32_t InstantChoppedWoodSpawned; 

	void ForceDetachSpecifiedRootLeaves(struct AActor* Collision Actor); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddInstantlySubdividedChildWoodCount(int32_t WoodSpawned); // (Public|BlueprintCallable|BlueprintEvent)
	void GetIsBeingFelledInstantly(bool& InstantlyFelled); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CheckIntialExperienceEvent(struct AIcarusPlayerCharacter* Player); // (Public|BlueprintCallable|BlueprintEvent)
	void OnAppliedCollisionDamage(float CollisionDamage, struct FHitResult Hit); // (Public|BlueprintCallable|BlueprintEvent)
	void Topple(struct FTreeToppleInfo ToppleInfo); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetVolitileCollision(bool VolitileCollisionState, bool RefreshCollisions); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateCollisionDamageCooldown(float DeltaSeconds); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_CurrentConstraintMode(); // (BlueprintCallable|BlueprintEvent)
	struct FVector GetAverageVelocityAtPoint(struct FHitResult& Hit); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateAverageVelocityValue(float DeltaSeconds, struct FVector& AverageVelocity, struct FVector& PreviousAverage, struct FVector Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateVolitileCollisionState(float DeltaSeconds); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetTreePrimitiveAttachPoints(struct UTreePrimitiveComponent* TreePrimitive, struct FTransform& BaseTransform, struct TMap<struct FName, struct FTransform>& AttachmentTransforms); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateTreePrimitiveDamageCap(struct UTreePrimitiveComponent* TreePrimitive, struct UTreePrimitiveComponent* PairedTreePrimitive, float DamageValue); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateTreePrimitiveDamage(struct UTreePrimitiveComponent* TreePrimitive); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateSoftBranchesState(bool RefreshCollision); // (Public|BlueprintCallable|BlueprintEvent)
	void PlaySoundWithDetachContext(struct FVector Location, struct FTreePrimitiveDetachContext DetachContext, struct UFMODEvent* Event); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheckForInstasplitLogic(struct AActor* HitByActor, struct UTreePrimitiveComponent* TreePrimitive); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FindBestDamageTreePrimitive(struct FVector Location, struct UTreePrimitiveComponent* HitTreePrimitive, struct UTreePrimitiveComponent*& TreePrimitive); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RecalculateBuoyancy(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateTreeFalling(float FallTime, struct FVector FellDirectionXY); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdatePrimitivesFellData(float FellValue, float FireTemperature); // (Public|BlueprintCallable|BlueprintEvent)
	void SetFLODReservationState(bool ReservationState); // (Public|BlueprintCallable|BlueprintEvent)
	void OnEventBreakableHit_ProxyMesh(struct FVector HitLocation, struct FVector HitNormal, struct UTreePrimitiveComponent*& TreePrimitive); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnEventBreakableHit(struct UPrimitiveComponent* Primitive, struct AActor* Other Actor, struct FVector Hit Location, struct FVector Hit Normal); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnTreePrimitiveOverlap_Branch(struct UBP_TreePrimitive_C* TreePrimitive, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void On Tree Primitive Hit Trunk(struct UBP_TreePrimitive_C* TreePrimitive, struct AActor* OtherActor, struct UPrimitiveComponent* OtherPrimitive, struct FVector NormalImpulse, struct FHitResult& Hit); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void DebugTreePrimitiveMetadata(float Delay, struct UTreePrimitiveComponent* TreePrimitive); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DebugTreeMetadata(float Delay); // (Public|BlueprintCallable|BlueprintEvent)
	void OnTreePrimitiveHit_Branch(struct UBP_TreePrimitive_C* TreePrimitive, struct AActor* Other Actor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateAngularDamping(float DeltaSeconds); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetHighestVerticalOffset(float& HighestVerticalOffset); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CalculateHighestVerticalOffset(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsTreeFalling(bool& IsFalling); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IsOriginalTree(bool& IsOriginalTree); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void Timeline_0__FinishedFunc(); // (BlueprintEvent)
	void Timeline_0__UpdateFunc(); // (BlueprintEvent)
	void Timeline_1__FinishedFunc(); // (BlueprintEvent)
	void Timeline_1__UpdateFunc(); // (BlueprintEvent)
	void SpawnFallAudioActor(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__TerrainAnchor_K2Node_ComponentBoundEvent_0_OnTerrainAchorStateChanged__DelegateSignature(); // (BlueprintEvent)
	void PlayInstantlyFelledSound(int32_t TrunkCount); // (BlueprintCallable|BlueprintEvent)
	void PlayInitialBreakSounds(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void OnConstructedTreePrimitives(); // (Event|Public|BlueprintEvent)
	void OnPreConstructedTreePrimitives(); // (Event|Public|BlueprintEvent)
	void OnDetachTreePrimitive(struct UTreePrimitiveComponent* TreePrimitive, struct FTreePrimitiveDetachContext& DetachContext); // (Event|Public|HasOutParms|BlueprintEvent)
	void OnTransferTreePrimitiveHierarchy(struct UTreePrimitiveComponent* TreePrimitive, struct FTreePrimitiveDetachContext& DetachContext, struct ATreeBase* NewTree); // (Event|Public|HasOutParms|BlueprintEvent)
	void StartTreeFalling(struct FVector FellDirectionXY, float InitPhysicsFellValue, float InitFireTemperature); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void SkipRemainingTreeFelling(float Delay); // (BlueprintCallable|BlueprintEvent)
	void OnUpdateTreePrimitiveRuntimeMaskState(struct TArray<struct UTreePrimitiveComponent*>& RemovedTreePrimitives); // (Event|Protected|HasOutParms|BlueprintEvent)
	void OnModifiersUpdated(struct UModifierStateComponent* ModifiedComponent, bool Removed); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void MULTI_TreePrimitiveDetached(struct FVector DetachedPrimitiveOffset, enum class ETreePrimitiveType DetachedPrimitiveType, float DetachedPrimitiveMass, struct FTreePrimitiveDetachContext DetachContext, bool ShouldPlaySFX, struct FName DetachPrimitiveName); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void OnTrasferredFromOther(struct ABP_TreeBase_C* SourceTree, struct UTreePrimitiveComponent* SourcePrimitive); // (BlueprintCallable|BlueprintEvent)
	void OnHitTree(struct UPrimitiveComponent* Primitive, struct AActor* DamageCauser, struct FVector HitLocation, struct FVector HitNormal); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_TreeBase(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnInstantlyFelled__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnBranchDetached__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void ServerOnTrunkHit__DelegateSignature(struct UBP_TreePrimitive_C* TreePrimitive, struct AActor* OtherActor, struct UPrimitiveComponent* OtherPrimitive, enum class EPhysicalSurface HitSurface, struct FVector HitLocation, float ImpulseValue, float Damage); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnHierarchyTransferredToNewTreeBase__DelegateSignature(struct ABP_TreeBase_C* TreeBase); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

