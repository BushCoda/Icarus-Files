// Enum MotionWarping.EWarpPointAnimProvider
enum class EWarpPointAnimProvider : uint8 {
	None = 0,
	Static = 1,
	Bone = 2,
	EWarpPointAnimProvider_MAX = 3
};

// Enum MotionWarping.EMotionWarpRotationType
enum class EMotionWarpRotationType : uint8 {
	Default = 0,
	Facing = 1,
	EMotionWarpRotationType_MAX = 2
};

// Enum MotionWarping.ERootMotionModifierState
enum class ERootMotionModifierState : uint8 {
	Waiting = 0,
	Active = 1,
	MarkedForRemoval = 2,
	Disabled = 3,
	ERootMotionModifierState_MAX = 4
};

// ScriptStruct MotionWarping.MotionWarpingWindowData
struct FMotionWarpingWindowData {
	struct UAnimNotifyState_MotionWarping* AnimNotify; 
	float StartTime; 
	float EndTime; 
};

// ScriptStruct MotionWarping.MotionWarpingTarget
struct FMotionWarpingTarget {
	struct FName Name; 
	struct FVector Location; 
	struct FRotator Rotation; 
	struct TWeakObjectPtr<struct USceneComponent> Component; 
	struct FName BoneName; 
	bool bFollowComponent; 
};

// ScriptStruct MotionWarping.MotionWarpingUpdateContext
struct FMotionWarpingUpdateContext {
	struct TWeakObjectPtr<struct UAnimSequenceBase> Animation; 
	float PreviousPosition; 
	float CurrentPosition; 
	float Weight; 
	float PlayRate; 
	float DeltaSeconds; 
};

// ScriptStruct MotionWarping.MotionDeltaTrackContainer
struct FMotionDeltaTrackContainer {
	struct TArray<struct FMotionDeltaTrack> Tracks; 
};

// ScriptStruct MotionWarping.MotionDeltaTrack
struct FMotionDeltaTrack {
	struct TArray<struct FTransform> BoneTransformTrack; 
	struct TArray<struct FVector> DeltaTranslationTrack; 
	struct TArray<struct FRotator> DeltaRotationTrack; 
	struct FVector TotalTranslation; 
	struct FRotator TotalRotation; 
};

