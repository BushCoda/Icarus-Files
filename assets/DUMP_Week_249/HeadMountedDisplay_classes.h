// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
struct UHeadMountedDisplayFunctionLibrary : UBlueprintFunctionLibrary {

	void UpdateExternalTrackingHMDPosition(struct FTransform& ExternalTrackingTransform); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetXRTimedInputActionDelegate(struct FName& ActionName, struct FDelegate& InDelegate); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetXRDisconnectDelegate(struct FDelegate& InDisconnectedDelegate); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetWorldToMetersScale(struct UObject* WorldContext, float NewScale); // (Final|Native|Static|Public|BlueprintCallable)
	void SetTrackingOrigin(enum class EHMDTrackingOrigin Origin); // (Final|Native|Static|Public|BlueprintCallable)
	void SetSpectatorScreenTexture(struct UTexture* InTexture); // (Final|Native|Static|Public|BlueprintCallable)
	void SetSpectatorScreenModeTexturePlusEyeLayout(struct FVector2D EyeRectMin, struct FVector2D EyeRectMax, struct FVector2D TextureRectMin, struct FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void SetSpectatorScreenMode(enum class ESpectatorScreenMode Mode); // (Final|Native|Static|Public|BlueprintCallable)
	void SetClippingPlanes(float Near, float Far); // (Final|Native|Static|Public|BlueprintCallable)
	void ResetOrientationAndPosition(float Yaw, enum class EOrientPositionSelector Options); // (Final|Native|Static|Public|BlueprintCallable)
	bool IsSpectatorScreenModeControllable(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsInLowPersistenceMode(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsHeadMountedDisplayEnabled(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsHeadMountedDisplayConnected(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsDeviceTracking(struct FXRDeviceId& XRDeviceId); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	bool HasValidTrackingPosition(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t GetXRSystemFlags(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float GetWorldToMetersScale(struct UObject* WorldContext); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void GetVRFocusState(bool& bUseFocus, bool& bHasFocus); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FString GetVersionString(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FTransform GetTrackingToWorldTransform(struct UObject* WorldContext); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void GetTrackingSensorParameters(struct FVector& Origin, struct FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32_t Index); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	enum class EHMDTrackingOrigin GetTrackingOrigin(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float GetScreenPercentage(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void GetPositionalTrackingCameraParameters(struct FVector& CameraOrigin, struct FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D GetPlayAreaBounds(enum class EHMDTrackingOrigin Origin); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	float GetPixelDensity(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void GetOrientationAndPosition(struct FRotator& DeviceRotation, struct FVector& DevicePosition); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	int32_t GetNumOfTrackingSensors(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void GetMotionControllerData(struct UObject* WorldContext, enum class EControllerHand Hand, struct FXRMotionControllerData& MotionControllerData); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	enum class EHMDWornState GetHMDWornState(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FName GetHMDDeviceName(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void GetHMDData(struct UObject* WorldContext, struct FXRHMDData& HMDData); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetDeviceWorldPose(struct UObject* WorldContext, struct FXRDeviceId& XRDeviceId, bool& bIsTracked, struct FRotator& Orientation, bool& bHasPositionalTracking, struct FVector& position); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void GetDevicePose(struct FXRDeviceId& XRDeviceId, bool& bIsTracked, struct FRotator& Orientation, bool& bHasPositionalTracking, struct FVector& position); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool GetControllerTransformForTime(struct UObject* WorldContext, int32_t ControllerIndex, struct FName MotionSource, struct FTimespan Time, bool& bTimeWasUsed, struct FRotator& Orientation, struct FVector& position, bool& bProvidedLinearVelocity, struct FVector& LinearVelocity, bool& bProvidedAngularVelocity, struct FVector& AngularVelocityRadPerSec); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct TArray<struct FXRDeviceId> EnumerateTrackedDevices(struct FName SystemId, enum class EXRTrackedDeviceType DeviceType); // (Final|Native|Static|Public|BlueprintCallable)
	void EnableLowPersistenceMode(bool bEnable); // (Final|Native|Static|Public|BlueprintCallable)
	bool EnableHMD(bool bEnable); // (Final|Native|Static|Public|BlueprintCallable)
	void DisconnectRemoteXRDevice(); // (Final|Native|Static|Public|BlueprintCallable)
	enum class EXRDeviceConnectionResult ConnectRemoteXRDevice(struct FString IpAddress, int32_t BitRate); // (Final|Native|Static|Public|BlueprintCallable)
	bool ConfigureGestures(struct FXRGestureConfig& GestureConfig); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void ClearXRTimedInputActionDelegate(struct FName& ActionPath); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void CalibrateExternalTrackingToHMD(struct FTransform& ExternalTrackingTransform); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void BreakKey(struct FKey InKey, struct FString& InteractionProfile, enum class EControllerHand& Hand, struct FName& MotionSource, struct FString& Indentifier, struct FString& Component); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
};

// Class HeadMountedDisplay.HandKeypointConversion
struct UHandKeypointConversion : UBlueprintFunctionLibrary {

	int32_t Conv_HandKeypointToInt32(enum class EHandKeypoint Input); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
};

// Class HeadMountedDisplay.MotionControllerComponent
struct UMotionControllerComponent : UPrimitiveComponent {
	int32_t PlayerIndex; 
	enum class EControllerHand Hand; 
	struct FName MotionSource; 
	char bDisableLowLatencyUpdate : 1; 
	enum class ETrackingStatus CurrentTrackingStatus; 
	bool bDisplayDeviceModel; 
	struct FName DisplayModelSource; 
	struct UStaticMesh* CustomDisplayMesh; 
	struct TArray<struct UMaterialInterface*> DisplayMeshMaterialOverrides; 
	struct UPrimitiveComponent* DisplayComponent; 

	void SetTrackingSource(enum class EControllerHand NewSource); // (Final|Native|Public|BlueprintCallable)
	void SetTrackingMotionSource(struct FName NewSource); // (Final|Native|Public|BlueprintCallable)
	void SetShowDeviceModel(bool bShowControllerModel); // (Final|Native|Public|BlueprintCallable)
	void SetDisplayModelSource(struct FName NewDisplayModelSource); // (Final|Native|Public|BlueprintCallable)
	void SetCustomDisplayMesh(struct UStaticMesh* NewDisplayMesh); // (Final|Native|Public|BlueprintCallable)
	void SetAssociatedPlayerIndex(int32_t NewPlayer); // (Final|Native|Public|BlueprintCallable)
	void OnMotionControllerUpdated(); // (Event|Protected|BlueprintEvent)
	bool IsTracked(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class EControllerHand GetTrackingSource(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetParameterValue(struct FName InName, bool& bValueFound); // (Final|Native|Protected|HasOutParms|BlueprintCallable)
	struct FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound); // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable)
};

// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
struct UMotionTrackedDeviceFunctionLibrary : UBlueprintFunctionLibrary {

	void SetIsControllerMotionTrackingEnabledByDefault(bool enable); // (Final|Native|Static|Public|BlueprintCallable)
	bool IsMotionTrackingEnabledForSource(int32_t PlayerIndex, struct FName SourceName); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, enum class EControllerHand Hand); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsMotionTrackingEnabledForComponent(struct UMotionControllerComponent* MotionControllerComponent); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsMotionTrackedDeviceCountManagementNecessary(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsMotionSourceTracking(int32_t PlayerIndex, struct FName SourceName); // (Final|Native|Static|Public|BlueprintCallable)
	int32_t GetMotionTrackingEnabledControllerCount(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t GetMaximumMotionTrackedControllerCount(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FName GetActiveTrackingSystemName(); // (Final|Native|Static|Public|BlueprintCallable)
	struct TArray<struct FName> EnumerateMotionSources(); // (Final|Native|Static|Public|BlueprintCallable)
	bool EnableMotionTrackingOfSource(int32_t PlayerIndex, struct FName SourceName); // (Final|Native|Static|Public|BlueprintCallable)
	bool EnableMotionTrackingOfDevice(int32_t PlayerIndex, enum class EControllerHand Hand); // (Final|Native|Static|Public|BlueprintCallable)
	bool EnableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent); // (Final|Native|Static|Public|BlueprintCallable)
	void DisableMotionTrackingOfSource(int32_t PlayerIndex, struct FName SourceName); // (Final|Native|Static|Public|BlueprintCallable)
	void DisableMotionTrackingOfDevice(int32_t PlayerIndex, enum class EControllerHand Hand); // (Final|Native|Static|Public|BlueprintCallable)
	void DisableMotionTrackingOfControllersForPlayer(int32_t PlayerIndex); // (Final|Native|Static|Public|BlueprintCallable)
	void DisableMotionTrackingOfAllControllers(); // (Final|Native|Static|Public|BlueprintCallable)
	void DisableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class HeadMountedDisplay.VRNotificationsComponent
struct UVRNotificationsComponent : UActorComponent {
	struct FMulticastInlineDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; 
	struct FMulticastInlineDelegate HMDTrackingInitializedDelegate; 
	struct FMulticastInlineDelegate HMDRecenteredDelegate; 
	struct FMulticastInlineDelegate HMDLostDelegate; 
	struct FMulticastInlineDelegate HMDReconnectedDelegate; 
	struct FMulticastInlineDelegate HMDConnectCanceledDelegate; 
	struct FMulticastInlineDelegate HMDPutOnHeadDelegate; 
	struct FMulticastInlineDelegate HMDRemovedFromHeadDelegate; 
	struct FMulticastInlineDelegate VRControllerRecenteredDelegate; 
};

// Class HeadMountedDisplay.XRAssetFunctionLibrary
struct UXRAssetFunctionLibrary : UBlueprintFunctionLibrary {

	struct UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(struct AActor* Target, struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform& RelativeTransform); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
};

// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
struct UAsyncTask_LoadXRDeviceVisComponent : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnModelLoaded; 
	struct FMulticastInlineDelegate OnLoadFailure; 
	struct UPrimitiveComponent* SpawnedComponent; 

	struct UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId, struct UPrimitiveComponent*& NewComponent); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(struct AActor* Target, struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform& RelativeTransform, struct UPrimitiveComponent*& NewComponent); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
};

// Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
struct UXRLoadingScreenFunctionLibrary : UBlueprintFunctionLibrary {

	void ShowLoadingScreen(); // (Final|Native|Static|Public|BlueprintCallable)
	void SetLoadingScreen(struct UTexture* Texture, struct FVector2D Scale, struct FVector Offset, bool bShowLoadingMovie, bool bShowOnSet); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void HideLoadingScreen(); // (Final|Native|Static|Public|BlueprintCallable)
	void ClearLoadingScreenSplashes(); // (Final|Native|Static|Public|BlueprintCallable)
	void AddLoadingScreenSplash(struct UTexture* Texture, struct FVector Translation, struct FRotator Rotation, struct FVector2D Size, struct FRotator DeltaRotation, bool bClearBeforeAdd); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
};

