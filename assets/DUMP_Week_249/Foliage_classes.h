// Class Foliage.FoliageInstancedStaticMeshComponent
struct UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent {
	struct FMulticastInlineDelegate OnInstanceTakePointDamage; 
	struct FMulticastInlineDelegate OnInstanceTakeRadialDamage; 
	struct FGuid GenerationGuid; 
};

// Class Foliage.FoliageStatistics
struct UFoliageStatistics : UBlueprintFunctionLibrary {

	int32_t FoliageOverlappingSphereCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FVector CenterPosition, float Radius); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	int32_t FoliageOverlappingBoxCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FBox Box); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
};

// Class Foliage.FoliageType
struct UFoliageType : UObject {
	struct FGuid UpdateGuid; 
	float Density; 
	float DensityAdjustmentFactor; 
	float Radius; 
	bool bSingleInstanceModeOverrideRadius; 
	float SingleInstanceModeRadius; 
	enum class EFoliageScaling Scaling; 
	struct FFloatInterval ScaleX; 
	struct FFloatInterval ScaleY; 
	struct FFloatInterval ScaleZ; 
	struct FFoliageVertexColorChannelMask VertexColorMaskByChannel[0x4]; 
	enum class FoliageVertexColorMask VertexColorMask; 
	float VertexColorMaskThreshold; 
	char VertexColorMaskInvert : 1; 
	struct FFloatInterval ZOffset; 
	char AlignToNormal : 1; 
	float AlignMaxAngle; 
	char RandomYaw : 1; 
	float RandomPitchAngle; 
	struct FFloatInterval GroundSlopeAngle; 
	struct FFloatInterval Height; 
	struct TArray<struct FName> LandscapeLayers; 
	float MinimumLayerWeight; 
	struct TArray<struct FName> ExclusionLandscapeLayers; 
	float MinimumExclusionLayerWeight; 
	struct FName LandscapeLayer; 
	char CollisionWithWorld : 1; 
	struct FVector CollisionScale; 
	struct FBoxSphereBounds MeshBounds; 
	struct FVector LowBoundOriginRadius; 
	enum class EComponentMobility Mobility; 
	struct FInt32Interval CullDistance; 
	char bEnableStaticLighting : 1; 
	char CastShadow : 1; 
	char bAffectDynamicIndirectLighting : 1; 
	char bAffectDistanceFieldLighting : 1; 
	char bCastDynamicShadow : 1; 
	char bCastStaticShadow : 1; 
	char bCastShadowAsTwoSided : 1; 
	char bReceivesDecals : 1; 
	char bOverrideLightMapRes : 1; 
	int32_t OverriddenLightMapRes; 
	enum class ELightmapType LightmapType; 
	char bUseAsOccluder : 1; 
	char bVisibleInRayTracing : 1; 
	char bEvaluateWorldPositionOffset : 1; 
	struct FBodyInstance BodyInstance; 
	enum class EHasCustomNavigableGeometry CustomNavigableGeometry; 
	struct FLightingChannels LightingChannels; 
	char bRenderCustomDepth : 1; 
	enum class ERendererStencilMask CustomDepthStencilWriteMask; 
	int32_t CustomDepthStencilValue; 
	int32_t TranslucencySortPriority; 
	float CollisionRadius; 
	float ShadeRadius; 
	int32_t NumSteps; 
	float InitialSeedDensity; 
	float AverageSpreadDistance; 
	float SpreadVariance; 
	int32_t SeedsPerStep; 
	int32_t DistributionSeed; 
	float MaxInitialSeedOffset; 
	bool bCanGrowInShade; 
	bool bSpawnsInShade; 
	float MaxInitialAge; 
	float MaxAge; 
	float OverlapPriority; 
	struct FFloatInterval ProceduralScale; 
	struct FRuntimeFloatCurve ScaleCurve; 
	int32_t ChangeCount; 
	char ReapplyDensity : 1; 
	char ReapplyRadius : 1; 
	char ReapplyAlignToNormal : 1; 
	char ReapplyRandomYaw : 1; 
	char ReapplyScaling : 1; 
	char ReapplyScaleX : 1; 
	char ReapplyScaleY : 1; 
	char ReapplyScaleZ : 1; 
	char ReapplyRandomPitchAngle : 1; 
	char ReapplyGroundSlope : 1; 
	char ReapplyHeight : 1; 
	char ReapplyLandscapeLayers : 1; 
	char ReapplyZOffset : 1; 
	char ReapplyCollisionWithWorld : 1; 
	char ReapplyVertexColorMask : 1; 
	char bEnableDensityScaling : 1; 
	char bEnableDiscardOnLoad : 1; 
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; 
	int32_t VirtualTextureCullMips; 
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; 

	void SetCullDistance(int32_t& Min, int32_t& Max); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void GetCullDistance(int32_t& Min, int32_t& Max); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
};

// Class Foliage.FoliageType_Actor
struct UFoliageType_Actor : UFoliageType {
	struct AActor* ActorClass; 
	bool bShouldAttachToBaseComponent; 
};

// Class Foliage.FoliageType_InstancedStaticMesh
struct UFoliageType_InstancedStaticMesh : UFoliageType {
	struct UStaticMesh* Mesh; 
	struct TArray<struct UMaterialInterface*> OverrideMaterials; 
	struct UFoliageInstancedStaticMeshComponent* ComponentClass; 
};

// Class Foliage.InstancedFoliageActor
struct AInstancedFoliageActor : AActor {
};

// Class Foliage.InteractiveFoliageActor
struct AInteractiveFoliageActor : AStaticMeshActor {
	struct UCapsuleComponent* CapsuleComponent; 
	struct FVector TouchingActorEntryPosition; 
	struct FVector FoliageVelocity; 
	struct FVector FoliageForce; 
	struct FVector FoliagePosition; 
	float FoliageDamageImpulseScale; 
	float FoliageTouchImpulseScale; 
	float FoliageStiffness; 
	float FoliageStiffnessQuadratic; 
	float FoliageDamping; 
	float MaxDamageImpulse; 
	float MaxTouchImpulse; 
	float MaxForce; 
	float Mass; 

	void CapsuleTouched(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& OverlapInfo); // (Final|Native|Protected|HasOutParms)
};

// Class Foliage.InteractiveFoliageComponent
struct UInteractiveFoliageComponent : UStaticMeshComponent {
};

// Class Foliage.ProceduralFoliageBlockingVolume
struct AProceduralFoliageBlockingVolume : AVolume {
	struct AProceduralFoliageVolume* ProceduralFoliageVolume; 
};

// Class Foliage.ProceduralFoliageComponent
struct UProceduralFoliageComponent : UActorComponent {
	struct UProceduralFoliageSpawner* FoliageSpawner; 
	float TileOverlap; 
	struct AVolume* SpawningVolume; 
	struct FGuid ProceduralGuid; 
};

// Class Foliage.ProceduralFoliageSpawner
struct UProceduralFoliageSpawner : UObject {
	int32_t RandomSeed; 
	float TileSize; 
	int32_t NumUniqueTiles; 
	float MinimumQuadTreeSize; 
	struct TArray<struct FFoliageTypeObject> FoliageTypes; 

	void Simulate(int32_t NumSteps); // (Final|Native|Public|BlueprintCallable)
};

// Class Foliage.ProceduralFoliageTile
struct UProceduralFoliageTile : UObject {
	struct UProceduralFoliageSpawner* FoliageSpawner; 
	struct TArray<struct FProceduralFoliageInstance> InstancesArray; 
};

// Class Foliage.ProceduralFoliageVolume
struct AProceduralFoliageVolume : AVolume {
	struct UProceduralFoliageComponent* ProceduralComponent; 
};

