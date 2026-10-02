// Class AugmentedReality.ARActor
struct AARActor : AActor {

	struct UARComponent* AddARComponent(struct UARComponent* InComponentClass, struct FGuid& NativeID); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
};

// Class AugmentedReality.ARBlueprintLibrary
struct UARBlueprintLibrary : UBlueprintFunctionLibrary {

	void UnpinComponent(struct USceneComponent* ComponentToUnpin); // (Final|Native|Static|Public|BlueprintCallable)
	bool ToggleARCapture(bool bOnOff, enum class EARCaptureType CaptureType); // (Final|Native|Static|Public|BlueprintCallable)
	void StopARSession(); // (Final|Native|Static|Public|BlueprintCallable)
	void StartARSession(struct UARSessionConfig* SessionConfig); // (Final|Native|Static|Public|BlueprintCallable)
	void SetEnabledXRCamera(bool bOnOff); // (Final|Native|Static|Public|BlueprintCallable)
	void SetARWorldScale(float InWorldScale); // (Final|Native|Static|Public|BlueprintCallable)
	void SetARWorldOriginLocationAndRotation(struct FVector OriginLocation, struct FRotator OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void SetAlignmentTransform(struct FTransform& InAlignmentTransform); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool SaveARPinToLocalStore(struct FName InSaveName, struct UARPin* InPin); // (Final|Native|Static|Public|BlueprintCallable)
	struct FIntPoint ResizeXRCamera(struct FIntPoint& InSize); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void RemovePin(struct UARPin* PinToRemove); // (Final|Native|Static|Public|BlueprintCallable)
	void RemoveARPinFromLocalStore(struct FName InSaveName); // (Final|Native|Static|Public|BlueprintCallable)
	void RemoveAllARPinsFromLocalStore(); // (Final|Native|Static|Public|BlueprintCallable)
	struct UARPin* PinComponentToTraceResult(struct USceneComponent* ComponentToPin, struct FARTraceResult& TraceResult, struct FName DebugName); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	bool PinComponentToARPin(struct USceneComponent* ComponentToPin, struct UARPin* Pin); // (Final|Native|Static|Public|BlueprintCallable)
	struct UARPin* PinComponent(struct USceneComponent* ComponentToPin, struct FTransform& PinToWorldTransform, struct UARTrackedGeometry* TrackedGeometry, struct FName DebugName); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void PauseARSession(); // (Final|Native|Static|Public|BlueprintCallable)
	struct TMap<struct FName, struct UARPin*> LoadARPinsFromLocalStore(); // (Final|Native|Static|Public|BlueprintCallable)
	struct TArray<struct FARTraceResult> LineTraceTrackedObjects3D(struct FVector Start, struct FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	struct TArray<struct FARTraceResult> LineTraceTrackedObjects(struct FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	bool IsSessionTypeSupported(enum class EARSessionType SessionType); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsSessionTrackingFeatureSupported(enum class EARSessionType SessionType, enum class EARSessionTrackingFeature SessionTrackingFeature); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsSceneReconstructionSupported(enum class EARSessionType SessionType, enum class EARSceneReconstruction SceneReconstructionMethod); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsARSupported(); // (Final|Native|Static|Public|BlueprintCallable)
	bool IsARPinLocalStoreSupported(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsARPinLocalStoreReady(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	enum class EARWorldMappingState GetWorldMappingStatus(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	enum class EARTrackingQualityReason GetTrackingQualityReason(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	enum class EARTrackingQuality GetTrackingQuality(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct TArray<struct FARVideoFormat> GetSupportedVideoFormats(enum class EARSessionType SessionType); // (Final|Native|Static|Public|BlueprintCallable)
	struct UARSessionConfig* GetSessionConfig(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct TArray<struct FVector> GetPointCloud(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UARTexture* GetPersonSegmentationImage(); // (Final|Native|Static|Public|BlueprintCallable)
	struct UARTexture* GetPersonSegmentationDepthImage(); // (Final|Native|Static|Public|BlueprintCallable)
	bool GetObjectClassificationAtLocation(struct FVector& InWorldLocation, enum class EARObjectClassification& OutClassification, struct FVector& OutClassificationLocation, float MaxLocationDiff); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	int32_t GetNumberOfTrackedFacesSupported(); // (Final|Native|Static|Public|BlueprintCallable)
	struct UARLightEstimate* GetCurrentLightEstimate(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool GetCameraIntrinsics(struct FARCameraIntrinsics& OutCameraIntrinsics); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct UARTextureCameraImage* GetCameraImage(); // (Final|Native|Static|Public|BlueprintCallable)
	struct UARTextureCameraDepth* GetCameraDepth(); // (Final|Native|Static|Public|BlueprintCallable)
	float GetARWorldScale(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UARTexture* GetARTexture(enum class EARTextureType TextureType); // (Final|Native|Static|Public|BlueprintCallable)
	struct FARSessionStatus GetARSessionStatus(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct TArray<struct UARTrackedPose*> GetAllTrackedPoses(); // (Final|Native|Static|Public|BlueprintCallable)
	struct TArray<struct UARTrackedPoint*> GetAllTrackedPoints(); // (Final|Native|Static|Public|BlueprintCallable)
	struct TArray<struct UARPlaneGeometry*> GetAllTrackedPlanes(); // (Final|Native|Static|Public|BlueprintCallable)
	struct TArray<struct UARTrackedImage*> GetAllTrackedImages(); // (Final|Native|Static|Public|BlueprintCallable)
	struct TArray<struct UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes(); // (Final|Native|Static|Public|BlueprintCallable)
	struct TArray<struct FARPose2D> GetAllTracked2DPoses(); // (Final|Native|Static|Public|BlueprintCallable)
	struct TArray<struct UARPin*> GetAllPins(); // (Final|Native|Static|Public|BlueprintCallable)
	struct TArray<struct UARTrackedGeometry*> GetAllGeometriesByClass(struct UARTrackedGeometry* GeometryClass); // (Final|Native|Static|Public|BlueprintCallable)
	struct TArray<struct UARTrackedGeometry*> GetAllGeometries(); // (Final|Native|Static|Public|BlueprintCallable)
	struct FTransform GetAlignmentTransform(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct TArray<struct UARTrackedPoint*> FindTrackedPointsByName(struct FString PointName); // (Final|Native|Static|Public|BlueprintCallable)
	void DebugDrawTrackedGeometry(struct UARTrackedGeometry* TrackedGeometry, struct UObject* WorldContextObject, struct FLinearColor Color, float OutlineThickness, float PersistForSeconds); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void DebugDrawPin(struct UARPin* ARPin, struct UObject* WorldContextObject, struct FLinearColor Color, float Scale, float PersistForSeconds); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void CalculateClosestIntersection(struct TArray<struct FVector>& StartPoints, struct TArray<struct FVector>& EndPoints, struct FVector& ClosestIntersection); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void CalculateAlignmentTransform(struct FTransform& TransformInFirstCoordinateSystem, struct FTransform& TransformInSecondCoordinateSystem, struct FTransform& AlignmentTransform); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool AddTrackedPointWithName(struct FTransform& WorldTransform, struct FString PointName, bool bDeletePointsWithSameName); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct UARCandidateImage* AddRuntimeCandidateImage(struct UARSessionConfig* SessionConfig, struct UTexture2D* CandidateTexture, struct FString FriendlyName, float PhysicalWidth); // (Final|Native|Static|Public|BlueprintCallable)
	bool AddManualEnvironmentCaptureProbe(struct FVector Location, struct FVector Extent); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
};

// Class AugmentedReality.ARTraceResultLibrary
struct UARTraceResultLibrary : UBlueprintFunctionLibrary {

	struct UARTrackedGeometry* GetTrackedGeometry(struct FARTraceResult& TraceResult); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	enum class EARLineTraceChannels GetTraceChannel(struct FARTraceResult& TraceResult); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FTransform GetLocalTransform(struct FARTraceResult& TraceResult); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTransform GetLocalToWorldTransform(struct FARTraceResult& TraceResult); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FTransform GetLocalToTrackingTransform(struct FARTraceResult& TraceResult); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	float GetDistanceFromCamera(struct FARTraceResult& TraceResult); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
};

// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
struct UARBaseAsyncTaskBlueprintProxy : UBlueprintAsyncActionBase {
};

// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
struct UARSaveWorldAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailed; 

	struct UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
struct UARGetCandidateObjectAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailed; 

	struct UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(struct UObject* WorldContextObject, struct FVector Location, struct FVector Extent); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
};

// Class AugmentedReality.ARComponent
struct UARComponent : USceneComponent {
	struct FGuid NativeID; 
	bool bUseDefaultReplication; 
	struct UMaterialInterface* DefaultMeshMaterial; 
	struct UMaterialInterface* DefaultWireframeMeshMaterial; 
	struct UMRMeshComponent* MRMeshComponent; 
	struct UARTrackedGeometry* MyTrackedGeometry; 

	void UpdateVisualization(); // (Native|Event|Public|BlueprintCallable|BlueprintEvent)
	void SetNativeID(struct FGuid NativeID); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void ReceiveRemove(); // (Event|Public|BlueprintEvent)
	void OnRep_Payload(); // (Native|Protected)
	struct UMRMeshComponent* GetMRMesh(); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
};

// Class AugmentedReality.ARPlaneComponent
struct UARPlaneComponent : UARComponent {
	struct FARPlaneUpdatePayload ReplicatedPayload; 

	void SetPlaneComponentDebugMode(enum class EPlaneComponentDebugMode NewDebugMode); // (Final|Native|Static|Public|BlueprintCallable)
	void SetObjectClassificationDebugColors(struct TMap<enum class EARObjectClassification, struct FLinearColor>& InColors); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void ServerUpdatePayload(struct FARPlaneUpdatePayload NewPayload); // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate)
	void ReceiveUpdate(struct FARPlaneUpdatePayload& Payload); // (Event|Public|HasOutParms|BlueprintEvent)
	void ReceiveAdd(struct FARPlaneUpdatePayload& Payload); // (Event|Public|HasOutParms|BlueprintEvent)
	struct TMap<enum class EARObjectClassification, struct FLinearColor> GetObjectClassificationDebugColors(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
};

// Class AugmentedReality.ARPointComponent
struct UARPointComponent : UARComponent {
	struct FARPointUpdatePayload ReplicatedPayload; 

	void ServerUpdatePayload(struct FARPointUpdatePayload NewPayload); // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate)
	void ReceiveUpdate(struct FARPointUpdatePayload& Payload); // (Event|Public|HasOutParms|BlueprintEvent)
	void ReceiveAdd(struct FARPointUpdatePayload& Payload); // (Event|Public|HasOutParms|BlueprintEvent)
};

// Class AugmentedReality.ARFaceComponent
struct UARFaceComponent : UARComponent {
	enum class EARFaceTransformMixing TransformSetting; 
	bool bUpdateVertexNormal; 
	bool bFaceOutOfScreen; 
	struct FARFaceUpdatePayload ReplicatedPayload; 

	void SetFaceComponentDebugMode(enum class EFaceComponentDebugMode NewDebugMode); // (Final|Native|Static|Public|BlueprintCallable)
	void ServerUpdatePayload(struct FARFaceUpdatePayload NewPayload); // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate)
	void ReceiveUpdate(struct FARFaceUpdatePayload& Payload); // (Event|Public|HasOutParms|BlueprintEvent)
	void ReceiveAdd(struct FARFaceUpdatePayload& Payload); // (Event|Public|HasOutParms|BlueprintEvent)
};

// Class AugmentedReality.ARImageComponent
struct UARImageComponent : UARComponent {
	struct FARImageUpdatePayload ReplicatedPayload; 

	void SetImageComponentDebugMode(enum class EImageComponentDebugMode NewDebugMode); // (Final|Native|Static|Public|BlueprintCallable)
	void ServerUpdatePayload(struct FARImageUpdatePayload NewPayload); // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate)
	void ReceiveUpdate(struct FARImageUpdatePayload& Payload); // (Event|Public|HasOutParms|BlueprintEvent)
	void ReceiveAdd(struct FARImageUpdatePayload& Payload); // (Event|Public|HasOutParms|BlueprintEvent)
};

// Class AugmentedReality.ARQRCodeComponent
struct UARQRCodeComponent : UARComponent {
	struct FARQRCodeUpdatePayload ReplicatedPayload; 

	void SetQRCodeComponentDebugMode(enum class EQRCodeComponentDebugMode NewDebugMode); // (Final|Native|Static|Public|BlueprintCallable)
	void ServerUpdatePayload(struct FARQRCodeUpdatePayload NewPayload); // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate)
	void ReceiveUpdate(struct FARQRCodeUpdatePayload& Payload); // (Event|Public|HasOutParms|BlueprintEvent)
	void ReceiveAdd(struct FARQRCodeUpdatePayload& Payload); // (Event|Public|HasOutParms|BlueprintEvent)
};

// Class AugmentedReality.ARPoseComponent
struct UARPoseComponent : UARComponent {
	struct FARPoseUpdatePayload ReplicatedPayload; 

	void SetPoseComponentDebugMode(enum class EPoseComponentDebugMode NewDebugMode); // (Final|Native|Static|Public|BlueprintCallable)
	void ServerUpdatePayload(struct FARPoseUpdatePayload NewPayload); // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate)
	void ReceiveUpdate(struct FARPoseUpdatePayload& Payload); // (Event|Public|HasOutParms|BlueprintEvent)
	void ReceiveAdd(struct FARPoseUpdatePayload& Payload); // (Event|Public|HasOutParms|BlueprintEvent)
};

// Class AugmentedReality.AREnvironmentProbeComponent
struct UAREnvironmentProbeComponent : UARComponent {
	struct FAREnvironmentProbeUpdatePayload ReplicatedPayload; 

	void ServerUpdatePayload(struct FAREnvironmentProbeUpdatePayload NewPayload); // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate)
	void ReceiveUpdate(struct FAREnvironmentProbeUpdatePayload& Payload); // (Event|Public|HasOutParms|BlueprintEvent)
	void ReceiveAdd(struct FAREnvironmentProbeUpdatePayload& Payload); // (Event|Public|HasOutParms|BlueprintEvent)
};

// Class AugmentedReality.ARObjectComponent
struct UARObjectComponent : UARComponent {
	struct FARObjectUpdatePayload ReplicatedPayload; 

	void ServerUpdatePayload(struct FARObjectUpdatePayload NewPayload); // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate)
	void ReceiveUpdate(struct FARObjectUpdatePayload& Payload); // (Event|Public|HasOutParms|BlueprintEvent)
	void ReceiveAdd(struct FARObjectUpdatePayload& Payload); // (Event|Public|HasOutParms|BlueprintEvent)
};

// Class AugmentedReality.ARMeshComponent
struct UARMeshComponent : UARComponent {
	struct FARMeshUpdatePayload ReplicatedPayload; 

	void ServerUpdatePayload(struct FARMeshUpdatePayload NewPayload); // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate)
	void ReceiveUpdate(struct FARMeshUpdatePayload& Payload); // (Event|Public|HasOutParms|BlueprintEvent)
	void ReceiveAdd(struct FARMeshUpdatePayload& Payload); // (Event|Public|HasOutParms|BlueprintEvent)
};

// Class AugmentedReality.ARGeoAnchorComponent
struct UARGeoAnchorComponent : UARComponent {
	struct FARGeoAnchorUpdatePayload ReplicatedPayload; 

	void SetGeoAnchorComponentDebugMode(enum class EGeoAnchorComponentDebugMode NewDebugMode); // (Final|Native|Static|Public|BlueprintCallable)
	void ServerUpdatePayload(struct FARGeoAnchorUpdatePayload NewPayload); // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate)
	void ReceiveUpdate(struct FARGeoAnchorUpdatePayload& Payload); // (Event|Public|HasOutParms|BlueprintEvent)
	void ReceiveAdd(struct FARGeoAnchorUpdatePayload& Payload); // (Event|Public|HasOutParms|BlueprintEvent)
};

// Class AugmentedReality.ARDependencyHandler
struct UARDependencyHandler : UObject {

	void StartARSessionLatent(struct UObject* WorldContextObject, struct UARSessionConfig* SessionConfig, struct FLatentActionInfo LatentInfo); // (Native|Public|BlueprintCallable)
	void RequestARSessionPermission(struct UObject* WorldContextObject, struct UARSessionConfig* SessionConfig, struct FLatentActionInfo LatentInfo, enum class EARServicePermissionRequestResult& OutPermissionResult); // (Native|Public|HasOutParms|BlueprintCallable)
	void InstallARService(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, enum class EARServiceInstallRequestResult& OutInstallResult); // (Native|Public|HasOutParms|BlueprintCallable)
	struct UARDependencyHandler* GetARDependencyHandler(); // (Final|Native|Static|Public|BlueprintCallable)
	void CheckARServiceAvailability(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, enum class EARServiceAvailability& OutAvailability); // (Native|Public|HasOutParms|BlueprintCallable)
};

// Class AugmentedReality.ARGeoTrackingSupport
struct UARGeoTrackingSupport : UObject {

	struct UARGeoTrackingSupport* GetGeoTrackingSupport(); // (Final|Native|Static|Public|BlueprintCallable)
	enum class EARGeoTrackingStateReason GetGeoTrackingStateReason(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class EARGeoTrackingState GetGeoTrackingState(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class EARGeoTrackingAccuracy GetGeoTrackingAccuracy(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, struct FString OptionalAnchorName); // (Native|Public|BlueprintCallable)
	bool AddGeoAnchorAtLocation(float Longitude, float Latitude, struct FString OptionalAnchorName); // (Native|Public|BlueprintCallable)
};

// Class AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailed; 

	void GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, struct FString Error); // DelegateFunction AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) 
	struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation(struct UObject* WorldContextObject, float Longitude, float Latitude); // (Final|Native|Static|Public|BlueprintCallable)
	struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
struct UGetGeoLocationAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFailed; 

	void GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, struct FString Error); // DelegateFunction AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) 
	struct UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(struct UObject* WorldContextObject, struct FVector& WorldPosition); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
};

// Class AugmentedReality.ARLifeCycleComponent
struct UARLifeCycleComponent : USceneComponent {
	struct FMulticastInlineDelegate OnARActorSpawnedDelegate; 
	struct FMulticastInlineDelegate OnARActorToBeDestroyedDelegate; 

	void ServerSpawnARActor(struct UObject* ComponentClass, struct FGuid NativeID); // (Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults|NetValidate)
	void ServerDestroyARActor(struct AARActor* Actor); // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate)
	void InstanceARActorToBeDestroyedDelegate__DelegateSignature(struct AARActor* Actor); // DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) 
	void InstanceARActorSpawnedDelegate__DelegateSignature(struct UObject* ComponentClass, struct FGuid NativeID, struct AARActor* SpawnedActor); // DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasDefaults) 
};

// Class AugmentedReality.ARLightEstimate
struct UARLightEstimate : UObject {
};

// Class AugmentedReality.ARBasicLightEstimate
struct UARBasicLightEstimate : UARLightEstimate {
	float AmbientIntensityLumens; 
	float AmbientColorTemperatureKelvin; 
	struct FLinearColor AmbientColor; 

	float GetAmbientIntensityLumens(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetAmbientColorTemperatureKelvin(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FLinearColor GetAmbientColor(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
};

// Class AugmentedReality.AROriginActor
struct AAROriginActor : AActor {
};

// Class AugmentedReality.ARPin
struct UARPin : UObject {
	struct UARTrackedGeometry* TrackedGeometry; 
	struct USceneComponent* PinnedComponent; 
	struct FTransform LocalToTrackingTransform; 
	struct FTransform LocalToAlignedTrackingTransform; 
	enum class EARTrackingState TrackingState; 
	struct FMulticastInlineDelegate OnARTrackingStateChanged; 
	struct FMulticastInlineDelegate OnARTransformUpdated; 

	enum class EARTrackingState GetTrackingState(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UARTrackedGeometry* GetTrackedGeometry(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct USceneComponent* GetPinnedComponent(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FTransform GetLocalToWorldTransform(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FTransform GetLocalToTrackingTransform(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FName GetDebugName(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void DebugDraw(struct UWorld* World, struct FLinearColor& Color, float Scale, float PersistForSeconds); // (Native|Public|HasOutParms|HasDefaults|Const)
};

// Class AugmentedReality.ARSessionConfig
struct UARSessionConfig : UDataAsset {
	bool bGenerateMeshDataFromTrackedGeometry; 
	bool bGenerateCollisionForMeshData; 
	bool bGenerateNavMeshForMeshData; 
	bool bUseMeshDataForOcclusion; 
	bool bRenderMeshDataInWireframe; 
	bool bTrackSceneObjects; 
	bool bUsePersonSegmentationForOcclusion; 
	bool bUseSceneDepthForOcclusion; 
	bool bUseAutomaticImageScaleEstimation; 
	bool bUseStandardOnboardingUX; 
	enum class EARWorldAlignment WorldAlignment; 
	enum class EARSessionType SessionType; 
	enum class EARPlaneDetectionMode PlaneDetectionMode; 
	bool bHorizontalPlaneDetection; 
	bool bVerticalPlaneDetection; 
	bool bEnableAutoFocus; 
	enum class EARLightEstimationMode LightEstimationMode; 
	enum class EARFrameSyncMode FrameSyncMode; 
	bool bEnableAutomaticCameraOverlay; 
	bool bEnableAutomaticCameraTracking; 
	bool bResetCameraTracking; 
	bool bResetTrackedObjects; 
	struct TArray<struct UARCandidateImage*> CandidateImages; 
	int32_t MaxNumSimultaneousImagesTracked; 
	enum class EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType; 
	struct TArray<char> WorldMapData; 
	struct TArray<struct UARCandidateObject*> CandidateObjects; 
	struct FARVideoFormat DesiredVideoFormat; 
	bool bUseOptimalVideoFormat; 
	enum class EARFaceTrackingDirection FaceTrackingDirection; 
	enum class EARFaceTrackingUpdate FaceTrackingUpdate; 
	int32_t MaxNumberOfTrackedFaces; 
	struct TArray<char> SerializedARCandidateImageDatabase; 
	enum class EARSessionTrackingFeature EnabledSessionTrackingFeature; 
	enum class EARSceneReconstruction SceneReconstructionMethod; 
	struct UARPlaneComponent* PlaneComponentClass; 
	struct UARPointComponent* PointComponentClass; 
	struct UARFaceComponent* FaceComponentClass; 
	struct UARImageComponent* ImageComponentClass; 
	struct UARQRCodeComponent* QRCodeComponentClass; 
	struct UARPoseComponent* PoseComponentClass; 
	struct UAREnvironmentProbeComponent* EnvironmentProbeComponentClass; 
	struct UARObjectComponent* ObjectComponentClass; 
	struct UARMeshComponent* MeshComponentClass; 
	struct UARGeoAnchorComponent* GeoAnchorComponentClass; 
	struct UMaterialInterface* DefaultMeshMaterial; 
	struct UMaterialInterface* DefaultWireframeMeshMaterial; 

	bool ShouldResetTrackedObjects(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool ShouldResetCameraTracking(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool ShouldRenderCameraOverlay(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool ShouldEnableCameraTracking(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool ShouldEnableAutoFocus(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void SetWorldMapData(struct TArray<char> WorldMapData); // (Final|Native|Public|BlueprintCallable)
	void SetSessionTrackingFeatureToEnable(enum class EARSessionTrackingFeature InSessionTrackingFeature); // (Final|Native|Public|BlueprintCallable)
	void SetSceneReconstructionMethod(enum class EARSceneReconstruction InSceneReconstructionMethod); // (Final|Native|Public|BlueprintCallable)
	void SetResetTrackedObjects(bool bNewValue); // (Final|Native|Public|BlueprintCallable)
	void SetResetCameraTracking(bool bNewValue); // (Final|Native|Public|BlueprintCallable)
	void SetFaceTrackingUpdate(enum class EARFaceTrackingUpdate InUpdate); // (Final|Native|Public|BlueprintCallable)
	void SetFaceTrackingDirection(enum class EARFaceTrackingDirection InDirection); // (Final|Native|Public|BlueprintCallable)
	void SetEnableAutoFocus(bool bNewValue); // (Final|Native|Public|BlueprintCallable)
	void SetDesiredVideoFormat(struct FARVideoFormat NewFormat); // (Final|Native|Public|BlueprintCallable)
	void SetCandidateObjectList(struct TArray<struct UARCandidateObject*>& InCandidateObjects); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	struct TArray<char> GetWorldMapData(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class EARWorldAlignment GetWorldAlignment(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class EARSessionType GetSessionType(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class EARSceneReconstruction GetSceneReconstructionMethod(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class EARPlaneDetectionMode GetPlaneDetectionMode(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetMaxNumSimultaneousImagesTracked(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class EARLightEstimationMode GetLightEstimationMode(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class EARFrameSyncMode GetFrameSyncMode(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class EARFaceTrackingUpdate GetFaceTrackingUpdate(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class EARFaceTrackingDirection GetFaceTrackingDirection(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class EARSessionTrackingFeature GetEnabledSessionTrackingFeature(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FARVideoFormat GetDesiredVideoFormat(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct UARCandidateObject*> GetCandidateObjectList(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct UARCandidateImage*> GetCandidateImageList(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void AddCandidateObject(struct UARCandidateObject* CandidateObject); // (Final|Native|Public|BlueprintCallable)
	void AddCandidateImage(struct UARCandidateImage* NewCandidateImage); // (Final|Native|Public|BlueprintCallable)
};

// Class AugmentedReality.ARSharedWorldGameMode
struct AARSharedWorldGameMode : AGameMode {
	int32_t BufferSizePerChunk; 

	void SetPreviewImageData(struct TArray<char> ImageData); // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable)
	void SetARWorldSharingIsReady(); // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable)
	void SetARSharedWorldData(struct TArray<char> ARWorldData); // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable)
	struct AARSharedWorldGameState* GetARSharedWorldGameState(); // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable)
};

// Class AugmentedReality.ARSharedWorldGameState
struct AARSharedWorldGameState : AGameState {
	struct TArray<char> PreviewImageData; 
	struct TArray<char> ARWorldData; 
	int32_t PreviewImageBytesTotal; 
	int32_t ARWorldBytesTotal; 
	int32_t PreviewImageBytesDelivered; 
	int32_t ARWorldBytesDelivered; 

	void K2_OnARWorldMapIsReady(); // (Event|Public|BlueprintEvent)
};

// Class AugmentedReality.ARSharedWorldPlayerController
struct AARSharedWorldPlayerController : APlayerController {

	void ServerMarkReadyForReceiving(); // (Net|NetReliableNative|Event|Public|NetServer|NetValidate)
	void ClientUpdatePreviewImageData(int32_t Offset, struct TArray<char> Buffer); // (Net|NetReliableNative|Event|Public|NetClient|NetValidate)
	void ClientUpdateARWorldData(int32_t Offset, struct TArray<char> Buffer); // (Net|NetReliableNative|Event|Public|NetClient|NetValidate)
	void ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize); // (Net|NetReliableNative|Event|Public|NetClient|NetValidate)
};

// Class AugmentedReality.ARSkyLight
struct AARSkyLight : ASkyLight {
	struct UAREnvironmentCaptureProbe* CaptureProbe; 

	void SetEnvironmentCaptureProbe(struct UAREnvironmentCaptureProbe* InCaptureProbe); // (Final|Native|Public|BlueprintCallable)
};

// Class AugmentedReality.ARTexture
struct UARTexture : UTexture {
	enum class EARTextureType TextureType; 
	float Timestamp; 
	struct FGuid ExternalTextureGuid; 
	struct FVector2D Size; 
};

// Class AugmentedReality.ARTextureCameraImage
struct UARTextureCameraImage : UARTexture {
};

// Class AugmentedReality.ARTextureCameraDepth
struct UARTextureCameraDepth : UARTexture {
	enum class EARDepthQuality DepthQuality; 
	enum class EARDepthAccuracy DepthAccuracy; 
	bool bIsTemporallySmoothed; 
};

// Class AugmentedReality.AREnvironmentCaptureProbeTexture
struct UAREnvironmentCaptureProbeTexture : UTextureCube {
	enum class EARTextureType TextureType; 
	float Timestamp; 
	struct FGuid ExternalTextureGuid; 
	struct FVector2D Size; 
};

// Class AugmentedReality.ARTraceResultDummy
struct UARTraceResultDummy : UObject {
};

// Class AugmentedReality.ARTrackedGeometry
struct UARTrackedGeometry : UObject {
	struct FGuid UniqueId; 
	struct FTransform LocalToTrackingTransform; 
	struct FTransform LocalToAlignedTrackingTransform; 
	enum class EARTrackingState TrackingState; 
	struct UMRMeshComponent* UnderlyingMesh; 
	enum class EARObjectClassification ObjectClassification; 
	enum class EARSpatialMeshUsageFlags SpatialMeshUsageFlags; 
	int32_t LastUpdateFrameNumber; 
	struct FName DebugName; 

	bool IsTracked(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool HasSpatialMeshUsageFlag(enum class EARSpatialMeshUsageFlags InFlag); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UMRMeshComponent* GetUnderlyingMesh(); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	enum class EARTrackingState GetTrackingState(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class EARObjectClassification GetObjectClassification(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FString GetName(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FTransform GetLocalToWorldTransform(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FTransform GetLocalToTrackingTransform(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	float GetLastUpdateTimestamp(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetLastUpdateFrameNumber(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FName GetDebugName(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class AugmentedReality.ARPlaneGeometry
struct UARPlaneGeometry : UARTrackedGeometry {
	enum class EARPlaneOrientation Orientation; 
	struct FVector Center; 
	struct FVector Extent; 
	struct TArray<struct FVector> BoundaryPolygon; 
	struct UARPlaneGeometry* SubsumedBy; 

	struct UARPlaneGeometry* GetSubsumedBy(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class EARPlaneOrientation GetOrientation(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetExtent(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetCenter(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct FVector> GetBoundaryPolygonInLocalSpace(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class AugmentedReality.ARTrackedPoint
struct UARTrackedPoint : UARTrackedGeometry {
};

// Class AugmentedReality.ARTrackedImage
struct UARTrackedImage : UARTrackedGeometry {
	struct UARCandidateImage* DetectedImage; 
	struct FVector2D EstimatedSize; 

	struct FVector2D GetEstimateSize(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct UARCandidateImage* GetDetectedImage(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class AugmentedReality.ARTrackedQRCode
struct UARTrackedQRCode : UARTrackedImage {
	struct FString QRCode; 
	int32_t Version; 
};

// Class AugmentedReality.ARFaceGeometry
struct UARFaceGeometry : UARTrackedGeometry {
	struct FVector LookAtTarget; 
	bool bIsTracked; 
	struct TMap<enum class EARFaceBlendShape, float> BlendShapes; 
	struct FTransform LeftEyeTransform; 
	struct FTransform RightEyeTransform; 

	struct FTransform GetWorldSpaceEyeTransform(enum class EAREye Eye); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FTransform GetLocalSpaceEyeTransform(enum class EAREye Eye); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	float GetBlendShapeValue(enum class EARFaceBlendShape BlendShape); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TMap<enum class EARFaceBlendShape, float> GetBlendShapes(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class AugmentedReality.AREnvironmentCaptureProbe
struct UAREnvironmentCaptureProbe : UARTrackedGeometry {
	struct FVector Extent; 
	struct UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; 

	struct FVector GetExtent(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture(); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
};

// Class AugmentedReality.ARTrackedObject
struct UARTrackedObject : UARTrackedGeometry {
	struct UARCandidateObject* DetectedObject; 

	struct UARCandidateObject* GetDetectedObject(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class AugmentedReality.ARTrackedPose
struct UARTrackedPose : UARTrackedGeometry {
	struct FARPose3D TrackedPose; 

	struct FARPose3D GetTrackedPoseData(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class AugmentedReality.ARMeshGeometry
struct UARMeshGeometry : UARTrackedGeometry {

	bool GetObjectClassificationAtLocation(struct FVector& InWorldLocation, enum class EARObjectClassification& OutClassification, struct FVector& OutClassificationLocation, float MaxLocationDiff); // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
};

// Class AugmentedReality.ARGeoAnchor
struct UARGeoAnchor : UARTrackedGeometry {

	float GetLongitude(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetLatitude(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class EARAltitudeSource GetAltitudeSource(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetAltitudeMeters(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class AugmentedReality.ARTrackableNotifyComponent
struct UARTrackableNotifyComponent : UActorComponent {
	struct FMulticastInlineDelegate OnAddTrackedGeometry; 
	struct FMulticastInlineDelegate OnUpdateTrackedGeometry; 
	struct FMulticastInlineDelegate OnRemoveTrackedGeometry; 
	struct FMulticastInlineDelegate OnAddTrackedPlane; 
	struct FMulticastInlineDelegate OnUpdateTrackedPlane; 
	struct FMulticastInlineDelegate OnRemoveTrackedPlane; 
	struct FMulticastInlineDelegate OnAddTrackedPoint; 
	struct FMulticastInlineDelegate OnUpdateTrackedPoint; 
	struct FMulticastInlineDelegate OnRemoveTrackedPoint; 
	struct FMulticastInlineDelegate OnAddTrackedImage; 
	struct FMulticastInlineDelegate OnUpdateTrackedImage; 
	struct FMulticastInlineDelegate OnRemoveTrackedImage; 
	struct FMulticastInlineDelegate OnAddTrackedFace; 
	struct FMulticastInlineDelegate OnUpdateTrackedFace; 
	struct FMulticastInlineDelegate OnRemoveTrackedFace; 
	struct FMulticastInlineDelegate OnAddTrackedEnvProbe; 
	struct FMulticastInlineDelegate OnUpdateTrackedEnvProbe; 
	struct FMulticastInlineDelegate OnRemoveTrackedEnvProbe; 
	struct FMulticastInlineDelegate OnAddTrackedObject; 
	struct FMulticastInlineDelegate OnUpdateTrackedObject; 
	struct FMulticastInlineDelegate OnRemoveTrackedObject; 
};

// Class AugmentedReality.ARTypesDummyClass
struct UARTypesDummyClass : UObject {
};

// Class AugmentedReality.ARCandidateImage
struct UARCandidateImage : UDataAsset {
	struct UTexture2D* CandidateTexture; 
	struct FString FriendlyName; 
	float Width; 
	float Height; 
	enum class EARCandidateImageOrientation Orientation; 

	float GetPhysicalWidth(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetPhysicalHeight(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class EARCandidateImageOrientation GetOrientation(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FString GetFriendlyName(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UTexture2D* GetCandidateTexture(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class AugmentedReality.ARCandidateObject
struct UARCandidateObject : UDataAsset {
	struct TArray<char> CandidateObjectData; 
	struct FString FriendlyName; 
	struct FBox BoundingBox; 

	void SetFriendlyName(struct FString NewName); // (Final|Native|Public|BlueprintCallable)
	void SetCandidateObjectData(struct TArray<char>& InCandidateObject); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetBoundingBox(struct FBox& InBoundingBox); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FString GetFriendlyName(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<char> GetCandidateObjectData(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FBox GetBoundingBox(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
};

