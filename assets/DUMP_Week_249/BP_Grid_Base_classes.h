// BlueprintGeneratedClass BP_Grid_Base.BP_Grid_Base_C
struct ABP_Grid_Base_C : ABuildingGridBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UIcarusMapIconComponent* IcarusMapIcon; 
	struct UBP_BuildingAudioComponent_C* BP_BuildingAudioComponent; 
	struct UArrowComponent* Arrow; 
	struct USceneComponent* DefaultSceneRoot; 
	struct FVector GridSize; 
	struct TArray<struct ABP_Building_Base_C*> BuilldingsToAnchorReinit; 
	struct TArray<struct ABP_Building_Base_C*> BuildingsToPushHardStab; 
	int32_t MaxBuildingSearchDistance; 
	struct TArray<struct ABuildingBase*> BuildingsToStartDestroy; 
	struct FMulticastInlineDelegate QueuesEmptied; 
	bool Queued; 
	bool AutomaticResumingDestructionEnabled; 
	struct TArray<struct ABP_Building_Base_C*> OnFireBuildings; 
	struct TArray<struct ABP_Building_Base_C*> CurrentWindDamagedBuildings; 
	struct TArray<struct ABP_Building_Base_C*> Buildings to Record; 
	float Burn Time Remaining; 
	struct TArray<struct ABP_Building_Base_C*> ActiveOverweightBuilding; 
	bool DirtyTerrainChecks; 
	bool Sorted; 
	struct TArray<struct ABP_Building_Base_C*> WeatherChoiceInternalDirtiedBuildings; 
	struct TArray<struct ABP_Building_Base_C*> WeatherChoiceInternalBuffer; 
	struct TMap<float, struct FActorArrayStruct> AltitudeMap_OLD; 
	struct TMap<float, struct FActorArrayStruct> BuildingsByTier_OLD; 
	struct TArray<struct ABP_Building_Base_C*> BuildingsSelectedForWindDamage_OLD; 
	struct TArray<float> AscendingSortedBuildingTiers_OLD; 
	struct TArray<float> DescendingSortedBuildingAltitudes; 
	struct TArray<float> DescendingAltitudesQuartiles_OLD; 
	int32_t MaxBuildingSelection_OLD; 
	int32_t CurrentAltitudeQuartile; 
	int32_t BuildingCount_OLD; 
	int32_t CurrentSelectionTierMaxIndex; 
	float WeatherSortingTierPercentage; 
	struct TArray<struct ABP_Building_Base_C*> StrippingBuildings; 
	struct TArray<struct ABP_Building_Base_C*> ReloadedBuildings; 
	float TerrainAnchorValidTime; 
	bool WaitingForTerrainAnchor; 
	struct TArray<struct ABP_Building_Base_C*> UnzippableChain; 
	struct TArray<struct ABP_Building_Base_C*> UnzippableChainInternalWorking; 
	struct TArray<struct ABP_Building_Base_C*> UnzippableChainInternalBest; 
	int32_t DesiredUnzipCount; 
	struct TArray<struct ABP_Building_Base_C*> UnzippableStarterBuildingBuffer; 
	bool PerformingUnzip; 
	float LastUnzipStormTier; 
	int32_t UnzipCycleCounter; 
	int32_t UnzipCycleMaxCount; 
	float LastUnzipCountMultiplier; 
	float LastUnzipDamageMultiplier; 
	struct TMap<struct ABP_Building_Base_C*, int32_t> PendingBuildingHealthUpdates; 
	struct TArray<struct FAlterationsEnum> MBuildingAlterations; 
	struct TArray<struct FIcarusStatReplicated> MBuildingAdditionalStats; 

	void GetModifiers(struct AActor* Building, struct TArray<struct FModifierStateSaveData>& Array); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void DoPurgeActorsMovedToSubLevel(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AppendUniqueBuildingArrayByRef(struct TArray<struct ABuildingBase*>& Source, struct TArray<struct ABuildingBase*>& Target); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void LoadGridAndBuildingsFromRecord(struct UBuildingGridRecorderComponent* RecorderComponent); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetGridBuildingDataForRecord(struct UBuildingGridRecorderComponent* RecorderComponent); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool GetIsQueued(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void AppendUniqueBuildingArray(struct TArray<struct ABuildingBase*>& Array 1, struct TArray<struct ABuildingBase*>& Array 2, struct TArray<struct ABuildingBase*>& Array1UniquelyAddedTo2); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct FSerializedGrid SerializeForSaveGame(struct AActor* Origin); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool TryAddNewBuildingFromWorldSpace(struct FTransform WorldSpaceTransform, struct ABuildingBase* DesiredClass, bool bAlternateRotation, struct FItemData Item, struct ABuildingBase*& Building); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GatherUnzipLink(struct ABP_Building_Base_C* Building, struct TArray<struct ABP_Building_Base_C*>& NewlyGatheredLinks); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GatherAllUnzipLinks(struct TArray<struct ABP_Building_Base_C*>& Building, struct TArray<struct ABP_Building_Base_C*>& NewlyGatheredLinks); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsBuildingPlanar(struct ABP_Building_Base_C* Building1, struct ABP_Building_Base_C* Building2, bool& IsPlanar); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void InitBuilding Weather Selection Size(); // (Public|BlueprintCallable|BlueprintEvent)
	void WeatherSortingDebug(); // (Public|BlueprintCallable|BlueprintEvent)
	void SortAltitudeKeys(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SortTierKeys(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UnrecordBuildingsByTier(struct ABP_Building_Base_C* Building); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UnrecordZHeight(struct ABP_Building_Base_C* Building); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RecordBuildingsByTier(struct ABP_Building_Base_C* Building); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RecordZHeight(struct ABP_Building_Base_C* Building); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsTerrainAnchorValid(bool& TerrainLoaded); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SelectBuildingForWindDamage(float StormTier, struct ABP_Building_Base_C*& SelectedBuilding); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FireSlowAmount(float& SlowAmount); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void RemoveBuildingOnFire(struct ABP_Building_Base_C*& OnFireBuilding); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void AddBuildingOnFire(struct ABP_Building_Base_C*& OnFireBuilding); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void DefaultShiftsFromGridSpaceRotations(struct FRotator GridSpaceRotation, struct FVector& Shift); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Round Grid Space Rot to Valid Grid Space Rot(struct FRotator inGridSpaceRot, struct FRotator& RoundedGridSpaceRot); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Round World Space Rot to Valid World Space Rot(struct FRotator WorldSpaceRot, struct FRotator& RoundedWorldSpaceRot, struct FVector& DefaultShiftsFromGridspaceRot); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FString debugprint(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void AddSortedBuildingToAnchorReinit(struct ABP_Building_Base_C* BuildingToAdd); // (Public|BlueprintCallable|BlueprintEvent)
	void BlockGridspaceRotatedToGridSpaceNotRotated(struct FVector Gridspace, struct FRotator WorldRot, struct FVector& GridSpaceWithNoRot); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void WorldSpaceToGridSpaceFloored(struct FTransform InWorldTransform, bool AlternateRotation, struct ABP_Building_Base_C* BuildingClass, struct FTransform& OutGridTransform); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetNeighbors(struct ABP_Building_Base_C* Building, struct TArray<struct ABP_Building_Base_C*>& TouchedBuildings); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void StartBuildingSearch(struct ABP_Building_Base_C* StartingBuilding, int32_t StartingDepth, struct TArray<struct ABP_Building_Base_C*>& BuildingArray); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RemoveBuildingFromGrid(struct ABP_Building_Base_C* RemovedBuilding); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DownShift(struct FTransform GridspaceLocWithWorldRot, struct FTransform& ShiftedLoc); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpShift(struct FTransform GridspaceLocWithWorldRot, struct FTransform& ShiftedLoc); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void BackwardsShift(struct FTransform GridspaceLocWithWorldRot, struct FTransform& ShiftedLoc); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ForwardShift(struct FTransform GridspaceLocWithWorldRot, struct FTransform& ShiftedLoc); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void RightShift(struct FTransform GridspaceLocWithWorldRot, struct FTransform& ShiftedLoc); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void LeftShift(struct FTransform GridspaceLocWithWorldRot, struct FTransform& ShiftedTrans); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void DownAndReverse(struct FTransform InTrans, struct FTransform& OutTrans); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Rotate(struct FTransform InTrans, struct FTransform& OutTrans); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Reverse(struct FTransform InTrans, struct FTransform& OutTrans); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BuildingSpecificAlternateRotations(struct FTransform InTrans, struct ABuildingBase* BuildingClass, struct FTransform& OutTrans); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GridSpaceToWorldSpace(struct FTransform InGridSpaceTransform, struct FTransform& OutWorldSpaceTransform); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void WorldSpaceToGridSpaceRounded(struct FTransform InWorldTransform, bool AlternateRotation, struct ABuildingBase* BuildingClass, bool ShouldSnapToGrid, struct FTransform& OutGridTransform); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsVectorPairEqual(struct FVectorPair Pair1, struct FVectorPair pair2, bool& Equal); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void CanAddBuilding(struct ABP_Building_Base_C* NewBuilding, struct FTransform GridSpaceTransform, bool& bLocked); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheckBuildingLocationFromWorldspaceRounded(struct FTransform WorldSpaceTransform, struct ABP_Building_Base_C* BuildingType, bool AlternateRotation, bool ShouldSnapToGrid, struct FTransform& OutWorldSpaceTransform, bool& bLocked, struct FTransform& OutGridSpaceTransform); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Handle Try Add New Building from World Space(struct FTransform World Space Transform, struct ABP_Building_Base_C* DesiredClass, bool AlternateRotation, struct FItemData Item, bool ShouldSnapToGrid, int32_t ForcedUID, bool& Success, struct ABP_Building_Base_C*& Building); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnDeferredGridLoadBegin(struct UBuildingGridRecorderComponent* RecorderComponent); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnDeferredGridLoadEnd(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void LoadSingleBuildingFromRecord(struct FName BuildableRowName, struct FName BuildingItemStaticRowName, struct FBuildingInfo& BuildingInfo); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PrepareUnzip(); // (BlueprintCallable|BlueprintEvent)
	void PerformUnzip(); // (BlueprintCallable|BlueprintEvent)
	void Prepare and perform Unzip(float StormTier, float UnzipCountMultiplier, float UnzipDamageMultiplier); // (BlueprintCallable|BlueprintEvent)
	void WeatherSortingTick(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void OnTerrainAnchorStateChanged(); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void AddChildBuildingToDestroy(struct ABuildingBase* BuildingToDestroy); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void SetAutomaticResumingDestructionEnabled(bool bEnabled); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void SetQueued(bool bQueued); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void PurgeActorsMovedToSubLevel(); // (Event|Public|BlueprintEvent)
	void StartReloadingBuildingHealth(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Grid_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void QueuesEmptied__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

