// Enum HairStrandsCore.EHairCardsSourceType
enum class EHairCardsSourceType : uint8 {
	Procedural = 0,
	Imported = 1,
	EHairCardsSourceType_MAX = 2
};

// Enum HairStrandsCore.EHairCardsGenerationType
enum class EHairCardsGenerationType : uint8 {
	CardsCount = 0,
	UseGuides = 1,
	EHairCardsGenerationType_MAX = 2
};

// Enum HairStrandsCore.EHairCardsClusterType
enum class EHairCardsClusterType : uint8 {
	Low = 0,
	High = 1,
	EHairCardsClusterType_MAX = 2
};

// Enum HairStrandsCore.EGroomGeometryType
enum class EGroomGeometryType : uint8 {
	Strands = 0,
	Cards = 1,
	Meshes = 2,
	EGroomGeometryType_MAX = 3
};

// Enum HairStrandsCore.EHairLODSelectionType
enum class EHairLODSelectionType : uint8 {
	Cpu = 0,
	Gpu = 1,
	EHairLODSelectionType_MAX = 2
};

// Enum HairStrandsCore.EHairInterpolationWeight
enum class EHairInterpolationWeight : uint8 {
	Parametric = 0,
	Root = 1,
	Index = 2,
	Unknown = 3,
	EHairInterpolationWeight_MAX = 4
};

// Enum HairStrandsCore.EHairInterpolationQuality
enum class EHairInterpolationQuality : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Unknown = 3,
	EHairInterpolationQuality_MAX = 4
};

// Enum HairStrandsCore.EGroomInterpolationType
enum class EGroomInterpolationType : uint8 {
	None = 0,
	RigidTransform = 2,
	OffsetTransform = 4,
	SmoothTransform = 8,
	EGroomInterpolationType_MAX = 9
};

// Enum HairStrandsCore.EGroomStrandsSize
enum class EGroomStrandsSize : uint8 {
	None = 0,
	Size2 = 2,
	Size4 = 4,
	Size8 = 8,
	Size16 = 16,
	Size32 = 32,
	EGroomStrandsSize_MAX = 33
};

// Enum HairStrandsCore.EGroomNiagaraSolvers
enum class EGroomNiagaraSolvers : uint8 {
	None = 0,
	CosseratRods = 2,
	AngularSprings = 4,
	CustomSolver = 8,
	EGroomNiagaraSolvers_MAX = 9
};

// Enum HairStrandsCore.EGroomBindingMeshType
enum class EGroomBindingMeshType : uint8 {
	SkeletalMesh = 0,
	GeometryCache = 1,
	EGroomBindingMeshType_MAX = 2
};

// Enum HairStrandsCore.EGroomCacheType
enum class EGroomCacheType : uint8 {
	None = 0,
	Strands = 1,
	Guides = 2,
	EGroomCacheType_MAX = 3
};

// Enum HairStrandsCore.EGroomCacheAttributes
enum class EGroomCacheAttributes : uint8 {
	None = 0,
	Position = 1,
	Width = 2,
	Color = 4,
	EGroomCacheAttributes_MAX = 5
};

// Enum HairStrandsCore.EFollicleMaskChannel
enum class EFollicleMaskChannel : uint8 {
	R = 0,
	G = 1,
	B = 2,
	A = 3,
	EFollicleMaskChannel_MAX = 4
};

// Enum HairStrandsCore.EStrandsTexturesMeshType
enum class EStrandsTexturesMeshType : uint8 {
	Static = 0,
	Skeletal = 1,
	EStrandsTexturesMeshType_MAX = 2
};

// Enum HairStrandsCore.EStrandsTexturesTraceType
enum class EStrandsTexturesTraceType : uint8 {
	TraceInside = 0,
	TraceOuside = 1,
	TraceBidirectional = 2,
	EStrandsTexturesTraceType_MAX = 3
};

// Enum HairStrandsCore.EGroomInterpolationWeight
enum class EGroomInterpolationWeight : uint8 {
	Parametric = 0,
	Root = 1,
	Index = 2,
	Unknown = 3,
	EGroomInterpolationWeight_MAX = 4
};

// Enum HairStrandsCore.EGroomInterpolationQuality
enum class EGroomInterpolationQuality : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Unknown = 3,
	EGroomInterpolationQuality_MAX = 4
};

// ScriptStruct HairStrandsCore.HairGroupInfo
struct FHairGroupInfo {
	int32_t GroupID; 
	int32_t NumCurves; 
	int32_t NumGuides; 
	int32_t NumCurveVertices; 
	int32_t NumGuideVertices; 
	float MaxCurveLength; 
};

// ScriptStruct HairStrandsCore.HairGroupInfoWithVisibility
struct FHairGroupInfoWithVisibility : FHairGroupInfo {
	bool bIsVisible; 
};

// ScriptStruct HairStrandsCore.HairGroupsMaterial
struct FHairGroupsMaterial {
	struct UMaterialInterface* Material; 
	struct FName SlotName; 
};

// ScriptStruct HairStrandsCore.HairGroupsCardsSourceDescription
struct FHairGroupsCardsSourceDescription {
	struct UMaterialInterface* Material; 
	struct FName MaterialSlotName; 
	enum class EHairCardsSourceType SourceType; 
	struct UStaticMesh* ProceduralMesh; 
	struct FString ProceduralMeshKey; 
	struct UStaticMesh* ImportedMesh; 
	struct FHairGroupsProceduralCards ProceduralSettings; 
	struct FHairGroupCardsTextures Textures; 
	int32_t GroupIndex; 
	int32_t LODIndex; 
	struct FHairGroupCardsInfo CardsInfo; 
	struct FString ImportedMeshKey; 
};

// ScriptStruct HairStrandsCore.HairGroupCardsInfo
struct FHairGroupCardsInfo {
	int32_t NumCards; 
	int32_t NumCardVertices; 
};

// ScriptStruct HairStrandsCore.HairGroupCardsTextures
struct FHairGroupCardsTextures {
	struct UTexture2D* DepthTexture; 
	struct UTexture2D* CoverageTexture; 
	struct UTexture2D* TangentTexture; 
	struct UTexture2D* AttributeTexture; 
	struct UTexture2D* AuxilaryDataTexture; 
};

// ScriptStruct HairStrandsCore.HairGroupsProceduralCards
struct FHairGroupsProceduralCards {
	struct FHairCardsClusterSettings ClusterSettings; 
	struct FHairCardsGeometrySettings GeometrySettings; 
	struct FHairCardsTextureSettings TextureSettings; 
	int32_t Version; 
};

// ScriptStruct HairStrandsCore.HairCardsTextureSettings
struct FHairCardsTextureSettings {
	int32_t AtlasMaxResolution; 
	int32_t PixelPerCentimeters; 
	int32_t LengthTextureCount; 
	int32_t DensityTextureCount; 
};

// ScriptStruct HairStrandsCore.HairCardsGeometrySettings
struct FHairCardsGeometrySettings {
	enum class EHairCardsGenerationType GenerationType; 
	int32_t CardsCount; 
	enum class EHairCardsClusterType ClusterType; 
	float MinSegmentLength; 
	float AngularThreshold; 
	float MinCardsLength; 
	float MaxCardsLength; 
};

// ScriptStruct HairStrandsCore.HairCardsClusterSettings
struct FHairCardsClusterSettings {
	float ClusterDecimation; 
	enum class EHairCardsClusterType Type; 
	bool bUseGuide; 
};

// ScriptStruct HairStrandsCore.HairGroupsLOD
struct FHairGroupsLOD {
	struct TArray<struct FHairLODSettings> LODs; 
	float ClusterWorldSize; 
	float ClusterScreenSizeScale; 
};

// ScriptStruct HairStrandsCore.HairLODSettings
struct FHairLODSettings {
	float CurveDecimation; 
	float VertexDecimation; 
	float AngularThreshold; 
	float ScreenSize; 
	float ThicknessScale; 
	bool bVisible; 
	enum class EGroomGeometryType GeometryType; 
};

// ScriptStruct HairStrandsCore.HairGroupsInterpolation
struct FHairGroupsInterpolation {
	struct FHairDecimationSettings DecimationSettings; 
	struct FHairInterpolationSettings InterpolationSettings; 
};

// ScriptStruct HairStrandsCore.HairInterpolationSettings
struct FHairInterpolationSettings {
	bool bOverrideGuides; 
	float HairToGuideDensity; 
	enum class EHairInterpolationQuality InterpolationQuality; 
	enum class EHairInterpolationWeight InterpolationDistance; 
	bool bRandomizeGuide; 
	bool bUseUniqueGuide; 
};

// ScriptStruct HairStrandsCore.HairDecimationSettings
struct FHairDecimationSettings {
	float CurveDecimation; 
	float VertexDecimation; 
};

// ScriptStruct HairStrandsCore.HairGroupsMeshesSourceDescription
struct FHairGroupsMeshesSourceDescription {
	struct UMaterialInterface* Material; 
	struct FName MaterialSlotName; 
	struct UStaticMesh* ImportedMesh; 
	struct FHairGroupCardsTextures Textures; 
	int32_t GroupIndex; 
	int32_t LODIndex; 
	struct FString ImportedMeshKey; 
};

// ScriptStruct HairStrandsCore.HairGroupsPhysics
struct FHairGroupsPhysics {
	struct FHairSolverSettings SolverSettings; 
	struct FHairExternalForces ExternalForces; 
	struct FHairMaterialConstraints MaterialConstraints; 
	struct FHairStrandsParameters StrandsParameters; 
};

// ScriptStruct HairStrandsCore.HairStrandsParameters
struct FHairStrandsParameters {
	enum class EGroomStrandsSize StrandsSize; 
	float StrandsDensity; 
	float StrandsSmoothing; 
	float StrandsThickness; 
	struct FRuntimeFloatCurve ThicknessScale; 
};

// ScriptStruct HairStrandsCore.HairMaterialConstraints
struct FHairMaterialConstraints {
	struct FHairBendConstraint BendConstraint; 
	struct FHairStretchConstraint StretchConstraint; 
	struct FHairCollisionConstraint CollisionConstraint; 
};

// ScriptStruct HairStrandsCore.HairCollisionConstraint
struct FHairCollisionConstraint {
	bool SolveCollision; 
	bool ProjectCollision; 
	float StaticFriction; 
	float KineticFriction; 
	float StrandsViscosity; 
	struct FIntVector GridDimension; 
	float CollisionRadius; 
	struct FRuntimeFloatCurve RadiusScale; 
};

// ScriptStruct HairStrandsCore.HairStretchConstraint
struct FHairStretchConstraint {
	bool SolveStretch; 
	bool ProjectStretch; 
	float StretchDamping; 
	float StretchStiffness; 
	struct FRuntimeFloatCurve StretchScale; 
};

// ScriptStruct HairStrandsCore.HairBendConstraint
struct FHairBendConstraint {
	bool SolveBend; 
	bool ProjectBend; 
	float BendDamping; 
	float BendStiffness; 
	struct FRuntimeFloatCurve BendScale; 
};

// ScriptStruct HairStrandsCore.HairExternalForces
struct FHairExternalForces {
	struct FVector GravityVector; 
	float AirDrag; 
	struct FVector AirVelocity; 
};

// ScriptStruct HairStrandsCore.HairSolverSettings
struct FHairSolverSettings {
	bool EnableSimulation; 
	enum class EGroomNiagaraSolvers NiagaraSolver; 
	struct TSoftObjectPtr<UNiagaraSystem> CustomSystem; 
	int32_t SubSteps; 
	int32_t IterationCount; 
};

// ScriptStruct HairStrandsCore.HairGroupsRendering
struct FHairGroupsRendering {
	struct FName MaterialSlotName; 
	struct UMaterialInterface* Material; 
	struct FHairGeometrySettings GeometrySettings; 
	struct FHairShadowSettings ShadowSettings; 
	struct FHairAdvancedRenderingSettings AdvancedSettings; 
};

// ScriptStruct HairStrandsCore.HairAdvancedRenderingSettings
struct FHairAdvancedRenderingSettings {
	bool bUseStableRasterization; 
	bool bScatterSceneLighting; 
};

// ScriptStruct HairStrandsCore.HairShadowSettings
struct FHairShadowSettings {
	float HairShadowDensity; 
	float HairRaytracingRadiusScale; 
	bool bUseHairRaytracingGeometry; 
	bool bVoxelize; 
};

// ScriptStruct HairStrandsCore.HairGeometrySettings
struct FHairGeometrySettings {
	float HairWidth; 
	float HairRootScale; 
	float HairTipScale; 
	float HairClipScale; 
};

// ScriptStruct HairStrandsCore.GoomBindingGroupInfo
struct FGoomBindingGroupInfo {
	int32_t RenRootCount; 
	int32_t RenLODCount; 
	int32_t SimRootCount; 
	int32_t SimLODCount; 
};

// ScriptStruct HairStrandsCore.GroomCacheInfo
struct FGroomCacheInfo {
	int32_t Version; 
	enum class EGroomCacheType Type; 
	struct FGroomAnimationInfo AnimationInfo; 
};

// ScriptStruct HairStrandsCore.GroomAnimationInfo
struct FGroomAnimationInfo {
	uint32_t NumFrames; 
	float SecondsPerFrame; 
	float Duration; 
	float StartTime; 
	float EndTime; 
	int32_t StartFrame; 
	int32_t EndFrame; 
	enum class EGroomCacheAttributes Attributes; 
};

// ScriptStruct HairStrandsCore.GroomCacheImportSettings
struct FGroomCacheImportSettings {
	bool bImportGroomCache; 
	bool bImportGroomAsset; 
	struct FSoftObjectPath GroomAsset; 
};

// ScriptStruct HairStrandsCore.FollicleMaskOptions
struct FFollicleMaskOptions {
	struct UGroomAsset* Groom; 
	enum class EFollicleMaskChannel Channel; 
};

// ScriptStruct HairStrandsCore.HairGroupDesc
struct FHairGroupDesc {
	float HairLength; 
	float HairWidth; 
	bool HairWidth_Override; 
	float HairRootScale; 
	bool HairRootScale_Override; 
	float HairTipScale; 
	bool HairTipScale_Override; 
	float HairClipScale; 
	bool HairClipScale_Override; 
	float HairShadowDensity; 
	bool HairShadowDensity_Override; 
	float HairRaytracingRadiusScale; 
	bool HairRaytracingRadiusScale_Override; 
	bool bUseHairRaytracingGeometry; 
	bool bUseHairRaytracingGeometry_Override; 
	float LODBias; 
	bool bUseStableRasterization; 
	bool bUseStableRasterization_Override; 
	bool bScatterSceneLighting; 
	bool bScatterSceneLighting_Override; 
	bool bSupportVoxelization; 
	bool bSupportVoxelization_Override; 
	int32_t LODForcedIndex; 
};

// ScriptStruct HairStrandsCore.GroomHairGroupPreview
struct FGroomHairGroupPreview {
	int32_t GroupID; 
	int32_t CurveCount; 
	int32_t GuideCount; 
	struct FHairGroupsInterpolation InterpolationSettings; 
};

// ScriptStruct HairStrandsCore.GroomBuildSettings
struct FGroomBuildSettings {
	bool bOverrideGuides; 
	float HairToGuideDensity; 
	enum class EGroomInterpolationQuality InterpolationQuality; 
	enum class EGroomInterpolationWeight InterpolationDistance; 
	bool bRandomizeGuide; 
	bool bUseUniqueGuide; 
};

// ScriptStruct HairStrandsCore.GroomConversionSettings
struct FGroomConversionSettings {
	struct FVector Rotation; 
	struct FVector Scale; 
};

// ScriptStruct HairStrandsCore.MovieSceneGroomCacheParams
struct FMovieSceneGroomCacheParams {
	struct UGroomCache* GroomCache; 
	struct FFrameNumber FirstLoopStartFrameOffset; 
	struct FFrameNumber StartFrameOffset; 
	struct FFrameNumber EndFrameOffset; 
	float PlayRate; 
	char bReverse : 1; 
};

// ScriptStruct HairStrandsCore.MovieSceneGroomCacheSectionTemplate
struct FMovieSceneGroomCacheSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneGroomCacheSectionTemplateParameters Params; 
};

// ScriptStruct HairStrandsCore.MovieSceneGroomCacheSectionTemplateParameters
struct FMovieSceneGroomCacheSectionTemplateParameters : FMovieSceneGroomCacheParams {
	struct FFrameNumber SectionStartTime; 
	struct FFrameNumber SectionEndTime; 
};

