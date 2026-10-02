// Enum HeadMountedDisplay.EXRVisualType
enum class EXRVisualType : uint8 {
	Controller = 0,
	Hand = 1,
	EXRVisualType_MAX = 2
};

// Enum HeadMountedDisplay.EHandKeypoint
enum class EHandKeypoint : uint8 {
	Palm = 0,
	Wrist = 1,
	ThumbMetacarpal = 2,
	ThumbProximal = 3,
	ThumbDistal = 4,
	ThumbTip = 5,
	IndexMetacarpal = 6,
	IndexProximal = 7,
	IndexIntermediate = 8,
	IndexDistal = 9,
	IndexTip = 10,
	MiddleMetacarpal = 11,
	MiddleProximal = 12,
	MiddleIntermediate = 13,
	MiddleDistal = 14,
	MiddleTip = 15,
	RingMetacarpal = 16,
	RingProximal = 17,
	RingIntermediate = 18,
	RingDistal = 19,
	RingTip = 20,
	LittleMetacarpal = 21,
	LittleProximal = 22,
	LittleIntermediate = 23,
	LittleDistal = 24,
	LittleTip = 25,
	EHandKeypoint_MAX = 26
};

// Enum HeadMountedDisplay.EXRTrackedDeviceType
enum class EXRTrackedDeviceType : uint8 {
	HeadMountedDisplay = 0,
	Controller = 1,
	TrackingReference = 2,
	Other = 3,
	Invalid = 254,
	Any = 255,
	EXRTrackedDeviceType_MAX = 256
};

// Enum HeadMountedDisplay.ESpectatorScreenMode
enum class ESpectatorScreenMode : uint8 {
	Disabled = 0,
	SingleEyeLetterboxed = 1,
	Undistorted = 2,
	Distorted = 3,
	SingleEye = 4,
	SingleEyeCroppedToFill = 5,
	Texture = 6,
	TexturePlusEye = 7,
	ESpectatorScreenMode_MAX = 8
};

// Enum HeadMountedDisplay.EXRSystemFlags
enum class EXRSystemFlags : uint8 {
	NoFlags = 0,
	IsAR = 1,
	IsTablet = 2,
	IsHeadMounted = 4,
	SupportsHandTracking = 8,
	EXRSystemFlags_MAX = 9
};

// Enum HeadMountedDisplay.EXRDeviceConnectionResult
enum class EXRDeviceConnectionResult : uint8 {
	NoTrackingSystem = 0,
	FeatureNotSupported = 1,
	NoValidViewport = 2,
	MiscFailure = 3,
	Success = 4,
	EXRDeviceConnectionResult_MAX = 5
};

// Enum HeadMountedDisplay.EHMDWornState
enum class EHMDWornState : uint8 {
	Unknown = 0,
	Worn = 1,
	NotWorn = 2,
	EHMDWornState_MAX = 3
};

// Enum HeadMountedDisplay.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8 {
	Floor = 0,
	Eye = 1,
	Stage = 2,
	EHMDTrackingOrigin_MAX = 3
};

// Enum HeadMountedDisplay.EOrientPositionSelector
enum class EOrientPositionSelector : uint8 {
	Orientation = 0,
	Position = 1,
	OrientationAndPosition = 2,
	EOrientPositionSelector_MAX = 3
};

// Enum HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8 {
	NotTracked = 0,
	InertialOnly = 1,
	Tracked = 2,
	ETrackingStatus_MAX = 3
};

// Enum HeadMountedDisplay.ESpatialInputGestureAxis
enum class ESpatialInputGestureAxis : uint8 {
	None = 0,
	Manipulation = 1,
	Navigation = 2,
	NavigationRails = 3,
	ESpatialInputGestureAxis_MAX = 4
};

// ScriptStruct HeadMountedDisplay.XRMotionControllerData
struct FXRMotionControllerData {
	bool bValid; 
	struct FName DeviceName; 
	struct FGuid ApplicationInstanceID; 
	enum class EXRVisualType DeviceVisualType; 
	enum class EControllerHand HandIndex; 
	enum class ETrackingStatus TrackingStatus; 
	struct FVector GripPosition; 
	struct FQuat GripRotation; 
	struct FVector AimPosition; 
	struct FQuat AimRotation; 
	struct TArray<struct FVector> HandKeyPositions; 
	struct TArray<struct FQuat> HandKeyRotations; 
	struct TArray<float> HandKeyRadii; 
	bool bIsGrasped; 
};

// ScriptStruct HeadMountedDisplay.XRHMDData
struct FXRHMDData {
	bool bValid; 
	struct FName DeviceName; 
	struct FGuid ApplicationInstanceID; 
	enum class ETrackingStatus TrackingStatus; 
	struct FVector position; 
	struct FQuat Rotation; 
};

// ScriptStruct HeadMountedDisplay.XRDeviceId
struct FXRDeviceId {
	struct FName SystemName; 
	int32_t DeviceID; 
};

// ScriptStruct HeadMountedDisplay.XRGestureConfig
struct FXRGestureConfig {
	bool bTap; 
	bool bHold; 
	enum class ESpatialInputGestureAxis AxisGesture; 
	bool bNavigationAxisX; 
	bool bNavigationAxisY; 
	bool bNavigationAxisZ; 
};

