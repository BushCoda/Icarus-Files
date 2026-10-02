// Enum CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod : uint8 {
	DoNotOverride = 0,
	Manual = 1,
	Tracking = 2,
	Disable = 3,
	MAX = 4
};

// ScriptStruct CinematicCamera.CameraLookatTrackingSettings
struct FCameraLookatTrackingSettings {
	char bEnableLookAtTracking : 1; 
	char bDrawDebugLookAtTrackingPosition : 1; 
	float LookAtTrackingInterpSpeed; 
	struct TSoftObjectPtr<AActor> ActorToTrack; 
	struct FVector RelativeOffset; 
	char bAllowRoll : 1; 
};

// ScriptStruct CinematicCamera.CameraFocusSettings
struct FCameraFocusSettings {
	enum class ECameraFocusMethod FocusMethod; 
	float ManualFocusDistance; 
	struct FCameraTrackingFocusSettings TrackingFocusSettings; 
	char bDrawDebugFocusPlane : 1; 
	struct FColor DebugFocusPlaneColor; 
	char bSmoothFocusChanges : 1; 
	float FocusSmoothingInterpSpeed; 
	float FocusOffset; 
};

// ScriptStruct CinematicCamera.CameraTrackingFocusSettings
struct FCameraTrackingFocusSettings {
	struct TSoftObjectPtr<AActor> ActorToTrack; 
	struct FVector RelativeOffset; 
	char bDrawDebugTrackingFocusPoint : 1; 
};

// ScriptStruct CinematicCamera.NamedLensPreset
struct FNamedLensPreset {
	struct FString Name; 
	struct FCameraLensSettings LensSettings; 
};

// ScriptStruct CinematicCamera.CameraLensSettings
struct FCameraLensSettings {
	float MinFocalLength; 
	float MaxFocalLength; 
	float MinFStop; 
	float MaxFStop; 
	float MinimumFocusDistance; 
	int32_t DiaphragmBladeCount; 
};

// ScriptStruct CinematicCamera.NamedFilmbackPreset
struct FNamedFilmbackPreset {
	struct FString Name; 
	struct FCameraFilmbackSettings FilmbackSettings; 
};

// ScriptStruct CinematicCamera.CameraFilmbackSettings
struct FCameraFilmbackSettings {
	float SensorWidth; 
	float SensorHeight; 
	float SensorAspectRatio; 
};

