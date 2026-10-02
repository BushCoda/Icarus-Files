// BlueprintGeneratedClass BP_Building_Base.BP_Building_Base_C
struct ABP_Building_Base_C : ABuildingBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBPC_AccumulationComponent_C* BPC_AccumulationComponent; 
	struct UStaticMeshComponent* WeatherCullingMesh; 
	struct UShelteredModifierComponent* ShelteredModifier; 
	struct UAudioContextComponent* AudioContext; 
	struct USceneComponent* SecondOutsideTestLocation; 
	struct UDestructibleComponent* Stripped_DestructibleMesh; 
	struct UDestructibleComponent* Main_DestructibleMesh; 
	struct UStaticMeshComponent* Stripped_BuildingMesh; 
	struct UStaticMeshComponent* Main_BuildingShadowMesh; 
	struct USceneComponent* FireEffects; 
	struct UArrowComponent* PlacementArrow; 
	struct USceneComponent* PlacementHelpers; 
	struct UArrowComponent* Arrow3; 
	struct UArrowComponent* Arrow2; 
	struct UArrowComponent* Arrow1; 
	struct UTextRenderComponent* rotdebug; 
	struct UArrowComponent* DebugArrows; 
	struct UTextRenderComponent* Debug; 
	struct UStaticMeshComponent* Main_BuildingMesh; 
	struct UBoxComponent* Box11; 
	struct UBoxComponent* Box01; 
	struct UBoxComponent* Box10; 
	struct UBoxComponent* Box00; 
	struct USceneComponent* CollisionTesting; 
	struct USceneComponent* Center; 
	float GridSize; 
	struct ABP_Grid_Base_C* ParentGrid; 
	float Health; 
	float AnchoredStability; 
	bool Dirtied; 
	struct TArray<struct ABP_Building_Base_C*> CheckedBuildingsCache; 
	struct UMaterialInterface* debugMatCache; 
	struct UStaticMeshComponent* MeshCache; 
	bool debugging; 
	float SoftStability; 
	struct FTimerHandle CrackTimer; 
	float CrackUpdateTime; 
	struct FVectorSpringState ShakeSpring; 
	struct FVector ShakeTarget; 
	float LastHardStabilityCheck; 
	struct TArray<struct ABP_Building_Base_C*> CachedAffectedBuildings; 
	bool MagicAnchor; 
	struct FTimerHandle CollapseTimer; 
	struct FRotator GridSpaceRotation; 
	bool CachedRotateCentersUpToHitNormal; 
	struct TArray<struct ABP_Building_Base_C*> RemoteAnchorStabilityBuilding; 
	struct FVector MeshStartingRelitiveLocation; 
	bool BlockLikePlacement; 
	float StraightTracePlacementRange; 
	float ForwardThenDownTraceRange; 
	struct UMaterialInstanceDynamic* DynamicCrackMatInst; 
	struct UCurveFloat* CrackAmountCurve; 
	struct FTimerHandle VeryUnstableEffectsTime; 
	struct UDestructibleMesh* DestructibleMesh; 
	struct FString debugAnchorStabs; 
	float LastPushAnchorStability; 
	struct FTimerHandle DirtyTickTimer; 
	struct UCurveFloat* DestructibleOcclusionCurve; 
	bool TempStability; 
	float DebugUnclampedHardStability; 
	bool Destroyed; 
	struct TArray<struct UBP_Weight_C*> Weights; 
	float DesiredCrackLevel; 
	float CurrentCrackLevel; 
	struct UMaterialInterface* DefaultSlot0Material; 
	struct TArray<struct UMaterialInstanceDynamic*> InstancedMainMeshMaterials; 
	float HitProcessingRadiusThreshold; 
	bool ClientsideGhost; 
	bool ShowPlacementHelpers; 
	struct FFMODEventInstance StressDamageAudioEventInstance; 
	bool StabilityAudioEnabled; 
	struct FVector BuildingGridFootprint; 
	bool ClampHitNormalToUpOrDown; 
	struct FRotator CachedCenterWorldRotation; 
	bool OnFire; 
	bool GhostBlockedPlacement; 
	float GhostActorViewDistance; 
	struct FVector OutsideTestPushoutAmount; 
	bool ReceivingWindDamage; 
	struct FTimerHandle WindDamageTimer; 
	struct FTimerHandle WindParticleSystemSlowTimer; 
	float BaseDamageFromWind; 
	struct TArray<struct FDestructionPoints> DestructibleDamagedPoints; 
	int32_t WindDamageProcessedIndex; 
	bool FullyStripped; 
	struct UDestructibleMesh* StrippedDestructibleMesh; 
	struct UStaticMesh* StrippedStaticMesh; 
	float CollisionDamageImpulseScalar; 
	bool Stripping; 
	struct FBuildableAudioData AudioData; 
	struct FFMODEventInstance WindDamageAudioEventInstance; 
	struct FVector2D DamageSoundCooldownRange; 
	struct FVector2D DestructibleDamageSoundCooldownRange; 
	float DamageSoundCooldownEndTime; 
	float DestructibleDamageSoundCooldownEndTime; 
	struct UStaticMesh* Main_BuildingStaticMesh; 
	bool ShouldOptionallyRotateCenterUptoInpactNormal; 
	struct FVector NewGridPlacementOffset; 
	struct UStaticMesh* Main_BuildingShadowGeoMesh; 
	struct UBP_WeatherAudioComponent_BuildingWindDamage_C* WindDamageWeatherAudio; 
	struct UNavArea* BuildingNavAreaClass; 
	bool SupportedByGround; 
	bool FirstStabilityCalced; 
	int32_t SoftHeightLimit; 
	int32_t DistanceToGround; 
	struct FTimerHandle WeightUnstableTimer; 
	struct FTimerHandle WeightUnstableActiveDestruction; 
	float CrackSizeDivisor; 
	enum class EBuildingOpenableState OpenableState; 
	struct FMulticastInlineDelegate OpenableStateChanged; 
	bool ManualWindDamagePeriod; 
	float CurrentWindDamageTimerTime; 
	struct UCurveFloat* StormToBuildingInteractionCurve; 
	float BaseWindDamagePointRadius; 
	float BaseWindDamagePointImpusle; 
	bool RecentlyRepaired; 
	bool IsAsyncResettingDM; 
	struct UCurveFloat* HealthToDestructionPointCount; 
	struct UCurveFloat* HealthToDestructionImpulseStrength; 
	int32_t EffectiveDestructionPointCount; 
	struct UFMODEvent* FMODEvent_SnowCleared; 
	bool ReceivingUnzip; 
	struct FTimerHandle DelayedDirtyTimer; 
	int32_t FromDatabaseHealthPercentage; 
	float SnowConstant; 
	bool HasAreaLoadedOnce; 
	bool IsInCave; 
	bool LastIsOutsideResult; 
	float LastIsOutsideResponseTime; 
	float IsOutsideCacheTime; 
	struct FTimerHandle TaggedDamageTimer; 
	struct UStaticMeshComponent* RVTCullingMesh; 
	struct UBPC_EnvironmentalBuildup_C* EnvironmentalBuildup; 
	struct AWeatherController* CachedWeatherController; 
	struct FTimerHandle UnstableUpdateTimer; 
	float SandConstant; 
	float AshConstant; 

	float GetOcclusionValue(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void DebugViewSnowMesh(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DisableDFAOOnMesh(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool IsBuildingSalted(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SaltBuilding(struct AController* Instigator); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetWeatherController(struct AWeatherController*& Output_Get); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void DebugApplyShadowSettings(); // (Public|BlueprintCallable|BlueprintEvent)
	struct UStaticMesh* GetStrippedBuildingStaticMeshAsset(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct UStaticMesh* GetMainBuildingStaticMeshAsset(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	float GetSnowAmount(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void OnTerrainAnchorUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetSupportedByGround(bool SupportedByGround); // (Public|BlueprintCallable|BlueprintEvent)
	void TrySpawnRVTBlocker(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_ParentGrid(); // (BlueprintCallable|BlueprintEvent)
	void IsFullyStripped(bool& FullStripped); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct UDestructibleComponent* GetStrippedDestructibleMesh(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct UDestructibleComponent* GetDestructibleBuildingMesh(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct UStaticMeshComponent* GetStrippedBuildingMesh(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct UStaticMeshComponent* GetMainBuildingMesh(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void Get Building Piece Blueprint(struct FBuildingPiecesRowHandle Piece, struct TSoftClassPtr<UObject>& Blueprint); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CopyBuildingSkinToDestructibleMesh(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool IsReceivingWindDamage(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void MarkDirty_Old(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetIsInCave(bool InCave); // (Public|BlueprintCallable|BlueprintEvent)
	void TraceForCave(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool IsBuildingDestroyed(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct ABuildingGridBase* GetParentGrid(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct USceneComponent* GetCenterComponent(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void DoBuildingOutsideCheckTrace(struct FVector StartPosition, bool& TraceHit); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool IsBuildingOutside(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetHealthByPercentage(int32_t Percentage); // (Public|BlueprintCallable|BlueprintEvent)
	void GetVariation(bool& IsValid, struct FBuildingVariation& VariationData, int32_t& VariationIndex); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetUnzipAudioActive(bool Active); // (Private|BlueprintCallable|BlueprintEvent)
	void OnRep_ReceivingUnzip(); // (BlueprintCallable|BlueprintEvent)
	void PlaySnowClearedSound(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsOnFire(bool& Result); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void AttemptToResetMaterialsOnDestructibleMesh(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AttemptToApplyDynamicMaterialsOnDestructibleMesh(); // (Public|BlueprintCallable|BlueprintEvent)
	void HealthToDestruction(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ApplyShadowSettings(); // (Public|BlueprintCallable|BlueprintEvent)
	void TransitionToMainDestructibleMesh(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TransitionToStrippedMesh(); // (Public|BlueprintCallable|BlueprintEvent)
	void TransitionToMainMesh(); // (Public|BlueprintCallable|BlueprintEvent)
	void CalculateBaseWindDamagePeriod(float& DamagePeriod); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	float CalculateEffectiveWindDamagePeriod(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CheckWindDamagePacing(bool& NewPacing); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetCurrentWeatherAction(struct UIcarusWeatherAction*& CurrentWeatherAction); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void WindDamageGeneration(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool IsLandscapeLoaded(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetOpenableState(enum class EBuildingOpenableState NewState); // (Public|BlueprintCallable|BlueprintEvent)
	void CleanupWeightTimers(); // (Public|BlueprintCallable|BlueprintEvent)
	void CleanupIndirectWeight(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	float DirtyTickBackOffTime(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void RedistributeDirectWeight(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RemoveDirectWeight(struct UShapeComponent* Shape, struct UWeightComponent* Weight); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveDirectWeight(struct UShapeComponent* Shape, struct UWeightComponent* Weight, bool SpreadToNeighbors); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BuildingStabilityColorCalc(struct FLinearColor& StabilityColor); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void RemoveWindDamageWeatherAudioComponent(); // (Private|BlueprintCallable|BlueprintEvent)
	void AddWindDamageWeatherAudioComponent(); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayRepairedSound(); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayFullyStrippedSound(); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TryPlayDamageSound(int32_t DamageAmount, struct FDamageEvent DamageEvent, struct AActor* DamageCauser); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TryPlayDestructibleDamageSound(struct FVector Location, float Impulse); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayBuildingPlacedSound(struct AIcarusPlayerCharacter* Instigator); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void StopAllAudio(); // (Private|BlueprintCallable|BlueprintEvent)
	void StopWindDamageAudio(); // (Private|BlueprintCallable|BlueprintEvent)
	void StartWindDamageAudio(); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateStabilityAudioVeryUnstable(float TimerLength); // (Private|BlueprintCallable|BlueprintEvent)
	void PlayDestructionAudio(float SnowAmount); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateStabilityAudio(bool IsVeryUnstable); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ResetStabilityAudio(); // (Private|BlueprintCallable|BlueprintEvent)
	void OnRep_Stripping(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_FullyStripped(); // (BlueprintCallable|BlueprintEvent)
	void ServerRepair(struct AIcarusPlayerCharacter* Player); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TryEnterStrippableState(); // (Public|BlueprintCallable|BlueprintEvent)
	void ServerFullyStripBuilding(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_DestructibleDamagedPoints(); // (BlueprintCallable|BlueprintEvent)
	void ProcessWindDamageArray(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_ReceivingWindDamage(); // (BlueprintCallable|BlueprintEvent)
	void ConsiderHidingGhostActor(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_GhostBlockedPlacement(); // (BlueprintCallable|BlueprintEvent)
	void Clamp Hit Normal To Centers Main Directions(struct FVector WorldSpaceVector, struct FVector& RoundedWorldSpaceVector); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Clamp Hit Normal to Center Up or Down(struct FVector Normal, struct FVector& Clamped Normal); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ApplyDotsToFootprint(struct FVector Dots, struct FVector& SelectedRelativeFootprint); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnRep_ClientsideGhost(); // (BlueprintCallable|BlueprintEvent)
	void ClientAndServer Outline(); // (Public|BlueprintCallable|BlueprintEvent)
	void BlockLikePlacementTranslation(struct FTransform GridSpaceLocWithoutRot, struct FRotator GridSpaceRot, struct FTransform& ShiftedTransformwithRot); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RemoveInvalidHardStabilityRefs(); // (Public|BlueprintCallable|BlueprintEvent)
	enum class RotationalDirections CompareRotations(struct FRotator Compare, struct FRotator CompareAgainst, struct FVector& Dots); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void RepushAllInRangeAnchors(bool& FoundAnAnchor); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OptionallyRotateCenterUpToInpactNormal(struct FVector HitNormal, struct FRotator& CenterWorldRotation, struct FRotator& ZRotatedDifference, bool& ImpactWasAlreadyRotated); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void DoesBuildingArrayContainBuildingArray(struct TArray<struct ABP_Building_Base_C*>& ContainingArray, struct TArray<struct ABP_Building_Base_C*>& InnerArray, bool& ContainedInnerArray); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void AppendUniqueBuildingArray(struct TArray<struct ABP_Building_Base_C*>& Array 1, struct TArray<struct ABP_Building_Base_C*>& Array 2, struct TArray<struct ABP_Building_Base_C*>& Array1UniquelyAddedTo2); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void CollapseTimerBasedOffLastHardStability(float& NewParam); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ShouldRotate(enum class RotationalDirections Direction, struct FTransform GridSpaceTrans, struct ABP_Building_Base_C* NewBuilding, float HitDistanceFromCenter, struct FVector Dots, struct FRotator WorldRotToTest, struct FRotator GridspaceRotTestAgainst, struct FVector RawHitNormal, struct ACharacter* Player, struct FTransform& Shifted, bool& WantsBlockLikePlacement, struct FTransform& BlockLikePlacementExtra); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShouldDownShift(enum class RotationalDirections Direction, bool& Shift); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ShouldUpShift(enum class RotationalDirections Direction, bool& Shift); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ShouldLeftShift(enum class RotationalDirections Direction, bool& Shift); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ShouldRightShift(enum class RotationalDirections Direction, bool& Shift); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ShouldBackwardShift(enum class RotationalDirections Direction, bool& Shift); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ShouldForwardShift(enum class RotationalDirections Direction, bool& Shift); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void DecideShifting(struct FRotator RotationToTest(world), struct FRotator RotationTestingAgainst(gridspace), struct FTransform GridSpaceLOCHitPlaneRot, struct ABP_Building_Base_C* Building Class, float DistanceBetweenHitAndCenter, struct FVector RawHitNormal, struct ACharacter* Player, struct FTransform& GridSpaceLOCWithGridSpaceRot, enum class RotationalDirections& RelativeRotationEnum, bool& WantsBlockLikePlacement, struct FTransform& BlockLikePlacementExtraDelta); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitAnchorStability(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RemoveHardStability(struct ABP_Building_Base_C* RemovedBuilding); // (Public|BlueprintCallable|BlueprintEvent)
	void PickNewShakeTarget(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Calculate Stability State Implementation(); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveHardStability(struct ABP_Building_Base_C* FromBuilding, float Stability); // (Public|BlueprintCallable|BlueprintEvent)
	void PushAnchorIntoHardStability(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BuildingHitToGridRounded(struct FHitResult& InHit, struct ABP_Building_Base_C* ClassToBuild, int32_t RotationalOffsetState, struct ACharacter* PlayerPerformingTrace, struct FTransform& OutWorldSpaceOnGrid, enum class RotationalDirections& BuildingHitRelativeRotation, enum class RotationalDirections& HitGridRelativeRotation); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetBlockingBypass(struct ABP_Building_Base_C* BuildingClass, struct TArray<struct FVectorPair>& BlockingPreRotate, struct FTransform GridSpaceTransform, struct TArray<struct FVectorPair>& BypassBlocking); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetBlockingLines(struct TArray<struct FVectorPair>& BlockingLines); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void Rain(int32_t Millilitres); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void Destruction effects(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void debug color(); // (BlueprintCallable|BlueprintEvent)
	void Stable(); // (BlueprintCallable|BlueprintEvent)
	void Unstable(); // (BlueprintCallable|BlueprintEvent)
	void VeryUnstable(); // (BlueprintCallable|BlueprintEvent)
	void Collapse(); // (BlueprintCallable|BlueprintEvent)
	void cracks(); // (BlueprintCallable|BlueprintEvent)
	void PushHardStabilityAsync(); // (BlueprintCallable|BlueprintEvent)
	void ReinitAnchorStability(); // (BlueprintCallable|BlueprintEvent)
	void DebugStabilityMulti(float hardstabilityCount, float HardStabValue, int32_t RemoteAnchorBuildings, float AnchorStab, struct FString Debug, float UnclampedHardStability); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void StableEffects(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void UnstableEffects(bool VeryUnstable); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void VeryUnstableEffects(float TimerLength); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void VeryUnstableEffectsFinished(); // (BlueprintCallable|BlueprintEvent)
	void TempStabilityExpired(); // (BlueprintCallable|BlueprintEvent)
	void MultiOnPlaced(struct AIcarusPlayerCharacter* Instigator); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceiveDestroyed(); // (Event|Public|BlueprintEvent)
	void PlacementHelperVisualMulticast(struct TArray<struct UPrimitiveComponent*>& Component, struct UMaterialInterface* NewMaterial); // (Net|NetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GhostActorSlowTick(); // (BlueprintCallable|BlueprintEvent)
	void Manual_Construction(struct ABP_Grid_Base_C* ParentGrid, struct FVector GridLocation); // (BlueprintCallable|BlueprintEvent)
	void Manual_BeginPlay(); // (BlueprintCallable|BlueprintEvent)
	void ServerStartWindDamage(float ManualPeriodOverride); // (BlueprintCallable|BlueprintEvent)
	void WindDamageTick(); // (BlueprintCallable|BlueprintEvent)
	void WindDamageCosmetics(); // (BlueprintCallable|BlueprintEvent)
	void StopWindDamageTimers(); // (BlueprintCallable|BlueprintEvent)
	void ServerStopWindDamage(); // (BlueprintCallable|BlueprintEvent)
	void DelayedAsyncProccessDestructibleDamage(); // (BlueprintCallable|BlueprintEvent)
	void AsyncStrippedMeshSwap(); // (BlueprintCallable|BlueprintEvent)
	void debugdestruction(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__ActorState_K2Node_ComponentBoundEvent_0_OnDamagedSignature__DelegateSignature(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // (HasOutParms|BlueprintEvent)
	void MultiOnRepaired(bool RemoveScorch); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void RegisterWithWeatherController(); // (BlueprintCallable|BlueprintEvent)
	void ConsumeHit_Collision(struct FIcarusDamagePacket DamagePacket); // (BlueprintCallable|BlueprintEvent)
	void IndirectWeightChildDestroyed(struct ABuildingBase* Building, enum class EBuildingDestroyReason DestroyReason); // (BlueprintCallable|BlueprintEvent)
	void WeightUnstable(); // (BlueprintCallable|BlueprintEvent)
	void OverWeightCheck(); // (BlueprintCallable|BlueprintEvent)
	void OverweightDestructionTick(); // (BlueprintCallable|BlueprintEvent)
	void WeightInjectedVeryUnstable(); // (BlueprintCallable|BlueprintEvent)
	void WeightInjectedUnstable(); // (BlueprintCallable|BlueprintEvent)
	void OnModifiersUpdated(struct UModifierStateComponent* ModifiedComponent, bool Removed); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void RepairObject(struct AIcarusPlayerCharacter* Player); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void UpdateWindDamageTimer(float NewTime); // (BlueprintCallable|BlueprintEvent)
	void InstantAsyncProcessDestructibleDamage(); // (BlueprintCallable|BlueprintEvent)
	void AsyncMainDMReset(); // (BlueprintCallable|BlueprintEvent)
	void TransitionedToStrippedCheck(); // (BlueprintCallable|BlueprintEvent)
	void TransitionedToMainMesh(); // (BlueprintCallable|BlueprintEvent)
	void TransitionedToDM(); // (BlueprintCallable|BlueprintEvent)
	void ShadowSettings changed(bool Value); // (BlueprintCallable|BlueprintEvent)
	void Async mat change(); // (BlueprintCallable|BlueprintEvent)
	void PlayerClearBuildup(struct AIcarusPlayerCharacter* Player); // (BlueprintCallable|BlueprintEvent)
	void MULTI_PlaySnowClearedEffects(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void DirtyShelter(); // (BlueprintCallable|BlueprintEvent)
	void RaiseTheCurtain(); // (Event|Public|BlueprintEvent)
	void Snow(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void StartDestruction(struct AIcarusPlayerController* TriggeringPlayer, enum class EBuildingDestroyReason DestroyReason); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void CalculateStabilityState(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void SetCaveState(bool IsInCave, struct AActor* CaveActor); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowPlacementHelpersWithReset(float ResetDelay); // (BlueprintCallable|BlueprintEvent)
	void SetPlacementHelpersVisibility(bool bNewVisibility); // (BlueprintCallable|BlueprintEvent)
	void MULTI_ShowPlacementHelpers(struct ACharacter* ForPlayer); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void QueueTaggedDamage(float Cycle, enum class EIcarusDamageType DamageType, int32_t Amount); // (BlueprintCallable|BlueprintEvent)
	void DoTaggedDamage(); // (BlueprintCallable|BlueprintEvent)
	void AddWeightComponentInfluence(struct UShapeComponent* Shape, struct UWeightComponent* Weight, bool bSpreadToNeighbours); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void RemoveWeightComponentInfluence(struct UShapeComponent* Shape, struct UWeightComponent* Weight); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void InitShelterCaptureForWeather(); // (BlueprintCallable|BlueprintEvent)
	void Sand(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void Ash(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Building_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OpenableStateChanged__DelegateSignature(enum class EBuildingOpenableState NewState); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

