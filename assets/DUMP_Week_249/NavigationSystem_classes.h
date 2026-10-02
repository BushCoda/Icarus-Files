// Class NavigationSystem.NavigationSystemV1
struct UNavigationSystemV1 : UNavigationSystemBase {
	struct ANavigationData* MainNavData; 
	struct ANavigationData* AbstractNavData; 
	struct FName DefaultAgentName; 
	struct TSoftClassPtr<UObject> CrowdManagerClass; 
	char bAutoCreateNavigationData : 1; 
	char bSpawnNavDataInNavBoundsLevel : 1; 
	char bAllowClientSideNavigation : 1; 
	char bShouldDiscardSubLevelNavData : 1; 
	char bTickWhilePaused : 1; 
	char bSupportRebuilding : 1; 
	char bInitialBuildingLocked : 1; 
	char bSkipAgentHeightCheckWhenPickingNavData : 1; 
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1; 
	float ActiveTilesUpdateInterval; 
	enum class ENavDataGatheringModeConfig DataGatheringMode; 
	float DirtyAreaWarningSizeThreshold; 
	struct TArray<struct FNavDataConfig> SupportedAgents; 
	struct FNavAgentSelector SupportedAgentsMask; 
	struct TArray<struct ANavigationData*> NavDataSet; 
	struct TArray<struct ANavigationData*> NavDataRegistrationQueue; 
	struct FMulticastInlineDelegate OnNavDataRegisteredEvent; 
	struct FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate; 
	enum class FNavigationSystemRunMode OperationMode; 
	float DirtyAreasUpdateFreq; 

	void UnregisterNavigationInvoker(struct AActor* Invoker); // (Final|Native|Public|BlueprintCallable)
	void SimpleMoveToLocation(struct AController* Controller, struct FVector& Goal); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SimpleMoveToActor(struct AController* Controller, struct AActor* Goal); // (Final|Native|Static|Public|BlueprintCallable)
	void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs); // (Final|Native|Public|BlueprintCallable)
	void SetGeometryGatheringMode(enum class ENavDataGatheringModeConfig NewMode); // (Final|Native|Public|BlueprintCallable)
	void ResetMaxSimultaneousTileGenerationJobsCount(); // (Final|Native|Public|BlueprintCallable)
	void RegisterNavigationInvoker(struct AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius); // (Final|Native|Public|BlueprintCallable)
	struct FVector ProjectPointToNavigation(struct UObject* WorldContextObject, struct FVector& Point, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass, struct FVector QueryExtent); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void OnNavigationBoundsUpdated(struct ANavMeshBoundsVolume* NavVolume); // (Final|Native|Public|BlueprintCallable)
	bool NavigationRaycast(struct UObject* WorldContextObject, struct FVector& RayStart, struct FVector& RayEnd, struct FVector& HitLocation, struct UNavigationQueryFilter* FilterClass, struct AController* Querier); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool K2_ReplaceAreaInOctreeData(struct UObject* Object, struct UNavArea* OldArea, struct UNavArea* NewArea); // (Final|Native|Public|BlueprintCallable)
	bool K2_ProjectPointToNavigation(struct UObject* WorldContextObject, struct FVector& Point, struct FVector& ProjectedLocation, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass, struct FVector QueryExtent); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool K2_GetRandomReachablePointInRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool K2_GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool K2_GetRandomLocationInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool IsNavigationBeingBuiltOrLocked(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsNavigationBeingBuilt(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FVector GetRandomReachablePointInRadius(struct UObject* WorldContextObject, struct FVector& Origin, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	enum class ENavigationQueryResult GetPathLength(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float& PathLength, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	enum class ENavigationQueryResult GetPathCost(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float& PathCost, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct UNavigationSystemV1* GetNavigationSystem(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UNavigationPath* FindPathToLocationSynchronously(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, struct AActor* PathfindingContext, struct UNavigationQueryFilter* FilterClass); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct UNavigationPath* FindPathToActorSynchronously(struct UObject* WorldContextObject, struct FVector& PathStart, struct AActor* GoalActor, float TetherDistance, struct AActor* PathfindingContext, struct UNavigationQueryFilter* FilterClass); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
};

// Class NavigationSystem.NavigationSystemModuleConfig
struct UNavigationSystemModuleConfig : UNavigationSystemConfig {
	char bStrictlyStatic : 1; 
	char bCreateOnClient : 1; 
	char bAutoSpawnMissingNavData : 1; 
	char bSpawnNavDataInNavBoundsLevel : 1; 
};

// Class NavigationSystem.NavRelevantComponent
struct UNavRelevantComponent : UActorComponent {
	char bAttachToOwnersRoot : 1; 
	struct UObject* CachedNavParent; 

	void SetNavigationRelevancy(bool bRelevant); // (Final|Native|Public|BlueprintCallable)
};

// Class NavigationSystem.NavLinkCustomComponent
struct UNavLinkCustomComponent : UNavRelevantComponent {
	uint32_t NavLinkUserId; 
	struct UNavArea* EnabledAreaClass; 
	struct UNavArea* DisabledAreaClass; 
	struct FNavAgentSelector SupportedAgents; 
	struct FVector LinkRelativeStart; 
	struct FVector LinkRelativeEnd; 
	enum class ENavLinkDirection LinkDirection; 
	char bLinkEnabled : 1; 
	char bNotifyWhenEnabled : 1; 
	char bNotifyWhenDisabled : 1; 
	char bCreateBoxObstacle : 1; 
	struct FVector ObstacleOffset; 
	struct FVector ObstacleExtent; 
	struct UNavArea* ObstacleAreaClass; 
	float BroadcastRadius; 
	float BroadcastInterval; 
	enum class ECollisionChannel BroadcastChannel; 
};

// Class NavigationSystem.NavigationQueryFilter
struct UNavigationQueryFilter : UObject {
	struct TArray<struct FNavigationFilterArea> Areas; 
	struct FNavigationFilterFlags IncludeFlags; 
	struct FNavigationFilterFlags ExcludeFlags; 
};

// Class NavigationSystem.NavigationData
struct ANavigationData : AActor {
	struct UPrimitiveComponent* RenderingComp; 
	struct FNavDataConfig NavDataConfig; 
	char bEnableDrawing : 1; 
	char bForceRebuildOnLoad : 1; 
	char bAutoDestroyWhenNoNavigation : 1; 
	char bCanBeMainNavData : 1; 
	char bCanSpawnOnRebuild : 1; 
	char bRebuildAtRuntime : 1; 
	enum class ERuntimeGenerationType RuntimeGeneration; 
	float ObservedPathsTickInterval; 
	uint32_t DataVersion; 
	struct TArray<struct FSupportedAreaData> SupportedAreas; 
};

// Class NavigationSystem.AbstractNavData
struct AAbstractNavData : ANavigationData {
};

// Class NavigationSystem.CrowdManagerBase
struct UCrowdManagerBase : UObject {
};

// Class NavigationSystem.NavArea
struct UNavArea : UNavAreaBase {
	float DefaultCost; 
	float FixedAreaEnteringCost; 
	struct FColor DrawColor; 
	struct FNavAgentSelector SupportedAgents; 
	char bSupportsAgent0 : 1; 
	char bSupportsAgent1 : 1; 
	char bSupportsAgent2 : 1; 
	char bSupportsAgent3 : 1; 
	char bSupportsAgent4 : 1; 
	char bSupportsAgent5 : 1; 
	char bSupportsAgent6 : 1; 
	char bSupportsAgent7 : 1; 
	char bSupportsAgent8 : 1; 
	char bSupportsAgent9 : 1; 
	char bSupportsAgent10 : 1; 
	char bSupportsAgent11 : 1; 
	char bSupportsAgent12 : 1; 
	char bSupportsAgent13 : 1; 
	char bSupportsAgent14 : 1; 
	char bSupportsAgent15 : 1; 
};

// Class NavigationSystem.NavArea_Default
struct UNavArea_Default : UNavArea {
};

// Class NavigationSystem.NavArea_LowHeight
struct UNavArea_LowHeight : UNavArea {
};

// Class NavigationSystem.NavArea_Null
struct UNavArea_Null : UNavArea {
};

// Class NavigationSystem.NavArea_Obstacle
struct UNavArea_Obstacle : UNavArea {
};

// Class NavigationSystem.NavAreaMeta
struct UNavAreaMeta : UNavArea {
};

// Class NavigationSystem.NavAreaMeta_SwitchByAgent
struct UNavAreaMeta_SwitchByAgent : UNavAreaMeta {
	struct UNavArea* Agent0Area; 
	struct UNavArea* Agent1Area; 
	struct UNavArea* Agent2Area; 
	struct UNavArea* Agent3Area; 
	struct UNavArea* Agent4Area; 
	struct UNavArea* Agent5Area; 
	struct UNavArea* Agent6Area; 
	struct UNavArea* Agent7Area; 
	struct UNavArea* Agent8Area; 
	struct UNavArea* Agent9Area; 
	struct UNavArea* Agent10Area; 
	struct UNavArea* Agent11Area; 
	struct UNavArea* Agent12Area; 
	struct UNavArea* Agent13Area; 
	struct UNavArea* Agent14Area; 
	struct UNavArea* Agent15Area; 
};

// Class NavigationSystem.NavCollision
struct UNavCollision : UNavCollisionBase {
	struct TArray<struct FNavCollisionCylinder> CylinderCollision; 
	struct TArray<struct FNavCollisionBox> BoxCollision; 
	struct UNavArea* AreaClass; 
	char bGatherConvexGeometry : 1; 
	char bCreateOnClient : 1; 
};

// Class NavigationSystem.NavigationGraph
struct ANavigationGraph : ANavigationData {
};

// Class NavigationSystem.NavigationGraphNode
struct ANavigationGraphNode : AActor {
};

// Class NavigationSystem.NavigationGraphNodeComponent
struct UNavigationGraphNodeComponent : USceneComponent {
	struct FNavGraphNode Node; 
	struct UNavigationGraphNodeComponent* NextNodeComponent; 
	struct UNavigationGraphNodeComponent* PrevNodeComponent; 
};

// Class NavigationSystem.NavigationInvokerComponent
struct UNavigationInvokerComponent : UActorComponent {
	float TileGenerationRadius; 
	float TileRemovalRadius; 
};

// Class NavigationSystem.NavigationPath
struct UNavigationPath : UObject {
	struct FMulticastInlineDelegate PathUpdatedNotifier; 
	struct TArray<struct FVector> PathPoints; 
	enum class ENavigationOptionFlag RecalculateOnInvalidation; 

	bool IsValid(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsStringPulled(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsPartial(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetPathLength(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetPathCost(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FString GetDebugString(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void EnableRecalculationOnInvalidation(enum class ENavigationOptionFlag DoRecalculation); // (Final|Native|Public|BlueprintCallable)
	void EnableDebugDrawing(bool bShouldDrawDebugData, struct FLinearColor PathColor); // (Final|Native|Public|HasDefaults|BlueprintCallable)
};

// Class NavigationSystem.NavigationPathGenerator
struct UNavigationPathGenerator : UInterface {
};

// Class NavigationSystem.NavigationTestingActor
struct ANavigationTestingActor : AActor {
	struct UCapsuleComponent* CapsuleComponent; 
	struct UNavigationInvokerComponent* InvokerComponent; 
	char bActAsNavigationInvoker : 1; 
	struct FNavAgentProperties NavAgentProps; 
	struct FVector QueryingExtent; 
	struct ANavigationData* MyNavData; 
	struct FVector ProjectedLocation; 
	char bProjectedLocationValid : 1; 
	char bSearchStart : 1; 
	float CostLimitFactor; 
	float MinimumCostLimit; 
	char bBacktracking : 1; 
	char bUseHierarchicalPathfinding : 1; 
	char bGatherDetailedInfo : 1; 
	char bDrawDistanceToWall : 1; 
	char bShowNodePool : 1; 
	char bShowBestPath : 1; 
	char bShowDiffWithPreviousStep : 1; 
	char bShouldBeVisibleInGame : 1; 
	enum class ENavCostDisplay CostDisplayMode; 
	struct FVector2D TextCanvasOffset; 
	char bPathExist : 1; 
	char bPathIsPartial : 1; 
	char bPathSearchOutOfNodes : 1; 
	float PathfindingTime; 
	float PathCost; 
	int32_t PathfindingSteps; 
	struct ANavigationTestingActor* OtherActor; 
	struct UNavigationQueryFilter* FilterClass; 
	int32_t ShowStepIndex; 
	float OffsetFromCornersDistance; 
};

// Class NavigationSystem.NavLinkComponent
struct UNavLinkComponent : UPrimitiveComponent {
	struct TArray<struct FNavigationLink> Links; 
};

// Class NavigationSystem.NavLinkCustomInterface
struct UNavLinkCustomInterface : UInterface {
};

// Class NavigationSystem.NavLinkHostInterface
struct UNavLinkHostInterface : UInterface {
};

// Class NavigationSystem.NavLinkRenderingComponent
struct UNavLinkRenderingComponent : UPrimitiveComponent {
};

// Class NavigationSystem.NavLinkTrivial
struct UNavLinkTrivial : UNavLinkDefinition {
};

// Class NavigationSystem.NavMeshBoundsVolume
struct ANavMeshBoundsVolume : AVolume {
	struct FNavAgentSelector SupportedAgents; 
};

// Class NavigationSystem.NavMeshRenderingComponent
struct UNavMeshRenderingComponent : UPrimitiveComponent {
};

// Class NavigationSystem.NavModifierComponent
struct UNavModifierComponent : UNavRelevantComponent {
	struct UNavArea* AreaClass; 
	struct FVector FailsafeExtent; 
	char bIncludeAgentHeight : 1; 

	void SetAreaClass(struct UNavArea* NewAreaClass); // (Final|Native|Public|BlueprintCallable)
};

// Class NavigationSystem.NavModifierVolume
struct ANavModifierVolume : AVolume {
	struct UNavArea* AreaClass; 
	bool bMaskFillCollisionUnderneathForNavmesh; 

	void SetAreaClass(struct UNavArea* NewAreaClass); // (Final|Native|Public|BlueprintCallable)
};

// Class NavigationSystem.NavNodeInterface
struct UNavNodeInterface : UInterface {
};

// Class NavigationSystem.NavSystemConfigOverride
struct ANavSystemConfigOverride : AActor {
	struct UNavigationSystemConfig* NavigationSystemConfig; 
	enum class ENavSystemOverridePolicy OverridePolicy; 
	char bLoadOnClient : 1; 
};

// Class NavigationSystem.NavTestRenderingComponent
struct UNavTestRenderingComponent : UPrimitiveComponent {
};

// Class NavigationSystem.RecastFilter_UseDefaultArea
struct URecastFilter_UseDefaultArea : UNavigationQueryFilter {
};

// Class NavigationSystem.RecastNavMesh
struct ARecastNavMesh : ANavigationData {
	char bDrawTriangleEdges : 1; 
	char bDrawPolyEdges : 1; 
	char bDrawFilledPolys : 1; 
	char bDrawNavMeshEdges : 1; 
	char bDrawTileBounds : 1; 
	char bDrawPathCollidingGeometry : 1; 
	char bDrawTileLabels : 1; 
	char bDrawPolygonLabels : 1; 
	char bDrawDefaultPolygonCost : 1; 
	char bDrawPolygonFlags : 1; 
	char bDrawLabelsOnPathNodes : 1; 
	char bDrawNavLinks : 1; 
	char bDrawFailedNavLinks : 1; 
	char bDrawClusters : 1; 
	char bDrawOctree : 1; 
	char bDrawOctreeDetails : 1; 
	char bDrawMarkedForbiddenPolys : 1; 
	char bDistinctlyDrawTilesBeingBuilt : 1; 
	float DrawOffset; 
	char bFixedTilePoolSize : 1; 
	int32_t TilePoolSize; 
	float TileSizeUU; 
	float CellSize; 
	float CellHeight; 
	float AgentRadius; 
	float AgentHeight; 
	float AgentMaxSlope; 
	float AgentMaxStepHeight; 
	float MinRegionArea; 
	float MergeRegionSize; 
	float MaxSimplificationError; 
	int32_t MaxSimultaneousTileGenerationJobsCount; 
	int32_t TileNumberHardLimit; 
	int32_t PolyRefTileBits; 
	int32_t PolyRefNavPolyBits; 
	int32_t PolyRefSaltBits; 
	struct FVector NavMeshOriginOffset; 
	float DefaultDrawDistance; 
	float DefaultMaxSearchNodes; 
	float DefaultMaxHierarchicalSearchNodes; 
	enum class ERecastPartitioning RegionPartitioning; 
	enum class ERecastPartitioning LayerPartitioning; 
	int32_t RegionChunkSplits; 
	int32_t LayerChunkSplits; 
	char bSortNavigationAreasByCost : 1; 
	char bPerformVoxelFiltering : 1; 
	char bMarkLowHeightAreas : 1; 
	char bUseExtraTopCellWhenMarkingAreas : 1; 
	char bFilterLowSpanSequences : 1; 
	char bFilterLowSpanFromTileCache : 1; 
	char bDoFullyAsyncNavDataGathering : 1; 
	char bUseBetterOffsetsFromCorners : 1; 
	char bStoreEmptyTileLayers : 1; 
	char bUseVirtualFilters : 1; 
	char bAllowNavLinkAsPathEnd : 1; 
	char bUseVoxelCache : 1; 
	float TileSetUpdateInterval; 
	float HeuristicScale; 
	float VerticalDeviationFromGroundCompensation; 

	bool K2_ReplaceAreaInTileBounds(struct FBox Bounds, struct UNavArea* OldArea, struct UNavArea* NewArea, bool ReplaceLinks); // (Final|Native|Public|HasDefaults|BlueprintCallable)
};

// Class NavigationSystem.RecastNavMeshDataChunk
struct URecastNavMeshDataChunk : UNavigationDataChunk {
};

