// Enum MovieSceneCapture.EHDRCaptureGamut
enum class EHDRCaptureGamut : uint8 {
	HCGM_Rec709 = 0,
	HCGM_P3DCI = 1,
	HCGM_Rec2020 = 2,
	HCGM_ACES = 3,
	HCGM_ACEScg = 4,
	HCGM_Linear = 5,
	HCGM_MAX = 6
};

// Enum MovieSceneCapture.EMovieSceneCaptureProtocolState
enum class EMovieSceneCaptureProtocolState : uint8 {
	Idle = 0,
	Initialized = 1,
	Capturing = 2,
	Finalizing = 3,
	EMovieSceneCaptureProtocolState_MAX = 4
};

// ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
struct FCompositionGraphCapturePasses {
	struct TArray<struct FString> Value; 
};

// ScriptStruct MovieSceneCapture.FrameMetrics
struct FFrameMetrics {
	float TotalElapsedTime; 
	float FrameDelta; 
	int32_t FrameNumber; 
	int32_t NumDroppedFrames; 
};

// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
struct FMovieSceneCaptureSettings {
	struct FDirectoryPath OutputDirectory; 
	struct AGameModeBase* GameModeOverride; 
	struct FString OutputFormat; 
	bool bOverwriteExisting; 
	bool bUseRelativeFrameNumbers; 
	int32_t HandleFrames; 
	struct FString MovieExtension; 
	char ZeroPadFrameNumbers; 
	struct FFrameRate FrameRate; 
	bool bUseCustomFrameRate; 
	struct FFrameRate CustomFrameRate; 
	struct FCaptureResolution Resolution; 
	bool bEnableTextureStreaming; 
	bool bCinematicEngineScalability; 
	bool bCinematicMode; 
	bool bAllowMovement; 
	bool bAllowTurning; 
	bool bShowPlayer; 
	bool bShowHUD; 
	bool bUsePathTracer; 
	int32_t PathTracerSamplePerPixel; 
};

// ScriptStruct MovieSceneCapture.CaptureResolution
struct FCaptureResolution {
	int32_t ResX; 
	int32_t ResY; 
};

// ScriptStruct MovieSceneCapture.CapturedPixels
struct FCapturedPixels {
};

// ScriptStruct MovieSceneCapture.CapturedPixelsID
struct FCapturedPixelsID {
	struct TMap<struct FName, struct FName> Identifiers; 
};

