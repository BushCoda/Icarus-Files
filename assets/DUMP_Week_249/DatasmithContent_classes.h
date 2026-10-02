// Class DatasmithContent.DatasmithObjectTemplate
struct UDatasmithObjectTemplate : UObject {
};

// Class DatasmithContent.DatasmithActorTemplate
struct UDatasmithActorTemplate : UDatasmithObjectTemplate {
	struct TSet<struct FName> Layers; 
	struct TSet<struct FName> Tags; 
};

// Class DatasmithContent.DatasmithAdditionalData
struct UDatasmithAdditionalData : UObject {
};

// Class DatasmithContent.DatasmithAreaLightActor
struct ADatasmithAreaLightActor : AActor {
	enum class EComponentMobility Mobility; 
	enum class EDatasmithAreaLightActorType LightType; 
	enum class EDatasmithAreaLightActorShape LightShape; 
	struct FVector2D Dimensions; 
	float Intensity; 
	enum class ELightUnits IntensityUnits; 
	struct FLinearColor Color; 
	float Temperature; 
	struct UTextureLightProfile* IESTexture; 
	bool bUseIESBrightness; 
	float IESBrightnessScale; 
	struct FRotator Rotation; 
	float SourceRadius; 
	float SourceLength; 
	float AttenuationRadius; 
	float SpotlightInnerAngle; 
	float SpotlightOuterAngle; 
};

// Class DatasmithContent.DatasmithAreaLightActorTemplate
struct UDatasmithAreaLightActorTemplate : UDatasmithObjectTemplate {
	enum class EDatasmithAreaLightActorType LightType; 
	enum class EDatasmithAreaLightActorShape LightShape; 
	struct FVector2D Dimensions; 
	struct FLinearColor Color; 
	float Intensity; 
	enum class ELightUnits IntensityUnits; 
	float Temperature; 
	struct TSoftObjectPtr<UTextureLightProfile> IESTexture; 
	bool bUseIESBrightness; 
	float IESBrightnessScale; 
	struct FRotator Rotation; 
	float SourceRadius; 
	float SourceLength; 
	float AttenuationRadius; 
};

// Class DatasmithContent.DatasmithAssetImportData
struct UDatasmithAssetImportData : UAssetImportData {
};

// Class DatasmithContent.DatasmithStaticMeshImportData
struct UDatasmithStaticMeshImportData : UDatasmithAssetImportData {
};

// Class DatasmithContent.DatasmithStaticMeshCADImportData
struct UDatasmithStaticMeshCADImportData : UDatasmithStaticMeshImportData {
};

// Class DatasmithContent.DatasmithSceneImportData
struct UDatasmithSceneImportData : UAssetImportData {
};

// Class DatasmithContent.DatasmithTranslatedSceneImportData
struct UDatasmithTranslatedSceneImportData : UDatasmithSceneImportData {
};

// Class DatasmithContent.DatasmithCADImportSceneData
struct UDatasmithCADImportSceneData : UDatasmithSceneImportData {
};

// Class DatasmithContent.DatasmithMDLSceneImportData
struct UDatasmithMDLSceneImportData : UDatasmithSceneImportData {
};

// Class DatasmithContent.DatasmithGLTFSceneImportData
struct UDatasmithGLTFSceneImportData : UDatasmithSceneImportData {
	struct FString Generator; 
	float Version; 
	struct FString Author; 
	struct FString License; 
	struct FString Source; 
};

// Class DatasmithContent.DatasmithStaticMeshGLTFImportData
struct UDatasmithStaticMeshGLTFImportData : UDatasmithStaticMeshImportData {
	struct FString SourceMeshName; 
};

// Class DatasmithContent.DatasmithFBXSceneImportData
struct UDatasmithFBXSceneImportData : UDatasmithSceneImportData {
	bool bGenerateLightmapUVs; 
	struct FString TexturesDir; 
	char IntermediateSerialization; 
	bool bColorizeMaterials; 
};

// Class DatasmithContent.DatasmithDeltaGenAssetImportData
struct UDatasmithDeltaGenAssetImportData : UDatasmithAssetImportData {
};

// Class DatasmithContent.DatasmithDeltaGenSceneImportData
struct UDatasmithDeltaGenSceneImportData : UDatasmithFBXSceneImportData {
	bool bMergeNodes; 
	bool bOptimizeDuplicatedNodes; 
	bool bRemoveInvisibleNodes; 
	bool bSimplifyNodeHierarchy; 
	bool bImportVar; 
	struct FString VarPath; 
	bool bImportPos; 
	struct FString PosPath; 
	bool bImportTml; 
	struct FString TmlPath; 
};

// Class DatasmithContent.DatasmithVREDAssetImportData
struct UDatasmithVREDAssetImportData : UDatasmithAssetImportData {
};

// Class DatasmithContent.DatasmithVREDSceneImportData
struct UDatasmithVREDSceneImportData : UDatasmithFBXSceneImportData {
	bool bMergeNodes; 
	bool bOptimizeDuplicatedNodes; 
	bool bImportMats; 
	struct FString MatsPath; 
	bool bImportVar; 
	bool bCleanVar; 
	struct FString VarPath; 
	bool bImportLightInfo; 
	struct FString LightInfoPath; 
	bool bImportClipInfo; 
	struct FString ClipInfoPath; 
};

// Class DatasmithContent.DatasmithIFCSceneImportData
struct UDatasmithIFCSceneImportData : UDatasmithSceneImportData {
};

// Class DatasmithContent.DatasmithStaticMeshIFCImportData
struct UDatasmithStaticMeshIFCImportData : UDatasmithStaticMeshImportData {
	struct FString SourceGlobalId; 
};

// Class DatasmithContent.DatasmithAssetUserData
struct UDatasmithAssetUserData : UAssetUserData {
	struct TMap<struct FName, struct FString> MetaData; 
};

// Class DatasmithContent.DatasmithCineCameraActorTemplate
struct UDatasmithCineCameraActorTemplate : UDatasmithObjectTemplate {
	struct FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings; 
};

// Class DatasmithContent.DatasmithCineCameraComponentTemplate
struct UDatasmithCineCameraComponentTemplate : UDatasmithObjectTemplate {
	struct FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings; 
	struct FDatasmithCameraLensSettingsTemplate LensSettings; 
	struct FDatasmithCameraFocusSettingsTemplate FocusSettings; 
	float CurrentFocalLength; 
	float CurrentAperture; 
	struct FDatasmithPostProcessSettingsTemplate PostProcessSettings; 
};

// Class DatasmithContent.DatasmithContentBlueprintLibrary
struct UDatasmithContentBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FString GetDatasmithUserDataValueForKey(struct UObject* Object, struct FName Key); // (Final|Native|Static|Public|BlueprintCallable)
	void GetDatasmithUserDataKeysAndValuesForValue(struct UObject* Object, struct FString StringToMatch, struct TArray<struct FName>& OutKeys, struct TArray<struct FString>& OutValues); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct UDatasmithAssetUserData* GetDatasmithUserData(struct UObject* Object); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class DatasmithContent.DatasmithCustomActionBase
struct UDatasmithCustomActionBase : UObject {
};

// Class DatasmithContent.DatasmithDecalComponentTemplate
struct UDatasmithDecalComponentTemplate : UDatasmithObjectTemplate {
	int32_t SortOrder; 
	struct FVector DecalSize; 
	struct UMaterialInterface* Material; 
};

// Class DatasmithContent.DatasmithImportedSequencesActor
struct ADatasmithImportedSequencesActor : AActor {
	struct TArray<struct ULevelSequence*> ImportedSequences; 

	void PlayLevelSequence(struct ULevelSequence* SequenceToPlay); // (Final|Native|Public|BlueprintCallable)
};

// Class DatasmithContent.DatasmithOptionsBase
struct UDatasmithOptionsBase : UObject {
};

// Class DatasmithContent.DatasmithCommonTessellationOptions
struct UDatasmithCommonTessellationOptions : UDatasmithOptionsBase {
	struct FDatasmithTessellationOptions Options; 
};

// Class DatasmithContent.DatasmithImportOptions
struct UDatasmithImportOptions : UDatasmithOptionsBase {
	enum class EDatasmithImportSearchPackagePolicy SearchPackagePolicy; 
	enum class EDatasmithImportAssetConflictPolicy MaterialConflictPolicy; 
	enum class EDatasmithImportAssetConflictPolicy TextureConflictPolicy; 
	enum class EDatasmithImportActorPolicy StaticMeshActorImportPolicy; 
	enum class EDatasmithImportActorPolicy LightImportPolicy; 
	enum class EDatasmithImportActorPolicy CameraImportPolicy; 
	enum class EDatasmithImportActorPolicy OtherActorImportPolicy; 
	enum class EDatasmithImportMaterialQuality MaterialQuality; 
	struct FDatasmithImportBaseOptions BaseOptions; 
	struct FDatasmithReimportOptions ReimportOptions; 
	struct FString Filename; 
	struct FString FilePath; 
};

// Class DatasmithContent.DatasmithLandscapeTemplate
struct UDatasmithLandscapeTemplate : UDatasmithObjectTemplate {
	struct UMaterialInterface* LandscapeMaterial; 
	int32_t StaticLightingLOD; 
};

// Class DatasmithContent.DatasmithLightComponentTemplate
struct UDatasmithLightComponentTemplate : UDatasmithObjectTemplate {
	char bVisible : 1; 
	char CastShadows : 1; 
	char bUseTemperature : 1; 
	char bUseIESBrightness : 1; 
	float Intensity; 
	float Temperature; 
	float IESBrightnessScale; 
	struct FLinearColor LightColor; 
	struct UMaterialInterface* LightFunctionMaterial; 
	struct UTextureLightProfile* IESTexture; 
};

// Class DatasmithContent.DatasmithMaterialInstanceTemplate
struct UDatasmithMaterialInstanceTemplate : UDatasmithObjectTemplate {
	struct TSoftObjectPtr<UMaterialInterface> ParentMaterial; 
	struct TMap<struct FName, float> ScalarParameterValues; 
	struct TMap<struct FName, struct FLinearColor> VectorParameterValues; 
	struct TMap<struct FName, struct TSoftObjectPtr<UTexture>> TextureParameterValues; 
	struct FDatasmithStaticParameterSetTemplate StaticParameters; 
};

// Class DatasmithContent.DatasmithPointLightComponentTemplate
struct UDatasmithPointLightComponentTemplate : UDatasmithObjectTemplate {
	enum class ELightUnits IntensityUnits; 
	float SourceRadius; 
	float SourceLength; 
	float AttenuationRadius; 
};

// Class DatasmithContent.DatasmithPostProcessVolumeTemplate
struct UDatasmithPostProcessVolumeTemplate : UDatasmithObjectTemplate {
	struct FDatasmithPostProcessSettingsTemplate Settings; 
	char bEnabled : 1; 
	char bUnbound : 1; 
};

// Class DatasmithContent.DatasmithScene
struct UDatasmithScene : UObject {
};

// Class DatasmithContent.DatasmithSceneActor
struct ADatasmithSceneActor : AActor {
	struct UDatasmithScene* Scene; 
	struct TMap<struct FName, struct TSoftObjectPtr<AActor>> RelatedActors; 
};

// Class DatasmithContent.DatasmithSceneComponentTemplate
struct UDatasmithSceneComponentTemplate : UDatasmithObjectTemplate {
	struct FTransform RelativeTransform; 
	enum class EComponentMobility Mobility; 
	struct TSoftObjectPtr<USceneComponent> AttachParent; 
	bool bVisible; 
	struct TSet<struct FName> Tags; 
};

// Class DatasmithContent.DatasmithSkyLightComponentTemplate
struct UDatasmithSkyLightComponentTemplate : UDatasmithObjectTemplate {
	enum class ESkyLightSourceType SourceType; 
	int32_t CubemapResolution; 
	struct UTextureCube* Cubemap; 
};

// Class DatasmithContent.DatasmithSpotLightComponentTemplate
struct UDatasmithSpotLightComponentTemplate : UDatasmithObjectTemplate {
	float InnerConeAngle; 
	float OuterConeAngle; 
};

// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
struct UDatasmithStaticMeshComponentTemplate : UDatasmithObjectTemplate {
	struct UStaticMesh* StaticMesh; 
	struct TArray<struct UMaterialInterface*> OverrideMaterials; 
};

// Class DatasmithContent.DatasmithStaticMeshTemplate
struct UDatasmithStaticMeshTemplate : UDatasmithObjectTemplate {
	struct FDatasmithMeshSectionInfoMapTemplate SectionInfoMap; 
	int32_t LightMapCoordinateIndex; 
	int32_t LightMapResolution; 
	struct TArray<struct FDatasmithMeshBuildSettingsTemplate> BuildSettings; 
	struct TArray<struct FDatasmithStaticMaterialTemplate> StaticMaterials; 
};

