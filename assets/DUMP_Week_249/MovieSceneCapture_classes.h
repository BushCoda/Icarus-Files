// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
struct UMovieSceneCaptureProtocolBase : UObject {
	enum class EMovieSceneCaptureProtocolState State; 

	bool IsCapturing(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class EMovieSceneCaptureProtocolState GetState(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
struct UMovieSceneAudioCaptureProtocolBase : UMovieSceneCaptureProtocolBase {
};

// Class MovieSceneCapture.NullAudioCaptureProtocol
struct UNullAudioCaptureProtocol : UMovieSceneAudioCaptureProtocolBase {
};

// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
struct UMasterAudioSubmixCaptureProtocol : UMovieSceneAudioCaptureProtocolBase {
	struct FString Filename; 
};

// Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
struct UMovieSceneImageCaptureProtocolBase : UMovieSceneCaptureProtocolBase {
};

// Class MovieSceneCapture.CompositionGraphCaptureProtocol
struct UCompositionGraphCaptureProtocol : UMovieSceneImageCaptureProtocolBase {
	struct FCompositionGraphCapturePasses IncludeRenderPasses; 
	bool bCaptureFramesInHDR; 
	int32_t HDRCompressionQuality; 
	enum class EHDRCaptureGamut CaptureGamut; 
	struct FSoftObjectPath PostProcessingMaterial; 
	bool bDisableScreenPercentage; 
	struct UMaterialInterface* PostProcessingMaterialPtr; 
};

// Class MovieSceneCapture.FrameGrabberProtocol
struct UFrameGrabberProtocol : UMovieSceneImageCaptureProtocolBase {
};

// Class MovieSceneCapture.ImageSequenceProtocol
struct UImageSequenceProtocol : UFrameGrabberProtocol {
};

// Class MovieSceneCapture.CompressedImageSequenceProtocol
struct UCompressedImageSequenceProtocol : UImageSequenceProtocol {
	int32_t CompressionQuality; 
};

// Class MovieSceneCapture.ImageSequenceProtocol_BMP
struct UImageSequenceProtocol_BMP : UImageSequenceProtocol {
};

// Class MovieSceneCapture.ImageSequenceProtocol_PNG
struct UImageSequenceProtocol_PNG : UCompressedImageSequenceProtocol {
};

// Class MovieSceneCapture.ImageSequenceProtocol_JPG
struct UImageSequenceProtocol_JPG : UCompressedImageSequenceProtocol {
};

// Class MovieSceneCapture.ImageSequenceProtocol_EXR
struct UImageSequenceProtocol_EXR : UImageSequenceProtocol {
	bool bCompressed; 
	enum class EHDRCaptureGamut CaptureGamut; 
};

// Class MovieSceneCapture.MovieSceneCaptureInterface
struct UMovieSceneCaptureInterface : UInterface {
};

// Class MovieSceneCapture.MovieSceneCapture
struct UMovieSceneCapture : UObject {
	struct FSoftClassPath ImageCaptureProtocolType; 
	struct FSoftClassPath AudioCaptureProtocolType; 
	struct UMovieSceneImageCaptureProtocolBase* ImageCaptureProtocol; 
	struct UMovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol; 
	struct FMovieSceneCaptureSettings Settings; 
	bool bUseSeparateProcess; 
	bool bCloseEditorWhenCaptureStarts; 
	struct FString AdditionalCommandLineArguments; 
	struct FString InheritedCommandLineArguments; 

	void SetImageCaptureProtocolType(struct UMovieSceneCaptureProtocolBase* ProtocolType); // (Final|Native|Public|BlueprintCallable)
	void SetAudioCaptureProtocolType(struct UMovieSceneCaptureProtocolBase* ProtocolType); // (Final|Native|Public|BlueprintCallable)
	struct UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol(); // (Final|Native|Public|BlueprintCallable)
	struct UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol(); // (Final|Native|Public|BlueprintCallable)
};

// Class MovieSceneCapture.LevelCapture
struct ULevelCapture : UMovieSceneCapture {
	bool bAutoStartCapture; 
	struct FGuid PrerequisiteActorId; 
};

// Class MovieSceneCapture.MovieSceneCaptureEnvironment
struct UMovieSceneCaptureEnvironment : UObject {

	bool IsCaptureInProgress(); // (Final|Native|Static|Public|BlueprintCallable)
	int32_t GetCaptureFrameNumber(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float GetCaptureElapsedTime(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol(); // (Final|Native|Static|Public|BlueprintCallable)
	struct UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol(); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class MovieSceneCapture.UserDefinedCaptureProtocol
struct UUserDefinedCaptureProtocol : UMovieSceneImageCaptureProtocolBase {
	struct UWorld* World; 

	void StopCapturingFinalPixels(); // (Final|Native|Public|BlueprintCallable)
	void StartCapturingFinalPixels(struct FCapturedPixelsID& StreamID); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void ResolveBuffer(struct UTexture* Buffer, struct FCapturedPixelsID& BufferID); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void OnWarmUp(); // (Event|Protected|BlueprintEvent)
	void OnTick(); // (Event|Protected|BlueprintEvent)
	void OnStartCapture(); // (Event|Protected|BlueprintEvent)
	bool OnSetup(); // (Native|Event|Protected|BlueprintEvent)
	void OnPreTick(); // (Event|Protected|BlueprintEvent)
	void OnPixelsReceived(struct FCapturedPixels& Pixels, struct FCapturedPixelsID& ID, struct FFrameMetrics FrameMetrics); // (Event|Protected|HasOutParms|BlueprintEvent)
	void OnPauseCapture(); // (Event|Protected|BlueprintEvent)
	void OnFinalize(); // (Event|Protected|BlueprintEvent)
	void OnCaptureFrame(); // (Event|Protected|BlueprintEvent)
	bool OnCanFinalize(); // (Native|Event|Protected|BlueprintEvent|Const)
	void OnBeginFinalize(); // (Event|Protected|BlueprintEvent)
	struct FFrameMetrics GetCurrentFrameMetrics(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FString GenerateFilename(struct FFrameMetrics& InFrameMetrics); // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
};

// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
struct UUserDefinedImageCaptureProtocol : UUserDefinedCaptureProtocol {
	enum class EDesiredImageFormat Format; 
	bool bEnableCompression; 
	int32_t CompressionQuality; 

	void WriteImageToDisk(struct FCapturedPixels& PixelData, struct FCapturedPixelsID& StreamID, struct FFrameMetrics& FrameMetrics, bool bCopyImageData); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	struct FString GenerateFilenameForCurrentFrame(); // (Final|Native|Public|BlueprintCallable)
	struct FString GenerateFilenameForBuffer(struct UTexture* Buffer, struct FCapturedPixelsID& StreamID); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class MovieSceneCapture.VideoCaptureProtocol
struct UVideoCaptureProtocol : UFrameGrabberProtocol {
	bool bUseCompression; 
	float CompressionQuality; 
};

