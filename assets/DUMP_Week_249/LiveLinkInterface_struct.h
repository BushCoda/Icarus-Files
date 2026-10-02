// Enum LiveLinkInterface.ELiveLinkCameraProjectionMode
enum class ELiveLinkCameraProjectionMode : uint8 {
	Perspective = 0,
	Orthographic = 1,
	ELiveLinkCameraProjectionMode_MAX = 2
};

// Enum LiveLinkInterface.ELiveLinkSourceMode
enum class ELiveLinkSourceMode : uint8 {
	Latest = 0,
	EngineTime = 1,
	Timecode = 2,
	ELiveLinkSourceMode_MAX = 3
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseBlueprintData
struct FLiveLinkBaseBlueprintData {
};

// ScriptStruct LiveLinkInterface.SubjectFrameHandle
struct FSubjectFrameHandle : FLiveLinkBaseBlueprintData {
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectName
struct FLiveLinkSubjectName {
	struct FName Name; 
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectPreset
struct FLiveLinkSubjectPreset {
	struct FLiveLinkSubjectKey Key; 
	struct ULiveLinkRole* Role; 
	struct ULiveLinkSubjectSettings* Settings; 
	struct ULiveLinkVirtualSubject* VirtualSubject; 
	bool bEnabled; 
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectKey
struct FLiveLinkSubjectKey {
	struct FGuid Source; 
	struct FLiveLinkSubjectName SubjectName; 
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceHandle
struct FLiveLinkSourceHandle {
};

// ScriptStruct LiveLinkInterface.LiveLinkTransform
struct FLiveLinkTransform {
};

// ScriptStruct LiveLinkInterface.CachedSubjectFrame
struct FCachedSubjectFrame {
};

// ScriptStruct LiveLinkInterface.SubjectMetadata
struct FSubjectMetadata {
	struct TMap<struct FName, struct FString> StringMetadata; 
	struct FTimecode SceneTimecode; 
	struct FFrameRate SceneFramerate; 
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseFrameData
struct FLiveLinkBaseFrameData {
	struct FLiveLinkWorldTime WorldTime; 
	struct FLiveLinkMetaData MetaData; 
	struct TArray<float> PropertyValues; 
};

// ScriptStruct LiveLinkInterface.LiveLinkMetaData
struct FLiveLinkMetaData {
	struct TMap<struct FName, struct FString> StringMetadata; 
	struct FQualifiedFrameTime SceneTime; 
};

// ScriptStruct LiveLinkInterface.LiveLinkWorldTime
struct FLiveLinkWorldTime {
	double Time; 
	double Offset; 
};

// ScriptStruct LiveLinkInterface.LiveLinkAnimationFrameData
struct FLiveLinkAnimationFrameData : FLiveLinkBaseFrameData {
	struct TArray<struct FTransform> Transforms; 
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseStaticData
struct FLiveLinkBaseStaticData {
	struct TArray<struct FName> PropertyNames; 
};

// ScriptStruct LiveLinkInterface.LiveLinkSkeletonStaticData
struct FLiveLinkSkeletonStaticData : FLiveLinkBaseStaticData {
	struct TArray<struct FName> BoneNames; 
	struct TArray<int32_t> BoneParents; 
};

// ScriptStruct LiveLinkInterface.LiveLinkBasicBlueprintData
struct FLiveLinkBasicBlueprintData : FLiveLinkBaseBlueprintData {
	struct FLiveLinkBaseStaticData StaticData; 
	struct FLiveLinkBaseFrameData FrameData; 
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraBlueprintData
struct FLiveLinkCameraBlueprintData : FLiveLinkBaseBlueprintData {
	struct FLiveLinkCameraStaticData StaticData; 
	struct FLiveLinkCameraFrameData FrameData; 
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformFrameData
struct FLiveLinkTransformFrameData : FLiveLinkBaseFrameData {
	struct FTransform Transform; 
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraFrameData
struct FLiveLinkCameraFrameData : FLiveLinkTransformFrameData {
	float FieldOfView; 
	float AspectRatio; 
	float FocalLength; 
	float Aperture; 
	float FocusDistance; 
	enum class ELiveLinkCameraProjectionMode ProjectionMode; 
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformStaticData
struct FLiveLinkTransformStaticData : FLiveLinkBaseStaticData {
	bool bIsLocationSupported; 
	bool bIsRotationSupported; 
	bool bIsScaleSupported; 
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraStaticData
struct FLiveLinkCameraStaticData : FLiveLinkTransformStaticData {
	bool bIsFieldOfViewSupported; 
	bool bIsAspectRatioSupported; 
	bool bIsFocalLengthSupported; 
	bool bIsProjectionModeSupported; 
	float FilmBackWidth; 
	float FilmBackHeight; 
	bool bIsApertureSupported; 
	bool bIsFocusDistanceSupported; 
};

// ScriptStruct LiveLinkInterface.LiveLinkCurveConversionSettings
struct FLiveLinkCurveConversionSettings {
	struct TMap<struct FString, struct FSoftObjectPath> CurveConversionAssetMap; 
};

// ScriptStruct LiveLinkInterface.LiveLinkLightBlueprintData
struct FLiveLinkLightBlueprintData : FLiveLinkBaseBlueprintData {
	struct FLiveLinkLightStaticData StaticData; 
	struct FLiveLinkLightFrameData FrameData; 
};

// ScriptStruct LiveLinkInterface.LiveLinkLightFrameData
struct FLiveLinkLightFrameData : FLiveLinkTransformFrameData {
	float Temperature; 
	float Intensity; 
	struct FColor LightColor; 
	float InnerConeAngle; 
	float OuterConeAngle; 
	float AttenuationRadius; 
	float SourceRadius; 
	float SoftSourceRadius; 
	float SourceLength; 
};

// ScriptStruct LiveLinkInterface.LiveLinkLightStaticData
struct FLiveLinkLightStaticData : FLiveLinkTransformStaticData {
	bool bIsTemperatureSupported; 
	bool bIsIntensitySupported; 
	bool bIsLightColorSupported; 
	bool bIsInnerConeAngleSupported; 
	bool bIsOuterConeAngleSupported; 
	bool bIsAttenuationRadiusSupported; 
	bool bIsSourceLenghtSupported; 
	bool bIsSourceRadiusSupported; 
	bool bIsSoftSourceRadiusSupported; 
};

// ScriptStruct LiveLinkInterface.LiveLinkSourcePreset
struct FLiveLinkSourcePreset {
	struct FGuid Guid; 
	struct ULiveLinkSourceSettings* Settings; 
	struct FText SourceType; 
};

// ScriptStruct LiveLinkInterface.LiveLinkRefSkeleton
struct FLiveLinkRefSkeleton {
	struct TArray<struct FName> BoneNames; 
	struct TArray<int32_t> BoneParents; 
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectRepresentation
struct FLiveLinkSubjectRepresentation {
	struct FLiveLinkSubjectName Subject; 
	struct ULiveLinkRole* Role; 
};

// ScriptStruct LiveLinkInterface.LiveLinkInterpolationSettings
struct FLiveLinkInterpolationSettings {
	bool bUseInterpolation; 
	float InterpolationOffset; 
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeSynchronizationSettings
struct FLiveLinkTimeSynchronizationSettings {
	struct FFrameRate FrameRate; 
	struct FFrameNumber FrameOffset; 
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceDebugInfo
struct FLiveLinkSourceDebugInfo {
	struct FLiveLinkSubjectName SubjectName; 
	int32_t SnapshotIndex; 
	int32_t NumberOfBufferAtSnapshot; 
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceBufferManagementSettings
struct FLiveLinkSourceBufferManagementSettings {
	bool bValidEngineTimeEnabled; 
	float ValidEngineTime; 
	float EngineTimeOffset; 
	double EngineTimeClockOffset; 
	bool bGenerateSubFrame; 
	struct FFrameRate DetectedFrameRate; 
	bool bUseTimecodeSmoothLatest; 
	struct FFrameRate SourceTimecodeFrameRate; 
	bool bValidTimecodeFrameEnabled; 
	int32_t ValidTimecodeFrame; 
	float TimecodeFrameOffset; 
	double TimecodeClockOffset; 
	int32_t LatestOffset; 
	int32_t MaxNumberOfFrameToBuffered; 
	bool bKeepAtLeastOneFrame; 
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformBlueprintData
struct FLiveLinkTransformBlueprintData : FLiveLinkBaseBlueprintData {
	struct FLiveLinkTransformStaticData StaticData; 
	struct FLiveLinkTransformFrameData FrameData; 
};

// ScriptStruct LiveLinkInterface.LiveLinkFrameData
struct FLiveLinkFrameData {
	struct TArray<struct FTransform> Transforms; 
	struct TArray<struct FLiveLinkCurveElement> CurveElements; 
	struct FLiveLinkWorldTime WorldTime; 
	struct FLiveLinkMetaData MetaData; 
};

// ScriptStruct LiveLinkInterface.LiveLinkCurveElement
struct FLiveLinkCurveElement {
	struct FName CurveName; 
	float CurveValue; 
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
struct FLiveLinkTimeCode_Base_DEPRECATED {
	int32_t Seconds; 
	int32_t Frames; 
	struct FLiveLinkFrameRate FrameRate; 
};

// ScriptStruct LiveLinkInterface.LiveLinkFrameRate
struct FLiveLinkFrameRate : FFrameRate {
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode
struct FLiveLinkTimeCode : FLiveLinkTimeCode_Base_DEPRECATED {
};

// ScriptStruct LiveLinkInterface.LiveLinkTime
struct FLiveLinkTime {
	double WorldTime; 
	struct FQualifiedFrameTime SceneTime; 
};

