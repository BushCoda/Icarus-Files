// BlueprintGeneratedClass BP_Settlement.BP_Settlement_C
struct ABP_Settlement_C : ASettlement {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UIcarusMapIconComponent* IcarusMapIcon; 
	struct UIcarusNavigationDirtier* IcarusNavigationDirtier; 
	struct UBP_UIProjectionComponent_Settlement_C* BP_UIProjectionComponent_Settlement; 
	struct UNavModifierComponent* NavModifier; 
	struct UInstancedStaticMeshComponent* InstancedStaticMesh_Walls; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UHighlightableComponent* Highlightable; 
	struct UInteractableComponent* Interactable; 
	struct UBoxComponent* Collision_Interact; 
	struct UWidgetComponent* Widget_Status; 
	struct UStaticMeshComponent* StaticMesh; 
	struct USceneComponent* DefaultSceneRoot; 
	bool WallNeedsUpdate; 
	int32_t PreviousSettlementRange; 
	int32_t PreviewWallTypeEnum; 
	struct FSettlementNPCTask DecisionRequestTask; 
	struct TArray<struct AActor*> GateActors; 
	struct TArray<struct AActor*> ActiveRaidSpawns; 
	struct FSettlementRaidsRowHandle ActiveRaid; 
	struct FTimerHandle RaidTickTimer; 
	struct FScaledAISpawnWaveData ActiveRaidWave; 
	struct UEnvQuery* RaidEQS; 
	float RaidSpawnRadius; 
	int32_t CurrentWaveSpawnCountTarget; 
	struct FScaledSpawnWaveUnit NextRaidSpawn; 
	struct TMap<struct FAISetupRowHandle, int32_t> CompletedRaidSpawns; 
	struct TMap<struct FAISetupRowHandle, float> LastRaidSpawnTime; 
	int32_t CurrentWaveIndex; 
	float RaidStartTime; 
	float RaidEndTime; 
	float RaidProgress; 
	float ActiveRaidStrength; 
	int32_t NumTotalRaidAISpawned; 
	int32_t NumTotalRaidAIKilled; 
	bool HasCompletedRaidSpawning; 
	struct TMap<struct FGuid, struct UWidgetComponent*> ActiveTaskWidgets; 

	int32_t GetSpawnAttractorEffectiveRadius(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	int32_t GetSpawnBlockerEffectiveRadius(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void UpdateInWorldTaskWidgets(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnSpawnedRaidAIDeath(struct UActorState* ActorState); // (Public|BlueprintCallable|BlueprintEvent)
	void TickRaidSpawns(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_ActiveRaid(); // (BlueprintCallable|BlueprintEvent)
	void UpdateRaidProgress(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetRaidProgress(float& CompletionPercent, float& TimeRemainingPercent); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetTotalRaidAISpawnedThisWave(int32_t& TotalUnitsSpawned); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void ResolveRaid(bool WasSuccessful); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnSpawnedRaidAIEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (Public|BlueprintCallable|BlueprintEvent)
	void ConfigureSpawnedRaidUnit(struct AActor* SpawnedActor); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SpawnRaidAI(struct FVector WorldLocation); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CanSpawnRaidUnit(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void TickActiveRaid(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetNumRaidSpawnsOfType(struct FAISetupRowHandle AISetup, int32_t& NumActive, float& YoungestAge); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PickNextRaidAIToSpawn(struct FScaledAISpawnWaveData& SpawnConfig, struct FScaledSpawnWaveUnit& SeletedSpawn, bool& HasCompletedWave, bool& ValidSpawn); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TryResolveRaid(struct FSettlementEventsRowHandle& EventRow); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ActiveEventChanged(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnTaskCompleted(struct FSettlementNPCTask& Task); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ClearFLODWithinBoundary(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetSettlementWallMeshes(struct UStaticMesh*& WallMesh, struct USkeletalMesh*& GateMesh, struct UAnimSequence*& GateAnimation); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void ServerOnStatContainerUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FTransform GetNPCSpawnTransform(struct FSettlementNPC& NPC); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetBoundaryAffectingActors(struct TArray<struct AActor*>& OutActors); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	void UpdateWall(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TryUpdateTaskProgress(struct FSettlementNPCTask& Task, float ProspectTimeDelta); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnBuildingRegistered(struct ASettlementBuilding* Building); // (Event|Public|BlueprintEvent)
	void OnBuildingUnregistered(struct ASettlementBuilding* Building); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ResetWall(); // (Event|Protected|BlueprintEvent)
	void OnInventoryItemAdded(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void OnTerrainAnchorStateChanged(); // (Event|Public|BlueprintEvent)
	void OnQueryFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void TrySpawnRaidAI(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Settlement(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

