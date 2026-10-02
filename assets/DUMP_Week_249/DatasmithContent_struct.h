// Enum DatasmithContent.EDatasmithAreaLightActorType
enum class EDatasmithAreaLightActorType : uint8 {
	Point = 0,
	Spot = 1,
	Rect = 2,
	EDatasmithAreaLightActorType_MAX = 3
};

// Enum DatasmithContent.EDatasmithAreaLightActorShape
enum class EDatasmithAreaLightActorShape : uint8 {
	Rectangle = 0,
	Disc = 1,
	Sphere = 2,
	Cylinder = 3,
	None = 4,
	EDatasmithAreaLightActorShape_MAX = 5
};

// Enum DatasmithContent.EDatasmithCADRetessellationRule
enum class EDatasmithCADRetessellationRule : uint8 {
	All = 0,
	SkipDeletedSurfaces = 1,
	EDatasmithCADRetessellationRule_MAX = 2
};

// Enum DatasmithContent.EDatasmithCADStitchingTechnique
enum class EDatasmithCADStitchingTechnique : uint8 {
	StitchingNone = 0,
	StitchingHeal = 1,
	StitchingSew = 2,
	EDatasmithCADStitchingTechnique_MAX = 3
};

// Enum DatasmithContent.EDatasmithImportScene
enum class EDatasmithImportScene : uint8 {
	NewLevel = 0,
	CurrentLevel = 1,
	AssetsOnly = 2,
	EDatasmithImportScene_MAX = 3
};

// Enum DatasmithContent.EDatasmithImportLightmapMax
enum class EDatasmithImportLightmapMax : uint8 {
	LIGHTMAP_65 = 0,
	LIGHTMAP_129 = 1,
	LIGHTMAP_257 = 2,
	LIGHTMAP_513 = 3,
	LIGHTMAP_1025 = 4,
	LIGHTMAP_2049 = 5,
	LIGHTMAP_4097 = 6,
	LIGHTMAP_MAX = 7
};

// Enum DatasmithContent.EDatasmithImportLightmapMin
enum class EDatasmithImportLightmapMin : uint8 {
	LIGHTMAP_17 = 0,
	LIGHTMAP_33 = 1,
	LIGHTMAP_65 = 2,
	LIGHTMAP_129 = 3,
	LIGHTMAP_257 = 4,
	LIGHTMAP_513 = 5,
	LIGHTMAP_MAX = 6
};

// Enum DatasmithContent.EDatasmithImportMaterialQuality
enum class EDatasmithImportMaterialQuality : uint8 {
	UseNoFresnelCurves = 0,
	UseSimplifierFresnelCurves = 1,
	UseRealFresnelCurves = 2,
	EDatasmithImportMaterialQuality_MAX = 3
};

// Enum DatasmithContent.EDatasmithImportActorPolicy
enum class EDatasmithImportActorPolicy : uint8 {
	Update = 0,
	Full = 1,
	Ignore = 2,
	EDatasmithImportActorPolicy_MAX = 3
};

// Enum DatasmithContent.EDatasmithImportAssetConflictPolicy
enum class EDatasmithImportAssetConflictPolicy : uint8 {
	Replace = 0,
	Update = 1,
	Use = 2,
	Ignore = 3,
	EDatasmithImportAssetConflictPolicy_MAX = 4
};

// Enum DatasmithContent.EDatasmithImportSearchPackagePolicy
enum class EDatasmithImportSearchPackagePolicy : uint8 {
	Current = 0,
	All = 1,
	EDatasmithImportSearchPackagePolicy_MAX = 2
};

// ScriptStruct DatasmithContent.DatasmithCameraLookatTrackingSettingsTemplate
struct FDatasmithCameraLookatTrackingSettingsTemplate {
	char bEnableLookAtTracking : 1; 
	char bAllowRoll : 1; 
	struct TSoftObjectPtr<AActor> ActorToTrack; 
};

// ScriptStruct DatasmithContent.DatasmithPostProcessSettingsTemplate
struct FDatasmithPostProcessSettingsTemplate {
	char bOverride_WhiteTemp : 1; 
	char bOverride_ColorSaturation : 1; 
	char bOverride_VignetteIntensity : 1; 
	char bOverride_FilmWhitePoint : 1; 
	char bOverride_AutoExposureMethod : 1; 
	char bOverride_CameraISO : 1; 
	char bOverride_CameraShutterSpeed : 1; 
	char bOverride_DepthOfFieldFstop : 1; 
	float WhiteTemp; 
	float VignetteIntensity; 
	struct FLinearColor FilmWhitePoint; 
	struct FVector4 ColorSaturation; 
	enum class EAutoExposureMethod AutoExposureMethod; 
	float CameraISO; 
	float CameraShutterSpeed; 
	float DepthOfFieldFstop; 
};

// ScriptStruct DatasmithContent.DatasmithCameraFocusSettingsTemplate
struct FDatasmithCameraFocusSettingsTemplate {
	enum class ECameraFocusMethod FocusMethod; 
	float ManualFocusDistance; 
};

// ScriptStruct DatasmithContent.DatasmithCameraLensSettingsTemplate
struct FDatasmithCameraLensSettingsTemplate {
	float MaxFStop; 
};

// ScriptStruct DatasmithContent.DatasmithCameraFilmbackSettingsTemplate
struct FDatasmithCameraFilmbackSettingsTemplate {
	float SensorWidth; 
	float SensorHeight; 
};

// ScriptStruct DatasmithContent.DatasmithTessellationOptions
struct FDatasmithTessellationOptions {
	float ChordTolerance; 
	float MaxEdgeLength; 
	float NormalTolerance; 
	enum class EDatasmithCADStitchingTechnique StitchingTechnique; 
};

// ScriptStruct DatasmithContent.DatasmithRetessellationOptions
struct FDatasmithRetessellationOptions : FDatasmithTessellationOptions {
	enum class EDatasmithCADRetessellationRule RetessellationRule; 
};

// ScriptStruct DatasmithContent.DatasmithImportBaseOptions
struct FDatasmithImportBaseOptions {
	enum class EDatasmithImportScene SceneHandling; 
	bool bIncludeGeometry; 
	bool bIncludeMaterial; 
	bool bIncludeLight; 
	bool bIncludeCamera; 
	bool bIncludeAnimation; 
	struct FDatasmithAssetImportOptions AssetOptions; 
	struct FDatasmithStaticMeshImportOptions StaticMeshOptions; 
};

// ScriptStruct DatasmithContent.DatasmithStaticMeshImportOptions
struct FDatasmithStaticMeshImportOptions {
	enum class EDatasmithImportLightmapMin MinLightmapResolution; 
	enum class EDatasmithImportLightmapMax MaxLightmapResolution; 
	bool bGenerateLightmapUVs; 
	bool bRemoveDegenerates; 
};

// ScriptStruct DatasmithContent.DatasmithAssetImportOptions
struct FDatasmithAssetImportOptions {
	struct FName PackagePath; 
};

// ScriptStruct DatasmithContent.DatasmithReimportOptions
struct FDatasmithReimportOptions {
	bool bUpdateActors; 
	bool bRespawnDeletedActors; 
};

// ScriptStruct DatasmithContent.DatasmithStaticParameterSetTemplate
struct FDatasmithStaticParameterSetTemplate {
	struct TMap<struct FName, bool> StaticSwitchParameters; 
};

// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoMapTemplate
struct FDatasmithMeshSectionInfoMapTemplate {
	struct TMap<uint32_t, struct FDatasmithMeshSectionInfoTemplate> Map; 
};

// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoTemplate
struct FDatasmithMeshSectionInfoTemplate {
	int32_t MaterialIndex; 
};

// ScriptStruct DatasmithContent.DatasmithStaticMaterialTemplate
struct FDatasmithStaticMaterialTemplate {
	struct FName MaterialSlotName; 
	struct UMaterialInterface* MaterialInterface; 
};

// ScriptStruct DatasmithContent.DatasmithMeshBuildSettingsTemplate
struct FDatasmithMeshBuildSettingsTemplate {
	char bUseMikkTSpace : 1; 
	char bRecomputeNormals : 1; 
	char bRecomputeTangents : 1; 
	char bRemoveDegenerates : 1; 
	char bBuildAdjacencyBuffer : 1; 
	char bUseHighPrecisionTangentBasis : 1; 
	char bUseFullPrecisionUVs : 1; 
	char bGenerateLightmapUVs : 1; 
	int32_t MinLightmapResolution; 
	int32_t SrcLightmapIndex; 
	int32_t DstLightmapIndex; 
};

