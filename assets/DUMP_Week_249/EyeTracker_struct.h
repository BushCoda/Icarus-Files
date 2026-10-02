// Enum EyeTracker.EEyeTrackerStatus
enum class EEyeTrackerStatus : uint8 {
	NotConnected = 0,
	NotTracking = 1,
	Tracking = 2,
	EEyeTrackerStatus_MAX = 3
};

// ScriptStruct EyeTracker.EyeTrackerStereoGazeData
struct FEyeTrackerStereoGazeData {
	struct FVector LeftEyeOrigin; 
	struct FVector LeftEyeDirection; 
	struct FVector RightEyeOrigin; 
	struct FVector RightEyeDirection; 
	struct FVector FixationPoint; 
	float ConfidenceValue; 
};

// ScriptStruct EyeTracker.EyeTrackerGazeData
struct FEyeTrackerGazeData {
	struct FVector GazeOrigin; 
	struct FVector GazeDirection; 
	struct FVector FixationPoint; 
	float ConfidenceValue; 
};

