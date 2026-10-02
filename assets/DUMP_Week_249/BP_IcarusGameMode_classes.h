// BlueprintGeneratedClass BP_IcarusGameMode.BP_IcarusGameMode_C
struct ABP_IcarusGameMode_C : AIcarusGameModeSurvival {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBallisticPoolManager* BallisticPoolManager; 
	struct USceneComponent* DefaultSceneRoot; 
	int32_t DropSpawn; 
	struct FMulticastInlineDelegate PostLoginDispatcher; 
	struct TArray<struct FColor> ColorChoices; 
	int32_t ColorIndex; 
	bool CurtainRaised; 
	struct TArray<struct AController*> JoinedPlayers; 
	struct TArray<struct AController*> ToRemove; 
	struct TArray<struct FDatabaseBuildingGrid> PendingBuildingsFromDatabase; 
	struct FString LogName; 
	struct FReqCheckProspectExpired Request; 
	bool Spawned Resources; 
	bool ExoticVoxelsSpawned; 
	bool Time Initialised; 
	struct FVector AveragePlayerStartLocation; 
	int32_t DebugTestProspectTimeMinutes; 
	int32_t ExoticVoxelSpawnChance; 
	struct TSoftClassPtr<UObject> OverflowBagClassSoftRef; 
	struct AIcarusActor* LoadedOverflowBagClass; 
	struct TSoftClassPtr<UObject> GraveOverflowBagClassSoftRef; 
	struct AIcarusActor* LoadedGraveOverflowBagClass; 
	bool DeepMiningSpawned; 
	struct FOrchestrationEventsEnum DatabaseReloadCompleteEvent; 
	struct TMap<int32_t, struct FTransientDropshipInfo> PendingDynamicDrops; 
	struct TArray<struct FTransientDropshipInfo> PendingPlayersTerrainLoad; 
	struct FRandomStream ExtoicMetaSpawnStream; 
	bool FoundFlag; 
	struct FCharacterFlagsRowHandle StatToSpawnMetaDeposits; 
	struct APersistentBlockerSpawner* BlockerSpawner; 
	struct TMap<struct FPlayerCharacterID, struct FTransientLandingPadInfo> PendingPlayerIDLandingPad; 
	bool DeepWoodVeinsSpawned; 
	bool LimestoneVeinsSpawned; 

	void ResolveDeepMiningLimestoneVeins(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SpawnOverflowForReturnedItems(struct TArray<struct FItemData>& Items, struct AActor* AroundActor); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CrackFISMVoxelDirect(struct AActor* Attacker, struct AActor* Weapon, struct FHitResult HitInfo, int32_t NumHits, struct ABP_VoxelResource_Base_C* Voxel); // (Public|BlueprintCallable|BlueprintEvent)
	void CrackFISMVoxel(struct AActor* Attacker, struct AActor* Weapon, struct FHitResult HitInfo, int32_t NumHits); // (Public|BlueprintCallable|BlueprintEvent)
	void Resolve Deep Mining Wood Veins(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Try Find Nearby Player Landing Pad(struct AIcarusPlayerControllerSurvival* Player, float MaxDistance, struct FVector CompareLocation, bool& FoundLandingPad, struct FVector& OutLocation); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnLandingPadTerrainAnchor(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnFoundLandingPad(struct AActor* LandingPad, struct AIcarusPlayerControllerSurvival* Player); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TryFindPlayerLandingPad(struct AIcarusPlayerControllerSurvival* Player, bool& FoundLandingPad); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ResolveBlockers(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool DoTryReplenishExhaustedExotics(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Replenish Exotic Voxels(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReplenishExoticPlants(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Replenish World Exotics(bool& Replenished); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ResetGeyserCompletions(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheatFullyMineExoticVoxel(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheatExhaustAnExoticPlant(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheatExhaustAnExoticDeposit(); // (Public|BlueprintCallable|BlueprintEvent)
	void CheatMaxAnEnzymeCompletion(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddOrUpdatePlayerToPendingDropship(int32_t GroupIndex, struct AIcarusPlayerControllerSurvival* Player); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnDynamicDropLocationFound(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool StartFindingRocketSpawnForPlayer(int32_t SelectedGroupIndex, struct AIcarusPlayerControllerSurvival* Player); // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DoesDeepOreExistAtTransform(struct TArray<struct ABP_Deep_Mining_Ore_Deposit_Base_C*>& ExistingDeepOreDeposits, struct FTransform QueryTransform, bool& DoesExist); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	bool FindProspectTalentFromPlayers(struct FTalentsRowHandle& Talent); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FOreDepositRowHandle GetDeepOreType(int32_t Index); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetOverflowBagClass(bool IsGravestone, struct AIcarusActor* Override, struct AIcarusActor*& OverflowBagClass); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent)
	void DoSafeOverflowBagTransformCheck(struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, bool ShowDebug, struct FTransform& Transform, bool& Valid); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FindSafeOverflowBagTransform(struct FTransform DesiredTransform, struct FVector OverflowBagSize, int32_t NumHaloChecks, float StartCheckHeightOffset, float EndCheckHeightOffset, float HaloCheckDistance, bool ShowDebug, struct FTransform& Transform, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CreateAndFillOverflowBag(struct FTransform& Transform, struct TArray<struct FItemData>& ItemData, bool bIsGravestone, bool bForceSpawnAtLocation, struct AIcarusActor* ActorOverride); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ResolveExoticSpawnVoxels(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Resolve Exotic Plants(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ResolveDeepMining(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct AActor* SpawnSplineActorFromSavedState(struct FTransform& Transform, int32_t SplineTypeEnum); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void RestoreFLODRecordInstances(struct UFLODRecord* Record); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RestoreFLODGlobalInstances(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ResolveMetaDeposits(bool RemoveMined, bool& Replenished); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Update Prospect Stats(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool SetupTestProspectInfo(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AreAllGridsDoneAsyncProcessing(bool& NoQueuedGrids); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PickProspectMetaSpawns(struct FIcarusProspect Prospect, bool RemoveMined, struct FRandomStream RandomStream, struct TMap<struct ABP_IcarusMetaSpawn_C*, int32_t>& MetaSpawns); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ModifySessionEndTime(int32_t SecondsToAdd); // (Public|BlueprintCallable|BlueprintEvent)
	void OnLoaded_D18E07784085355D2849CEAE7FAC0EE7(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnFailure_C8A3F8334060A167ADB9E199DE837B0C(struct FString ErrorReason); // (BlueprintCallable|BlueprintEvent)
	void OnSuccess_C8A3F8334060A167ADB9E199DE837B0C(); // (BlueprintCallable|BlueprintEvent)
	void GameModeLog(struct FString Log, struct AController* Controller); // (BlueprintCallable|BlueprintEvent)
	void RaiseTheCurtain(); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void BuildingsWaitingForReload(); // (BlueprintCallable|BlueprintEvent)
	void OnConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer); // (Event|Public|HasOutParms|BlueprintEvent)
	void K2_OnLogout(struct AController* ExitingController); // (Event|Public|BlueprintEvent)
	void OnProspectInfoFetched(); // (BlueprintCallable|BlueprintEvent)
	void DatabaseReloadComplete(); // (Event|Public|BlueprintEvent)
	void OnConnectedPlayerMetaRecheck(struct FConnectedPlayer& ConnectedPlayer); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ResolvePlayerDependantFeatures(); // (BlueprintCallable|BlueprintEvent)
	void PostReloadResolveFeatures(); // (BlueprintCallable|BlueprintEvent)
	void OnDynamicDropTerrainLoaded(struct AIcarusPlayerControllerSurvival*& Player, int32_t GroupIndex); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void AttemptDynamicDropZoneGeneration(); // (BlueprintCallable|BlueprintEvent)
	void MeteorDirectionChanged(struct FVector MeteorDirection); // (BlueprintCallable|BlueprintEvent)
	void OnPlayerLeftByDropship(struct AIcarusPlayerControllerSurvival* Player); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_IcarusGameMode(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void PostLoginDispatcher__DelegateSignature(struct APlayerController* NewPlayer); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

