// Enum NavigationSystem.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8 {
	Static = 0,
	DynamicModifiersOnly = 1,
	Dynamic = 2,
	LegacyGeneration = 3,
	ERuntimeGenerationType_MAX = 4
};

// Enum NavigationSystem.ENavCostDisplay
enum class ENavCostDisplay : uint8 {
	TotalCost = 0,
	HeuristicOnly = 1,
	RealCostOnly = 2,
	ENavCostDisplay_MAX = 3
};

// Enum NavigationSystem.ENavSystemOverridePolicy
enum class ENavSystemOverridePolicy : uint8 {
	Override = 0,
	Append = 1,
	Skip = 2,
	ENavSystemOverridePolicy_MAX = 3
};

// Enum NavigationSystem.ERecastPartitioning
enum class ERecastPartitioning : uint8 {
	Monotone = 0,
	Watershed = 1,
	ChunkyMonotone = 2,
	ERecastPartitioning_MAX = 3
};

// ScriptStruct NavigationSystem.NavCollisionBox
struct FNavCollisionBox {
	struct FVector Offset; 
	struct FVector Extent; 
};

// ScriptStruct NavigationSystem.NavCollisionCylinder
struct FNavCollisionCylinder {
	struct FVector Offset; 
	float Radius; 
	float Height; 
};

// ScriptStruct NavigationSystem.SupportedAreaData
struct FSupportedAreaData {
	struct FString AreaClassName; 
	int32_t AreaID; 
	struct UObject* AreaClass; 
};

// ScriptStruct NavigationSystem.NavGraphNode
struct FNavGraphNode {
	struct UObject* Owner; 
};

// ScriptStruct NavigationSystem.NavGraphEdge
struct FNavGraphEdge {
};

// ScriptStruct NavigationSystem.NavigationFilterFlags
struct FNavigationFilterFlags {
	char bNavFlag0 : 1; 
	char bNavFlag1 : 1; 
	char bNavFlag2 : 1; 
	char bNavFlag3 : 1; 
	char bNavFlag4 : 1; 
	char bNavFlag5 : 1; 
	char bNavFlag6 : 1; 
	char bNavFlag7 : 1; 
	char bNavFlag8 : 1; 
	char bNavFlag9 : 1; 
	char bNavFlag10 : 1; 
	char bNavFlag11 : 1; 
	char bNavFlag12 : 1; 
	char bNavFlag13 : 1; 
	char bNavFlag14 : 1; 
	char bNavFlag15 : 1; 
};

// ScriptStruct NavigationSystem.NavigationFilterArea
struct FNavigationFilterArea {
	struct UNavArea* AreaClass; 
	float TravelCostOverride; 
	float EnteringCostOverride; 
	char bIsExcluded : 1; 
	char bOverrideTravelCost : 1; 
	char bOverrideEnteringCost : 1; 
};

// ScriptStruct NavigationSystem.NavLinkCustomInstanceData
struct FNavLinkCustomInstanceData : FActorComponentInstanceData {
	uint32_t NavLinkUserId; 
};

// ScriptStruct NavigationSystem.RecastNavMeshGenerationProperties
struct FRecastNavMeshGenerationProperties {
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
	int32_t TileNumberHardLimit; 
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
	char bFixedTilePoolSize : 1; 
};

