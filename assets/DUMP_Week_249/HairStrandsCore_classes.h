// Class HairStrandsCore.GroomActor
struct AGroomActor : AActor {
	struct UGroomComponent* GroomComponent; 
};

// Class HairStrandsCore.GroomAsset
struct UGroomAsset : UObject {
	struct TArray<struct FHairGroupInfoWithVisibility> HairGroupsInfo; 
	struct TArray<struct FHairGroupsRendering> HairGroupsRendering; 
	struct TArray<struct FHairGroupsPhysics> HairGroupsPhysics; 
	struct TArray<struct FHairGroupsInterpolation> HairGroupsInterpolation; 
	struct TArray<struct FHairGroupsLOD> HairGroupsLOD; 
	struct TArray<struct FHairGroupsCardsSourceDescription> HairGroupsCards; 
	struct TArray<struct FHairGroupsMeshesSourceDescription> HairGroupsMeshes; 
	struct TArray<struct FHairGroupsMaterial> HairGroupsMaterials; 
	bool EnableGlobalInterpolation; 
	enum class EGroomInterpolationType HairInterpolationType; 
	enum class EHairLODSelectionType LODSelectionType; 
	struct FPerPlatformInt MinLOD; 
	struct FPerPlatformBool DisableBelowMinLodStripping; 
	struct TArray<float> EffectiveLODBias; 
	struct TArray<struct UAssetUserData*> AssetUserData; 
};

// Class HairStrandsCore.GroomAssetImportData
struct UGroomAssetImportData : UAssetImportData {
	struct UGroomImportOptions* ImportOptions; 
};

// Class HairStrandsCore.GroomBindingAsset
struct UGroomBindingAsset : UObject {
	enum class EGroomBindingMeshType GroomBindingType; 
	struct UGroomAsset* Groom; 
	struct USkeletalMesh* SourceSkeletalMesh; 
	struct USkeletalMesh* TargetSkeletalMesh; 
	struct UGeometryCache* SourceGeometryCache; 
	struct UGeometryCache* TargetGeometryCache; 
	int32_t NumInterpolationPoints; 
	int32_t MatchingSection; 
	struct TArray<struct FGoomBindingGroupInfo> GroupInfos; 
};

// Class HairStrandsCore.GroomBlueprintLibrary
struct UGroomBlueprintLibrary : UBlueprintFunctionLibrary {

	struct UGroomBindingAsset* CreateNewGroomBindingAssetWithPath(struct FString InDesiredPackagePath, struct UGroomAsset* InGroomAsset, struct USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, struct USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection); // (Final|Native|Static|Public|BlueprintCallable)
	struct UGroomBindingAsset* CreateNewGroomBindingAsset(struct UGroomAsset* InGroomAsset, struct USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, struct USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection); // (Final|Native|Static|Public|BlueprintCallable)
	struct UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAssetWithPath(struct FString DesiredPackagePath, struct UGroomAsset* GroomAsset, struct UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, struct UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection); // (Final|Native|Static|Public|BlueprintCallable)
	struct UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAsset(struct UGroomAsset* GroomAsset, struct UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, struct UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class HairStrandsCore.GroomCache
struct UGroomCache : UObject {
	struct FGroomCacheInfo GroomCacheInfo; 
};

// Class HairStrandsCore.GroomCacheImportOptions
struct UGroomCacheImportOptions : UObject {
	struct FGroomCacheImportSettings ImportSettings; 
};

// Class HairStrandsCore.GroomCacheImportData
struct UGroomCacheImportData : UAssetImportData {
	struct FGroomCacheImportSettings Settings; 
};

// Class HairStrandsCore.GroomComponent
struct UGroomComponent : UMeshComponent {
	struct UGroomAsset* GroomAsset; 
	struct UGroomCache* GroomCache; 
	struct TArray<struct UNiagaraComponent*> NiagaraComponents; 
	struct USkeletalMesh* SourceSkeletalMesh; 
	struct UGroomBindingAsset* BindingAsset; 
	struct UPhysicsAsset* PhysicsAsset; 
	struct UMaterialInterface* Strands_DebugMaterial; 
	struct UMaterialInterface* Strands_DefaultMaterial; 
	struct UMaterialInterface* Cards_DefaultMaterial; 
	struct UMaterialInterface* Meshes_DefaultMaterial; 
	struct UNiagaraSystem* AngularSpringsSystem; 
	struct UNiagaraSystem* CosseratRodsSystem; 
	struct FString AttachmentName; 
	struct TArray<struct FHairGroupDesc> GroomGroupsDesc; 
	bool bRunning; 
	bool bLooping; 
	bool bManualTick; 
	float ElapsedTime; 

	void SetGroomAsset(struct UGroomAsset* Asset); // (Final|Native|Public|BlueprintCallable)
	void SetBindingAsset(struct UGroomBindingAsset* InBinding); // (Final|Native|Public|BlueprintCallable)
};

// Class HairStrandsCore.GroomCreateBindingOptions
struct UGroomCreateBindingOptions : UObject {
	enum class EGroomBindingMeshType GroomBindingType; 
	struct USkeletalMesh* SourceSkeletalMesh; 
	struct USkeletalMesh* TargetSkeletalMesh; 
	struct UGeometryCache* SourceGeometryCache; 
	struct UGeometryCache* TargetGeometryCache; 
	int32_t NumInterpolationPoints; 
	int32_t MatchingSection; 
};

// Class HairStrandsCore.GroomCreateFollicleMaskOptions
struct UGroomCreateFollicleMaskOptions : UObject {
	int32_t Resolution; 
	int32_t RootRadius; 
	struct TArray<struct FFollicleMaskOptions> Grooms; 
};

// Class HairStrandsCore.GroomCreateStrandsTexturesOptions
struct UGroomCreateStrandsTexturesOptions : UObject {
	int32_t Resolution; 
	enum class EStrandsTexturesTraceType TraceType; 
	float TraceDistance; 
	enum class EStrandsTexturesMeshType MeshType; 
	struct UStaticMesh* StaticMesh; 
	struct USkeletalMesh* SkeletalMesh; 
	int32_t LODIndex; 
	int32_t SectionIndex; 
	int32_t UVChannelIndex; 
	struct TArray<int32_t> GroupIndex; 
};

// Class HairStrandsCore.GroomImportOptions
struct UGroomImportOptions : UObject {
	struct FGroomConversionSettings ConversionSettings; 
	struct TArray<struct FHairGroupsInterpolation> InterpolationSettings; 
};

// Class HairStrandsCore.GroomHairGroupsPreview
struct UGroomHairGroupsPreview : UObject {
	struct TArray<struct FGroomHairGroupPreview> Groups; 
};

// Class HairStrandsCore.GroomPluginSettings
struct UGroomPluginSettings : UObject {
	float GroomCacheLookAheadBuffer; 
};

// Class HairStrandsCore.MovieSceneGroomCacheSection
struct UMovieSceneGroomCacheSection : UMovieSceneSection {
	struct FMovieSceneGroomCacheParams Params; 
};

// Class HairStrandsCore.MovieSceneGroomCacheTrack
struct UMovieSceneGroomCacheTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> AnimationSections; 
};

// Class HairStrandsCore.NiagaraDataInterfaceHairStrands
struct UNiagaraDataInterfaceHairStrands : UNiagaraDataInterface {
	struct UGroomAsset* DefaultSource; 
	struct AActor* SourceActor; 
};

// Class HairStrandsCore.NiagaraDataInterfacePhysicsAsset
struct UNiagaraDataInterfacePhysicsAsset : UNiagaraDataInterface {
	struct UPhysicsAsset* DefaultSource; 
	struct AActor* SourceActor; 
};

// Class HairStrandsCore.NiagaraDataInterfaceVelocityGrid
struct UNiagaraDataInterfaceVelocityGrid : UNiagaraDataInterfaceRWBase {
	struct FIntVector GridSize; 
};

// Class HairStrandsCore.NiagaraDataInterfacePressureGrid
struct UNiagaraDataInterfacePressureGrid : UNiagaraDataInterfaceVelocityGrid {
};

