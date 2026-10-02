// Class Landscape.ControlPointMeshActor
struct AControlPointMeshActor : AActor {
	struct UControlPointMeshComponent* ControlPointMeshComponent; 
};

// Class Landscape.ControlPointMeshComponent
struct UControlPointMeshComponent : UStaticMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; 
};

// Class Landscape.LandscapeProxy
struct ALandscapeProxy : AActor {
	struct ULandscapeSplinesComponent* SplineComponent; 
	struct FGuid LandscapeGuid; 
	struct FIntPoint LandscapeSectionOffset; 
	int32_t MaxLODLevel; 
	float LODDistanceFactor; 
	enum class ELandscapeLODFalloff LODFalloff; 
	float ComponentScreenSizeToUseSubSections; 
	float Lod0ScreenSize; 
	float LOD0DistributionSetting; 
	float LODDistributionSetting; 
	float TessellationComponentScreenSize; 
	bool UseTessellationComponentScreenSizeFalloff; 
	float TessellationComponentScreenSizeFalloff; 
	int32_t OccluderGeometryLOD; 
	int32_t StaticLightingLOD; 
	struct UPhysicalMaterial* DefaultPhysMaterial; 
	float StreamingDistanceMultiplier; 
	struct UMaterialInterface* LandscapeMaterial; 
	struct UMaterialInterface* LandscapeHoleMaterial; 
	struct TArray<struct FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; 
	bool bMeshHoles; 
	char MeshHolesMaxLod; 
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; 
	int32_t VirtualTextureNumLods; 
	int32_t VirtualTextureLodBias; 
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; 
	float NegativeZBoundsExtension; 
	float PositiveZBoundsExtension; 
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; 
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> CollisionComponents; 
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; 
	bool bHasLandscapeGrass; 
	float StaticLightingResolution; 
	char CastShadow : 1; 
	char bCastDynamicShadow : 1; 
	char bCastStaticShadow : 1; 
	char bCastFarShadow : 1; 
	char bCastHiddenShadow : 1; 
	char bCastShadowAsTwoSided : 1; 
	char bAffectDistanceFieldLighting : 1; 
	struct FLightingChannels LightingChannels; 
	char bUseMaterialPositionOffsetInStaticLighting : 1; 
	char bRenderCustomDepth : 1; 
	enum class ERendererStencilMask CustomDepthStencilWriteMask; 
	int32_t CustomDepthStencilValue; 
	float LDMaxDrawDistance; 
	struct FLightmassPrimitiveSettings LightmassSettings; 
	int32_t CollisionMipLevel; 
	int32_t SimpleCollisionMipLevel; 
	float CollisionThickness; 
	struct FBodyInstance BodyInstance; 
	char bGenerateOverlapEvents : 1; 
	char bBakeMaterialPositionOffsetIntoCollision : 1; 
	int32_t ComponentSizeQuads; 
	int32_t SubsectionSizeQuads; 
	int32_t NumSubsections; 
	char bUsedForNavigation : 1; 
	char bFillCollisionUnderLandscapeForNavmesh : 1; 
	bool bUseDynamicMaterialInstance; 
	enum class ENavDataGatheringMode NavigationGeometryGatheringMode; 
	bool bUseLandscapeForCullingInvisibleHLODVertices; 
	bool bHasLayersContent; 
	struct TMap<struct UTexture2D*, struct ULandscapeWeightmapUsage*> WeightmapUsageMap; 

	void SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor Value); // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable)
	void SetLandscapeMaterialTextureParameterValue(struct FName ParameterName, struct UTexture* Value); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void SetLandscapeMaterialScalarParameterValue(struct FName ParameterName, float Value); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	bool LandscapeExportHeightmapToRenderTarget(struct UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies); // (Final|Native|Public|BlueprintCallable)
	void EditorSetLandscapeMaterial(struct UMaterialInterface* NewLandscapeMaterial); // (Final|Native|Public|BlueprintCallable)
	void EditorApplySpline(struct USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, struct ULandscapeLayerInfoObject* PaintLayer, struct FName EditLayerName); // (Final|RequiredAPI|Native|Public|BlueprintCallable)
	void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections); // (Native|Public|BlueprintCallable)
	void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff); // (Native|Public|BlueprintCallable)
	void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize); // (Native|Public|BlueprintCallable)
	void ChangeLODDistanceFactor(float InLODDistanceFactor); // (Native|Public|BlueprintCallable)
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections); // (Native|Public|BlueprintCallable)
};

// Class Landscape.Landscape
struct ALandscape : ALandscapeProxy {
};

// Class Landscape.LandscapeBlueprintBrushBase
struct ALandscapeBlueprintBrushBase : AActor {

	void RequestLandscapeUpdate(); // (Final|Native|Public|BlueprintCallable)
	struct UTextureRenderTarget2D* Render(bool InIsHeightmap, struct UTextureRenderTarget2D* InCombinedResult, struct FName& InWeightmapLayerName); // (Native|Event|Public|HasOutParms|BlueprintEvent)
	void Initialize(struct FTransform& InLandscapeTransform, struct FIntPoint& InLandscapeSize, struct FIntPoint& InLandscapeRenderTargetSize); // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent)
	void GetBlueprintRenderDependencies(struct TArray<struct UObject*>& OutStreamableAssets); // (Event|Public|HasOutParms|BlueprintEvent)
};

// Class Landscape.LandscapeLODStreamingProxy
struct ULandscapeLODStreamingProxy : UStreamableRenderAsset {
};

// Class Landscape.LandscapeComponent
struct ULandscapeComponent : UPrimitiveComponent {
	int32_t SectionBaseX; 
	int32_t SectionBaseY; 
	int32_t ComponentSizeQuads; 
	int32_t SubsectionSizeQuads; 
	int32_t NumSubsections; 
	struct UMaterialInterface* OverrideMaterial; 
	struct UMaterialInterface* OverrideHoleMaterial; 
	struct TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials; 
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; 
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstancesDynamic; 
	struct TArray<int8_t> LODIndexToMaterialIndex; 
	struct TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; 
	struct UTexture2D* XYOffsetmapTexture; 
	struct FVector4 WeightmapScaleBias; 
	float WeightmapSubsectionOffset; 
	struct FVector4 HeightmapScaleBias; 
	struct FBox CachedLocalBox; 
	LazyObjectProperty CollisionComponent; 
	struct UTexture2D* HeightmapTexture; 
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; 
	struct TArray<struct UTexture2D*> WeightmapTextures; 
	struct ULandscapeLODStreamingProxy* LODStreamingProxy; 
	struct FGuid MapBuildDataId; 
	struct TArray<struct FGuid> IrrelevantLights; 
	int32_t CollisionMipLevel; 
	int32_t SimpleCollisionMipLevel; 
	float NegativeZBoundsExtension; 
	float PositiveZBoundsExtension; 
	float StaticLightingResolution; 
	int32_t ForcedLOD; 
	int32_t LODBias; 
	struct FGuid StateId; 
	struct FGuid BakedTextureMaterialGuid; 
	struct UTexture2D* GIBakedBaseColorTexture; 
	char MobileBlendableLayerMask; 
	struct UMaterialInterface* MobileMaterialInterface; 
	struct TArray<struct UMaterialInterface*> MobileMaterialInterfaces; 
	struct TArray<struct UTexture2D*> MobileWeightmapTextures; 

	struct UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float EditorGetPaintLayerWeightByNameAtLocation(struct FVector& InLocation, struct FName InPaintLayerName); // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	float EditorGetPaintLayerWeightAtLocation(struct FVector& InLocation, struct ULandscapeLayerInfoObject* PaintLayer); // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
};

// Class Landscape.LandscapeGizmoActor
struct ALandscapeGizmoActor : AActor {
};

// Class Landscape.LandscapeGizmoActiveActor
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
};

// Class Landscape.LandscapeGizmoRenderComponent
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
};

// Class Landscape.LandscapeGrassType
struct ULandscapeGrassType : UObject {
	struct TArray<struct FGrassVariety> GrassVarieties; 
	char bEnableDensityScaling : 1; 
	struct UStaticMesh* GrassMesh; 
	float GrassDensity; 
	float PlacementJitter; 
	int32_t StartCullDistance; 
	int32_t EndCullDistance; 
	bool RandomRotation; 
	bool AlignToSurface; 
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeLayerInfoObject*> ComponentLayerInfos; 
	int32_t SectionBaseX; 
	int32_t SectionBaseY; 
	int32_t CollisionSizeQuads; 
	float CollisionScale; 
	int32_t SimpleCollisionSizeQuads; 
	struct TArray<char> CollisionQuadFlags; 
	struct FGuid HeightfieldGuid; 
	struct FBox CachedLocalBox; 
	LazyObjectProperty RenderComponent; 
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials; 

	struct ULandscapeComponent* GetRenderComponent(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Landscape.LandscapeInfo
struct ULandscapeInfo : UObject {
	LazyObjectProperty LandscapeActor; 
	struct FGuid LandscapeGuid; 
	int32_t ComponentSizeQuads; 
	int32_t SubsectionSizeQuads; 
	int32_t ComponentNumSubsections; 
	struct FVector DrawScale; 
	struct TArray<struct ALandscapeStreamingProxy*> Proxies; 
};

// Class Landscape.LandscapeInfoMap
struct ULandscapeInfoMap : UObject {
};

// Class Landscape.LandscapeLayerInfoObject
struct ULandscapeLayerInfoObject : UObject {
	struct FName LayerName; 
	struct UPhysicalMaterial* PhysMaterial; 
	float Hardness; 
	struct FLinearColor LayerUsageDebugColor; 
};

// Class Landscape.LandscapeMaterialInstanceConstant
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	struct TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; 
	char bIsLayerThumbnail : 1; 
	char bDisableTessellation : 1; 
	char bMobile : 1; 
	char bEditorToolUsage : 1; 
};

// Class Landscape.LandscapeMeshCollisionComponent
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	struct FGuid MeshGuid; 
};

// Class Landscape.LandscapeMeshProxyActor
struct ALandscapeMeshProxyActor : AActor {
	struct ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; 
};

// Class Landscape.LandscapeMeshProxyComponent
struct ULandscapeMeshProxyComponent : UStaticMeshComponent {
	struct FGuid LandscapeGuid; 
	struct TArray<struct FIntPoint> ProxyComponentBases; 
	int8_t ProxyLOD; 
};

// Class Landscape.LandscapeSettings
struct ULandscapeSettings : UDeveloperSettings {
	int32_t MaxNumberOfLayers; 
};

// Class Landscape.LandscapeSplinesComponent
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; 
	struct TArray<struct ULandscapeSplineSegment*> Segments; 
	struct TArray<struct UMeshComponent*> CookedForeignMeshComponents; 

	struct TArray<struct USplineMeshComponent*> GetSplineMeshComponents(); // (Final|Native|Public|BlueprintCallable)
};

// Class Landscape.LandscapeSplineControlPoint
struct ULandscapeSplineControlPoint : UObject {
	struct FVector Location; 
	struct FRotator Rotation; 
	float Width; 
	float LayerWidthRatio; 
	float SideFalloff; 
	float LeftSideFalloffFactor; 
	float RightSideFalloffFactor; 
	float LeftSideLayerFalloffFactor; 
	float RightSideLayerFalloffFactor; 
	float EndFalloff; 
	struct TArray<struct FLandscapeSplineConnection> ConnectedSegments; 
	struct TArray<struct FLandscapeSplineInterpPoint> Points; 
	struct FBox Bounds; 
	struct UControlPointMeshComponent* LocalMeshComponent; 
};

// Class Landscape.LandscapeSplineSegment
struct ULandscapeSplineSegment : UObject {
	struct FLandscapeSplineSegmentConnection Connections[0x2]; 
	struct FInterpCurveVector SplineInfo; 
	struct TArray<struct FLandscapeSplineInterpPoint> Points; 
	struct FBox Bounds; 
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents; 
};

// Class Landscape.LandscapeStreamingProxy
struct ALandscapeStreamingProxy : ALandscapeProxy {
	LazyObjectProperty LandscapeActor; 
};

// Class Landscape.LandscapeSubsystem
struct ULandscapeSubsystem : UTickableWorldSubsystem {
};

// Class Landscape.LandscapeWeightmapUsage
struct ULandscapeWeightmapUsage : UObject {
	struct ULandscapeComponent* ChannelUsage[0x4]; 
	struct FGuid LayerGuid; 
};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput {
	struct TArray<struct FGrassInput> GrassTypes; 
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	struct TArray<struct FLayerBlendInput> Layers; 
	struct FGuid ExpressionGUID; 
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	enum class ETerrainCoordMappingType MappingType; 
	enum class ELandscapeCustomizedCoordType CustomUVType; 
	float MappingScale; 
	float MappingRotation; 
	float MappingPanU; 
	float MappingPanV; 
};

// Class Landscape.MaterialExpressionLandscapeLayerSample
struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression {
	struct FName ParameterName; 
	float PreviewWeight; 
	struct FGuid ExpressionGUID; 
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	struct FExpressionInput LayerUsed; 
	struct FExpressionInput LayerNotUsed; 
	struct FName ParameterName; 
	char PreviewUsed : 1; 
	struct FGuid ExpressionGUID; 
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	struct FExpressionInput Base; 
	struct FExpressionInput Layer; 
	struct FName ParameterName; 
	float PreviewWeight; 
	struct FVector ConstBase; 
	struct FGuid ExpressionGUID; 
};

// Class Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
struct UMaterialExpressionLandscapePhysicalMaterialOutput : UMaterialExpressionCustomOutput {
	struct TArray<struct FPhysicalMaterialInput> Inputs; 
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	struct FGuid ExpressionGUID; 
};

