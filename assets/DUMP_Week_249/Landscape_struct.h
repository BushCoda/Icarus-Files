// Enum Landscape.ELandscapeBlendMode
enum class ELandscapeBlendMode : uint8 {
	LSBM_AdditiveBlend = 0,
	LSBM_AlphaBlend = 1,
	LSBM_MAX = 2
};

// Enum Landscape.EWeightmapRTType
enum class EWeightmapRTType : uint8 {
	WeightmapRT_Scratch_RGBA = 0,
	WeightmapRT_Scratch1 = 1,
	WeightmapRT_Scratch2 = 2,
	WeightmapRT_Scratch3 = 3,
	WeightmapRT_Mip0 = 4,
	WeightmapRT_Mip1 = 5,
	WeightmapRT_Mip2 = 6,
	WeightmapRT_Mip3 = 7,
	WeightmapRT_Mip4 = 8,
	WeightmapRT_Mip5 = 9,
	WeightmapRT_Mip6 = 10,
	WeightmapRT_Mip7 = 11,
	WeightmapRT_Count = 12,
	WeightmapRT_MAX = 13
};

// Enum Landscape.EHeightmapRTType
enum class EHeightmapRTType : uint8 {
	HeightmapRT_CombinedAtlas = 0,
	HeightmapRT_CombinedNonAtlas = 1,
	HeightmapRT_Scratch1 = 2,
	HeightmapRT_Scratch2 = 3,
	HeightmapRT_Scratch3 = 4,
	HeightmapRT_Mip1 = 5,
	HeightmapRT_Mip2 = 6,
	HeightmapRT_Mip3 = 7,
	HeightmapRT_Mip4 = 8,
	HeightmapRT_Mip5 = 9,
	HeightmapRT_Mip6 = 10,
	HeightmapRT_Mip7 = 11,
	HeightmapRT_Count = 12,
	HeightmapRT_MAX = 13
};

// Enum Landscape.ERTDrawingType
enum class ERTDrawingType : uint8 {
	RTAtlas = 0,
	RTAtlasToNonAtlas = 1,
	RTNonAtlasToAtlas = 2,
	RTNonAtlas = 3,
	RTMips = 4,
	ERTDrawingType_MAX = 5
};

// Enum Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8 {
	LSE_None = 0,
	LSE_NoLandscapeInfo = 1,
	LSE_CollsionXY = 2,
	LSE_NoLayerInfo = 3,
	LSE_MAX = 4
};

// Enum Landscape.ELandscapeClearMode
enum class ELandscapeClearMode : uint8 {
	Clear_Weightmap = 1,
	Clear_Heightmap = 2,
	Clear_All = 3,
	Clear_MAX = 4
};

// Enum Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8 {
	LGT_None = 0,
	LGT_Height = 1,
	LGT_Weight = 2,
	LGT_MAX = 3
};

// Enum Landscape.EGrassScaling
enum class EGrassScaling : uint8 {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	EGrassScaling_MAX = 3
};

// Enum Landscape.ESplineModulationColorMask
enum class ESplineModulationColorMask : uint8 {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	ESplineModulationColorMask_MAX = 4
};

// Enum Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8 {
	Linear = 0,
	SquareRoot = 1,
	ELandscapeLODFalloff_MAX = 2
};

// Enum Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8 {
	Default = 0,
	Alphabetical = 1,
	UserSpecific = 2,
	ELandscapeLayerDisplayMode_MAX = 3
};

// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8 {
	None = 0,
	UseMaxLayers = 1,
	ExistingOnly = 2,
	UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction_MAX = 4
};

// Enum Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8 {
	Additive = 0,
	Layered = 1,
	ELandscapeImportAlphamapType_MAX = 2
};

// Enum Landscape.LandscapeSplineMeshOrientation
enum class LandscapeSplineMeshOrientation : uint8 {
	LSMO_XUp = 0,
	LSMO_YUp = 1,
	LSMO_MAX = 2
};

// Enum Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8 {
	LB_WeightBlend = 0,
	LB_AlphaBlend = 1,
	LB_HeightBlend = 2,
	LB_MAX = 3
};

// Enum Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : uint8 {
	LCCT_None = 0,
	LCCT_CustomUV0 = 1,
	LCCT_CustomUV1 = 2,
	LCCT_CustomUV2 = 3,
	LCCT_WeightMapUV = 4,
	LCCT_MAX = 5
};

// Enum Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8 {
	TCMT_Auto = 0,
	TCMT_XY = 1,
	TCMT_XZ = 2,
	TCMT_YZ = 3,
	TCMT_MAX = 4
};

// ScriptStruct Landscape.LandscapeLayer
struct FLandscapeLayer {
	struct FGuid Guid; 
	struct FName Name; 
	bool bVisible; 
	bool bLocked; 
	float HeightmapAlpha; 
	float WeightmapAlpha; 
	enum class ELandscapeBlendMode BlendMode; 
	struct TArray<struct FLandscapeLayerBrush> Brushes; 
	struct TMap<struct ULandscapeLayerInfoObject*, bool> WeightmapLayerAllocationBlend; 
};

// ScriptStruct Landscape.LandscapeLayerBrush
struct FLandscapeLayerBrush {
};

// ScriptStruct Landscape.LandscapeLayerComponentData
struct FLandscapeLayerComponentData {
	struct FHeightmapData HeightmapData; 
	struct FWeightmapData WeightmapData; 
};

// ScriptStruct Landscape.WeightmapData
struct FWeightmapData {
	struct TArray<struct UTexture2D*> Textures; 
	struct TArray<struct FWeightmapLayerAllocationInfo> LayerAllocations; 
	struct TArray<struct ULandscapeWeightmapUsage*> TextureUsages; 
};

// ScriptStruct Landscape.WeightmapLayerAllocationInfo
struct FWeightmapLayerAllocationInfo {
	struct ULandscapeLayerInfoObject* LayerInfo; 
	char WeightmapTextureIndex; 
	char WeightmapTextureChannel; 
};

// ScriptStruct Landscape.HeightmapData
struct FHeightmapData {
	struct UTexture2D* Texture; 
};

// ScriptStruct Landscape.LandscapeComponentMaterialOverride
struct FLandscapeComponentMaterialOverride {
	struct FPerPlatformInt LODIndex; 
	struct UMaterialInterface* Material; 
};

// ScriptStruct Landscape.LandscapeEditToolRenderData
struct FLandscapeEditToolRenderData {
	struct UMaterialInterface* ToolMaterial; 
	struct UMaterialInterface* GizmoMaterial; 
	int32_t SelectedType; 
	int32_t DebugChannelR; 
	int32_t DebugChannelG; 
	int32_t DebugChannelB; 
	struct UTexture2D* DataTexture; 
	struct UTexture2D* LayerContributionTexture; 
	struct UTexture2D* DirtyTexture; 
};

// ScriptStruct Landscape.GizmoSelectData
struct FGizmoSelectData {
};

// ScriptStruct Landscape.GrassVariety
struct FGrassVariety {
	struct UStaticMesh* GrassMesh; 
	struct TArray<struct UMaterialInterface*> OverrideMaterials; 
	struct FPerPlatformFloat GrassDensity; 
	bool bUseGrid; 
	float PlacementJitter; 
	struct FPerPlatformInt StartCullDistance; 
	struct FPerPlatformInt EndCullDistance; 
	int32_t MinLOD; 
	enum class EGrassScaling Scaling; 
	struct FFloatInterval ScaleX; 
	struct FFloatInterval ScaleY; 
	struct FFloatInterval ScaleZ; 
	bool RandomRotation; 
	bool AlignToSurface; 
	bool bUseLandscapeLightmap; 
	struct FLightingChannels LightingChannels; 
	bool bReceivesDecals; 
	bool bCastDynamicShadow; 
	bool bKeepInstanceBufferCPUCopy; 
};

// ScriptStruct Landscape.LandscapeInfoLayerSettings
struct FLandscapeInfoLayerSettings {
	struct ULandscapeLayerInfoObject* LayerInfoObj; 
	struct FName LayerName; 
};

// ScriptStruct Landscape.LandscapeMaterialTextureStreamingInfo
struct FLandscapeMaterialTextureStreamingInfo {
	struct FName TextureName; 
	float TexelFactor; 
};

// ScriptStruct Landscape.LandscapeProxyMaterialOverride
struct FLandscapeProxyMaterialOverride {
	struct FPerPlatformInt LODIndex; 
	struct UMaterialInterface* Material; 
};

// ScriptStruct Landscape.LandscapeImportLayerInfo
struct FLandscapeImportLayerInfo {
};

// ScriptStruct Landscape.LandscapeLayerStruct
struct FLandscapeLayerStruct {
	struct ULandscapeLayerInfoObject* LayerInfoObj; 
};

// ScriptStruct Landscape.LandscapeEditorLayerSettings
struct FLandscapeEditorLayerSettings {
};

// ScriptStruct Landscape.LandscapeSplineConnection
struct FLandscapeSplineConnection {
	struct ULandscapeSplineSegment* Segment; 
	char End : 1; 
};

// ScriptStruct Landscape.ForeignWorldSplineData
struct FForeignWorldSplineData {
};

// ScriptStruct Landscape.ForeignSplineSegmentData
struct FForeignSplineSegmentData {
};

// ScriptStruct Landscape.ForeignControlPointData
struct FForeignControlPointData {
};

// ScriptStruct Landscape.LandscapeSplineMeshEntry
struct FLandscapeSplineMeshEntry {
	struct UStaticMesh* Mesh; 
	struct TArray<struct UMaterialInterface*> MaterialOverrides; 
	char bCenterH : 1; 
	struct FVector2D CenterAdjust; 
	char bScaleToWidth : 1; 
	struct FVector Scale; 
	enum class LandscapeSplineMeshOrientation Orientation; 
	enum class ESplineMeshAxis ForwardAxis; 
	enum class ESplineMeshAxis UpAxis; 
};

// ScriptStruct Landscape.LandscapeSplineSegmentConnection
struct FLandscapeSplineSegmentConnection {
	struct ULandscapeSplineControlPoint* ControlPoint; 
	float TangentLen; 
	struct FName SocketName; 
};

// ScriptStruct Landscape.LandscapeSplineInterpPoint
struct FLandscapeSplineInterpPoint {
	struct FVector Center; 
	struct FVector Left; 
	struct FVector Right; 
	struct FVector FalloffLeft; 
	struct FVector FalloffRight; 
	struct FVector LayerLeft; 
	struct FVector LayerRight; 
	struct FVector LayerFalloffLeft; 
	struct FVector LayerFalloffRight; 
	float StartEndFalloff; 
};

// ScriptStruct Landscape.GrassInput
struct FGrassInput {
	struct FName Name; 
	struct ULandscapeGrassType* GrassType; 
	struct FExpressionInput Input; 
};

// ScriptStruct Landscape.LayerBlendInput
struct FLayerBlendInput {
	struct FName LayerName; 
	enum class ELandscapeLayerBlendType BlendType; 
	struct FExpressionInput LayerInput; 
	struct FExpressionInput HeightInput; 
	float PreviewWeight; 
	struct FVector ConstLayerInput; 
	float ConstHeightInput; 
};

// ScriptStruct Landscape.PhysicalMaterialInput
struct FPhysicalMaterialInput {
	struct UPhysicalMaterial* PhysicalMaterial; 
	struct FExpressionInput Input; 
};

