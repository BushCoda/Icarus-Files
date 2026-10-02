// Enum GeometryCollectionEngine.EChaosBreakingSortMethod
enum class EChaosBreakingSortMethod : uint8 {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosBreakingSortMethod_MAX = 5
};

// Enum GeometryCollectionEngine.EChaosCollisionSortMethod
enum class EChaosCollisionSortMethod : uint8 {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByHighestImpulse = 3,
	SortByNearestFirst = 4,
	Count = 5,
	EChaosCollisionSortMethod_MAX = 6
};

// Enum GeometryCollectionEngine.EChaosTrailingSortMethod
enum class EChaosTrailingSortMethod : uint8 {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosTrailingSortMethod_MAX = 5
};

// Enum GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8 {
	HideNone = 0,
	HideWithCollision = 1,
	HideSelected = 2,
	HideWholeCollection = 3,
	HideAll = 4,
	EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5
};

// Enum GeometryCollectionEngine.ECollectionGroupEnum
enum class ECollectionGroupEnum : uint8 {
	Chaos_Traansform = 0,
	Chaos_Max = 1
};

// Enum GeometryCollectionEngine.ECollectionAttributeEnum
enum class ECollectionAttributeEnum : uint8 {
	Chaos_Active = 0,
	Chaos_DynamicState = 1,
	Chaos_CollisionGroup = 2,
	Chaos_Max = 3
};

// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventData
struct FChaosCollisionEventData {
	struct FVector Location; 
	struct FVector Normal; 
	struct FVector Velocity1; 
	struct FVector Velocity2; 
	float Mass1; 
	float Mass2; 
	struct FVector Impulse; 
};

// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventData
struct FChaosBreakingEventData {
	struct FVector Location; 
	struct FVector Velocity; 
	float Mass; 
};

// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventData
struct FChaosTrailingEventData {
	struct FVector Location; 
	struct FVector Velocity; 
	struct FVector AngularVelocity; 
	float Mass; 
	int32_t ParticleIndex; 
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionRepData
struct FGeometryCollectionRepData {
};

// ScriptStruct GeometryCollectionEngine.GeomComponentCacheParameters
struct FGeomComponentCacheParameters {
	enum class EGeometryCollectionCacheType CacheMode; 
	struct UGeometryCollectionCache* TargetCache; 
	float ReverseCacheBeginTime; 
	bool SaveCollisionData; 
	bool DoGenerateCollisionData; 
	int32_t CollisionDataSizeMax; 
	bool DoCollisionDataSpatialHash; 
	float CollisionDataSpatialHashRadius; 
	int32_t MaxCollisionPerCell; 
	bool SaveBreakingData; 
	bool DoGenerateBreakingData; 
	int32_t BreakingDataSizeMax; 
	bool DoBreakingDataSpatialHash; 
	float BreakingDataSpatialHashRadius; 
	int32_t MaxBreakingPerCell; 
	bool SaveTrailingData; 
	bool DoGenerateTrailingData; 
	int32_t TrailingDataSizeMax; 
	float TrailingMinSpeedThreshold; 
	float TrailingMinVolumeThreshold; 
};

// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventRequestSettings
struct FChaosBreakingEventRequestSettings {
	int32_t MaxNumberOfResults; 
	float MinRadius; 
	float MinSpeed; 
	float MinMass; 
	float MaxDistance; 
	enum class EChaosBreakingSortMethod SortMethod; 
};

// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventRequestSettings
struct FChaosCollisionEventRequestSettings {
	int32_t MaxNumberResults; 
	float MinMass; 
	float MinSpeed; 
	float MinImpulse; 
	float MaxDistance; 
	enum class EChaosCollisionSortMethod SortMethod; 
};

// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventRequestSettings
struct FChaosTrailingEventRequestSettings {
	int32_t MaxNumberOfResults; 
	float MinMass; 
	float MinSpeed; 
	float MinAngularSpeed; 
	float MaxDistance; 
	enum class EChaosTrailingSortMethod SortMethod; 
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
	int32_t ID; 
	struct AChaosSolverActor* Solver; 
	struct AGeometryCollectionActor* GeometryCollection; 
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
struct FGeometryCollectionDebugDrawWarningMessage {
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionSizeSpecificData
struct FGeometryCollectionSizeSpecificData {
	float MaxSize; 
	enum class ECollisionTypeEnum CollisionType; 
	enum class EImplicitTypeEnum ImplicitType; 
	int32_t MinLevelSetResolution; 
	int32_t MaxLevelSetResolution; 
	int32_t MinClusterLevelSetResolution; 
	int32_t MaxClusterLevelSetResolution; 
	int32_t CollisionObjectReductionPercentage; 
	float CollisionParticlesFraction; 
	int32_t MaximumCollisionParticles; 
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionSource
struct FGeometryCollectionSource {
	struct FSoftObjectPath SourceGeometryObject; 
	struct FTransform LocalTransform; 
	struct TArray<struct UMaterialInterface*> SourceMaterial; 
};

