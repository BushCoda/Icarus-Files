// Enum LiveLink.ELiveLinkAxis
enum class ELiveLinkAxis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	XNeg = 3,
	YNeg = 4,
	ZNeg = 5,
	ELiveLinkAxis_MAX = 6
};

// Enum LiveLink.ELiveLinkTimecodeProviderEvaluationType
enum class ELiveLinkTimecodeProviderEvaluationType : uint8 {
	Lerp = 0,
	Nearest = 1,
	Latest = 2,
	ELiveLinkTimecodeProviderEvaluationType_MAX = 3
};

// ScriptStruct LiveLink.AnimNode_LiveLinkPose
struct FAnimNode_LiveLinkPose : FAnimNode_Base {
	struct FPoseLink InputPose; 
	struct FLiveLinkSubjectName LiveLinkSubjectName; 
	struct ULiveLinkRetargetAsset* RetargetAsset; 
	struct ULiveLinkRetargetAsset* CurrentRetargetAsset; 
};

// ScriptStruct LiveLink.LiveLinkInstanceProxy
struct FLiveLinkInstanceProxy : FAnimInstanceProxy {
	struct FAnimNode_LiveLinkPose PoseNode; 
};

// ScriptStruct LiveLink.ProviderPollResult
struct FProviderPollResult {
	struct FString Name; 
	struct FString MachineName; 
	double MachineTimeOffset; 
};

// ScriptStruct LiveLink.LiveLinkRetargetAssetReference
struct FLiveLinkRetargetAssetReference {
};

// ScriptStruct LiveLink.LiveLinkRoleProjectSetting
struct FLiveLinkRoleProjectSetting {
	struct ULiveLinkRole* Role; 
	struct ULiveLinkSubjectSettings* SettingClass; 
	struct ULiveLinkFrameInterpolationProcessor* FrameInterpolationProcessor; 
	struct TArray<struct ULiveLinkFramePreProcessor*> FramePreProcessors; 
};

