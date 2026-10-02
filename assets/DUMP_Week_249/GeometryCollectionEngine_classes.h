// Class GeometryCollectionEngine.ChaosDestructionListener
struct UChaosDestructionListener : USceneComponent {
	char bIsCollisionEventListeningEnabled : 1; 
	char bIsBreakingEventListeningEnabled : 1; 
	char bIsTrailingEventListeningEnabled : 1; 
	struct FChaosCollisionEventRequestSettings CollisionEventRequestSettings; 
	struct FChaosBreakingEventRequestSettings BreakingEventRequestSettings; 
	struct FChaosTrailingEventRequestSettings TrailingEventRequestSettings; 
	struct TSet<struct AChaosSolverActor*> ChaosSolverActors; 
	struct TSet<struct AGeometryCollectionActor*> GeometryCollectionActors; 
	struct FMulticastInlineDelegate OnCollisionEvents; 
	struct FMulticastInlineDelegate OnBreakingEvents; 
	struct FMulticastInlineDelegate OnTrailingEvents; 

	void SortTrailingEvents(struct TArray<struct FChaosTrailingEventData>& TrailingEvents, enum class EChaosTrailingSortMethod SortMethod); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SortCollisionEvents(struct TArray<struct FChaosCollisionEventData>& CollisionEvents, enum class EChaosCollisionSortMethod SortMethod); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SortBreakingEvents(struct TArray<struct FChaosBreakingEventData>& BreakingEvents, enum class EChaosBreakingSortMethod SortMethod); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings& InSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetTrailingEventEnabled(bool bIsEnabled); // (Final|Native|Public|BlueprintCallable)
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings& InSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetCollisionEventEnabled(bool bIsEnabled); // (Final|Native|Public|BlueprintCallable)
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings& InSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetBreakingEventEnabled(bool bIsEnabled); // (Final|Native|Public|BlueprintCallable)
	void RemoveGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // (Final|Native|Public|BlueprintCallable)
	void RemoveChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // (Final|Native|Public|BlueprintCallable)
	bool IsEventListening(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void AddGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // (Final|Native|Public|BlueprintCallable)
	void AddChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // (Final|Native|Public|BlueprintCallable)
};

// Class GeometryCollectionEngine.GeometryCollectionActor
struct AGeometryCollectionActor : AActor {
	struct UGeometryCollectionComponent* GeometryCollectionComponent; 
	struct UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; 

	bool RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult& OutHit); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
};

// Class GeometryCollectionEngine.GeometryCollectionCache
struct UGeometryCollectionCache : UObject {
	struct FRecordedTransformTrack RecordedData; 
	struct UGeometryCollection* SupportedCollection; 
	struct FGuid CompatibleCollectionState; 
};

// Class GeometryCollectionEngine.GeometryCollectionComponent
struct UGeometryCollectionComponent : UMeshComponent {
	struct AChaosSolverActor* ChaosSolverActor; 
	struct UGeometryCollection* RestCollection; 
	struct TArray<struct AFieldSystemActor*> InitializationFields; 
	bool Simulating; 
	enum class EObjectStateTypeEnum ObjectType; 
	bool EnableClustering; 
	int32_t ClusterGroupIndex; 
	int32_t MaxClusterLevel; 
	struct TArray<float> DamageThreshold; 
	enum class EClusterConnectionTypeEnum ClusterConnectionType; 
	int32_t CollisionGroup; 
	float CollisionSampleFraction; 
	float LinearEtherDrag; 
	float AngularEtherDrag; 
	struct UChaosPhysicalMaterial* PhysicalMaterial; 
	enum class EInitialVelocityTypeEnum InitialVelocityType; 
	struct FVector InitialLinearVelocity; 
	struct FVector InitialAngularVelocity; 
	struct UPhysicalMaterial* PhysicalMaterialOverride; 
	struct FGeomComponentCacheParameters CacheParameters; 
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; 
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; 
	struct FMulticastInlineDelegate OnChaosBreakEvent; 
	float DesiredCacheTime; 
	bool CachePlayback; 
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; 
	bool bNotifyBreaks; 
	bool bNotifyCollisions; 
	bool bEnableReplication; 
	bool bEnableAbandonAfterLevel; 
	int32_t ReplicationAbandonClusterLevel; 
	struct FGeometryCollectionRepData RepData; 
	struct UBodySetup* DummyBodySetup; 

	void SetNotifyBreaks(bool bNewNotifyBreaks); // (Final|Native|Public|BlueprintCallable)
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // (Event|Public|HasOutParms|BlueprintEvent)
	void OnRep_RepData(struct FGeometryCollectionRepData& OldData); // (Final|Native|Protected|HasOutParms)
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) 
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) 
	void NetAbandonCluster(int32_t TransformIndex); // (Final|Net|NetReliableNative|Event|NetMulticast|Private)
	void ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // (Final|Native|Public|BlueprintCallable)
	void ApplyKinematicField(float Radius, struct FVector position); // (Final|Native|Public|HasDefaults|BlueprintCallable)
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
struct AGeometryCollectionDebugDrawActor : AActor {
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage; 
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; 
	bool bDebugDrawWholeCollection; 
	bool bDebugDrawHierarchy; 
	bool bDebugDrawClustering; 
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; 
	bool bShowRigidBodyId; 
	bool bShowRigidBodyCollision; 
	bool bCollisionAtOrigin; 
	bool bShowRigidBodyTransform; 
	bool bShowRigidBodyInertia; 
	bool bShowRigidBodyVelocity; 
	bool bShowRigidBodyForce; 
	bool bShowRigidBodyInfos; 
	bool bShowTransformIndex; 
	bool bShowTransform; 
	bool bShowParent; 
	bool bShowLevel; 
	bool bShowConnectivityEdges; 
	bool bShowGeometryIndex; 
	bool bShowGeometryTransform; 
	bool bShowBoundingBox; 
	bool bShowFaces; 
	bool bShowFaceIndices; 
	bool bShowFaceNormals; 
	bool bShowSingleFace; 
	int32_t SingleFaceIndex; 
	bool bShowVertices; 
	bool bShowVertexIndices; 
	bool bShowVertexNormals; 
	bool bUseActiveVisualization; 
	float PointThickness; 
	float LineThickness; 
	bool bTextShadow; 
	float TextScale; 
	float NormalScale; 
	float AxisScale; 
	float ArrowScale; 
	struct FColor RigidBodyIdColor; 
	float RigidBodyTransformScale; 
	struct FColor RigidBodyCollisionColor; 
	struct FColor RigidBodyInertiaColor; 
	struct FColor RigidBodyVelocityColor; 
	struct FColor RigidBodyForceColor; 
	struct FColor RigidBodyInfoColor; 
	struct FColor TransformIndexColor; 
	float TransformScale; 
	struct FColor LevelColor; 
	struct FColor ParentColor; 
	float ConnectivityEdgeThickness; 
	struct FColor GeometryIndexColor; 
	float GeometryTransformScale; 
	struct FColor BoundingBoxColor; 
	struct FColor FaceColor; 
	struct FColor FaceIndexColor; 
	struct FColor FaceNormalColor; 
	struct FColor SingleFaceColor; 
	struct FColor VertexColor; 
	struct FColor VertexIndexColor; 
	struct FColor VertexNormalColor; 
	struct UBillboardComponent* SpriteComponent; 
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
struct UGeometryCollectionDebugDrawComponent : UActorComponent {
	struct AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; 
	struct AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; 
};

// Class GeometryCollectionEngine.GeometryCollection
struct UGeometryCollection : UObject {
	bool EnableClustering; 
	int32_t ClusterGroupIndex; 
	int32_t MaxClusterLevel; 
	struct TArray<float> DamageThreshold; 
	enum class EClusterConnectionTypeEnum ClusterConnectionType; 
	struct TArray<struct FGeometryCollectionSource> GeometrySource; 
	struct TArray<struct UMaterialInterface*> Materials; 
	enum class ECollisionTypeEnum CollisionType; 
	enum class EImplicitTypeEnum ImplicitType; 
	int32_t MinLevelSetResolution; 
	int32_t MaxLevelSetResolution; 
	int32_t MinClusterLevelSetResolution; 
	int32_t MaxClusterLevelSetResolution; 
	float CollisionObjectReductionPercentage; 
	bool bMassAsDensity; 
	float Mass; 
	float MinimumMassClamp; 
	float CollisionParticlesFraction; 
	int32_t MaximumCollisionParticles; 
	struct TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData; 
	bool EnableRemovePiecesOnFracture; 
	struct TArray<struct UMaterialInterface*> RemoveOnFractureMaterials; 
	struct FGuid PersistentGuid; 
	struct FGuid StateGuid; 
	int32_t BoneSelectedMaterialIndex; 
};

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
struct AGeometryCollectionRenderLevelSetActor : AActor {
	struct UVolumeTexture* TargetVolumeTexture; 
	struct UMaterial* RayMarchMaterial; 
	float SurfaceTolerance; 
	float Isovalue; 
	bool Enabled; 
	bool RenderVolumeBoundingBox; 
};

// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
struct USkeletalMeshSimulationComponent : UActorComponent {
	struct UChaosPhysicalMaterial* PhysicalMaterial; 
	struct AChaosSolverActor* ChaosSolverActor; 
	struct UPhysicsAsset* OverridePhysicsAsset; 
	bool bSimulating; 
	bool bNotifyCollisions; 
	enum class EObjectStateTypeEnum ObjectType; 
	float Density; 
	float MinMass; 
	float MaxMass; 
	enum class ECollisionTypeEnum CollisionType; 
	float ImplicitShapeParticlesPerUnitArea; 
	int32_t ImplicitShapeMinNumParticles; 
	int32_t ImplicitShapeMaxNumParticles; 
	int32_t MinLevelSetResolution; 
	int32_t MaxLevelSetResolution; 
	int32_t CollisionGroup; 
	enum class EInitialVelocityTypeEnum InitialVelocityType; 
	struct FVector InitialLinearVelocity; 
	struct FVector InitialAngularVelocity; 
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; 

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // (Event|Public|HasOutParms|BlueprintEvent)
};

// Class GeometryCollectionEngine.StaticMeshSimulationComponent
struct UStaticMeshSimulationComponent : UActorComponent {
	bool Simulating; 
	bool bNotifyCollisions; 
	enum class EObjectStateTypeEnum ObjectType; 
	float Mass; 
	enum class ECollisionTypeEnum CollisionType; 
	enum class EImplicitTypeEnum ImplicitType; 
	int32_t MinLevelSetResolution; 
	int32_t MaxLevelSetResolution; 
	enum class EInitialVelocityTypeEnum InitialVelocityType; 
	struct FVector InitialLinearVelocity; 
	struct FVector InitialAngularVelocity; 
	float DamageThreshold; 
	struct UChaosPhysicalMaterial* PhysicalMaterial; 
	struct AChaosSolverActor* ChaosSolverActor; 
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; 
	struct TArray<struct UPrimitiveComponent*> SimulatedComponents; 

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // (Event|Public|HasOutParms|BlueprintEvent)
	void ForceRecreatePhysicsState(); // (Final|Native|Public|BlueprintCallable)
};

