// BlueprintGeneratedClass BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C
struct UBP_PlayerBuildingPlacement_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	int32_t BuildingVariation; 
	struct ABP_Building_Base_C* ClassToBuild; 
	struct AActor* GhostBuildingActor; 
	bool FreespaceMode; 
	struct ABP_Grid_Base_C* AutoFocusedGrid; 
	struct ABP_Grid_Base_C* RemoteFocusedGrid; 
	bool BuildingAlternateRotation; 
	int32_t BuildingRotationalOffsetState; 
	struct FTransform BuildingGridSnappedCache; 
	struct FTransform LockedInGridCache; 
	bool BuildingBlocked; 
	struct FTransform BuildingNewGridCache; 
	bool BuildingWasCapsuleHit; 
	bool LandscapeWasTraceHit; 
	bool LongTraceDownWasHit; 
	struct FHitResult BuildingCapsuleHitCache; 
	struct FHitResult LandscapeTraceHit; 
	struct FHitResult LongTraceDownHitCache; 
	float BuildingLockedStartTime; 
	enum class RotationalDirections LockedInComparison; 
	enum class RotationalDirections CondensedFrameTest; 
	float BuildingLockRequiredTime; 
	enum class RotationalDirections LastFullyLockedInValue; 
	int32_t TempVariation; 
	int32_t BuildingRotationalOffsetStateMax; 
	struct ABP_Building_Base_C* OldBuilding; 
	struct TMap<enum class EBuildingResourceType, struct FItemsStaticRowHandle> WallVariations; 
	struct TMap<enum class EBuildingResourceType, struct FItemsStaticRowHandle> FrameVariations; 
	struct TMap<enum class EBuildingResourceType, struct FItemsStaticRowHandle> AngledWallVariations; 
	struct TMap<enum class EBuildingResourceType, struct FItemsStaticRowHandle> FloorVariations; 
	struct TMap<enum class EBuildingResourceType, struct FItemsStaticRowHandle> RampVariations; 
	struct TMap<enum class EBuildingResourceType, struct FItemsStaticRowHandle> BeamVariations; 
	struct FBuildingVariationsStructure BuildingVariantStruct; 
	struct TMap<struct TSoftClassPtr<UObject>, int32_t> buildingClassToTypeIndex; 
	struct TMap<struct TSoftClassPtr<UObject>, int32_t> buildingClassToVariantIndex; 
	bool DisableGridAutoFocus; 
	struct FVector ManualNewGridOffset; 
	struct FTransform InterpolatedGridSnappedCache; 
	struct FTransform InterpolatedNewGridCache; 
	float InterpolationSpeed; 
	struct TMap<struct FBuildingPiecesRowHandle, struct FItemsStaticRowHandle> BuildingPieceToItemStatic; 
	struct TMap<struct FBuildingPiecesRowHandle, int32_t> BuildingPieceToVarient; 
	struct FText UpgradeFailureMessage; 
	bool BuildingOutOfBoundsBlocked; 

	void HandleInvalidPlacementText(struct FText InvalidReason, bool InvalidPlacement); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckBuildBlockerSubSystem(struct AActor* Actor, bool& bLocked); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void TempGhostSet(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateInterpolatedPlacementTransforms(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetBuildingBlocked(bool IsBlocked); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_GhostBuildingActor(); // (BlueprintCallable|BlueprintEvent)
	void ClearBuildingCaches(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ProcessBuildingHit(struct FHitResult HitStruct, struct ABP_Building_Base_C* HitBuilding, struct ABP_Building_Base_C* ClassToBuild); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PerformBuildingTrace(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ProcessGroundHit(struct FHitResult& Hit, struct ABP_Building_Base_C* ClassToBuild, bool FreespaceBuilding); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CacheBuildingItemStaticLookup(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CacheBuildingTypeLookup(struct TSoftClassPtr<UObject> BuildingClassSoftRef, int32_t& BuildingVariantsStructTypeIndex); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetupBuilding(struct ABP_Building_Base_C* Building, struct ABP_Building_Base_C* OldBuilding); // (Public|BlueprintCallable|BlueprintEvent)
	void AttemptToSwapBuilding(struct ABP_Building_Base_C* BuildingToSwap, enum class EBuildingResourceType ResourceType, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	enum class EBuildingType GetBuildingType(struct ABP_Building_Base_C* Building, bool& Success); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void RemoveItemFromInventory(struct FItemsStaticRowHandle& Item, struct FItemData& RemovedItem); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FindItemInInventory(struct FItemsStaticRowHandle& Item, bool& Found); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ShapeTraceSurfaceNormalFix(struct FHitResult Hit, struct FHitResult& FixedNormalHit, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetLocalPlayerView(struct FVector& Location, struct FRotator& Rotation); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ServerSpawnNewGhostBuilding(struct ABP_Building_Base_C* New Building Class); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BuildCheck(struct ABP_Building_Base_C* ToBuild, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RelativeAxisLock(enum class RotationalDirections RelativeRotationalDirection, bool& Locked); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void InjectPlayerDesiredRotations(struct FTransform NewParam1, struct FTransform& NewParam); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsHitNearBuilding(struct FHitResult Hit, bool& NewParam1); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ConfigureGhostActor(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnLoaded_4D0287A642DEED0DCA1218A46059E2A2(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_9489F6834FA9BA550AC52889E53D7474(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void Walltick helper(); // (BlueprintCallable|BlueprintEvent)
	void AttemptToPlaceBuilding(); // (BlueprintCallable|BlueprintEvent)
	void ServerAddNewBuilding(struct ABP_Grid_Base_C* FocusedGrid, struct FTransform WorldSpaceTransform, struct ABP_Building_Base_C* DesiredClass); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ServerSpawnNewGridWithBuilding(struct FTransform NewGridTrans, struct ABP_Building_Base_C* DesiredClass); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ServerSetGhostClass(struct ABP_Building_Base_C* NewClass); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ToggleRotationMode(); // (BlueprintCallable|BlueprintEvent)
	void SetBuildingVariation(int32_t Variation); // (BlueprintCallable|BlueprintEvent)
	void ClientBuildingFocusChange(struct AIcarusActor* FocuedItem); // (BlueprintCallable|BlueprintEvent)
	void RemoteFocusDelayedClear(struct UObject* Class); // (BlueprintCallable|BlueprintEvent)
	void GhostActorSlowTick(); // (BlueprintCallable|BlueprintEvent)
	void AddReplacementBuilding(struct ABP_Grid_Base_C* FocusedGrid, struct FTransform WorldSpaceTransform, struct ABP_Building_Base_C* DesiredClass, struct ABP_Building_Base_C* OldBuilding, struct FItemData ItemData); // (BlueprintCallable|BlueprintEvent)
	void debug spawn rows of frames, then walls(); // (BlueprintCallable|BlueprintEvent)
	void debug add wind damage to all buildings(); // (BlueprintCallable|BlueprintEvent)
	void DebugWindDamageCycle(); // (BlueprintCallable|BlueprintEvent)
	void DebugWindDamgeSingle(); // (BlueprintCallable|BlueprintEvent)
	void debug spawn frame cube(); // (BlueprintCallable|BlueprintEvent)
	void ServerBrieflyDisableGridAutoFocus(); // (BlueprintCallable|BlueprintEvent)
	void ClientRaiseGridOffset(); // (BlueprintCallable|BlueprintEvent)
	void ClientLowerGridOffset(); // (BlueprintCallable|BlueprintEvent)
	void ServerManuallyReenableGridAutoFocus(); // (BlueprintCallable|BlueprintEvent)
	void ServerSetGridOffset(struct FVector NewGridOffset); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ResetClientHeight(); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void ServerProcessGroundHit(struct FHitResult& Hit, struct ABP_Building_Base_C* ClassToBuild, bool FreespaceBuilding); // (Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ServerProcessBuildingHit(struct FHitResult HitStruct, struct ABP_Building_Base_C* HitBuilding, struct ABP_Building_Base_C* ClassToBuild); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ServerClearBuildingCaches(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void RestrictedServerClearBuildingCaches(); // (BlueprintCallable|BlueprintEvent)
	void RestrictedServerProcessGroundHit(struct FHitResult& Hit, struct ABP_Building_Base_C* ClassToBuild, bool FreespaceBuilding); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void RestrictedServerProcessBuildingHit(struct FHitResult HitStruct, struct ABP_Building_Base_C* HitBuilding, struct ABP_Building_Base_C* ClassToBuild); // (BlueprintCallable|BlueprintEvent)
	void ServerSetRotationMode(int32_t InRotationMode); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void InvalidPlacementText(bool InvalidPlacement, struct FText InvalidReason); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_PlayerBuildingPlacement(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

