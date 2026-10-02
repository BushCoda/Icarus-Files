// Class GameplayCameras.TestCameraShake
struct UTestCameraShake : UCameraShakeBase {
};

// Class GameplayCameras.SimpleCameraShakePattern
struct USimpleCameraShakePattern : UCameraShakePattern {
	float Duration; 
	float BlendInTime; 
	float BlendOutTime; 
};

// Class GameplayCameras.ConstantCameraShakePattern
struct UConstantCameraShakePattern : USimpleCameraShakePattern {
	struct FVector LocationOffset; 
	struct FRotator RotationOffset; 
};

// Class GameplayCameras.CompositeCameraShakePattern
struct UCompositeCameraShakePattern : UCameraShakePattern {
	struct TArray<struct UCameraShakePattern*> ChildPatterns; 
};

// Class GameplayCameras.DefaultCameraShakeBase
struct UDefaultCameraShakeBase : UCameraShakeBase {
};

// Class GameplayCameras.MatineeCameraShake
struct UMatineeCameraShake : UCameraShakeBase {
	float OscillationDuration; 
	float OscillationBlendInTime; 
	float OscillationBlendOutTime; 
	struct FROscillator RotOscillation; 
	struct FVOscillator LocOscillation; 
	struct FFOscillator FOVOscillation; 
	float AnimPlayRate; 
	float AnimScale; 
	float AnimBlendInTime; 
	float AnimBlendOutTime; 
	float RandomAnimSegmentDuration; 
	struct UCameraAnim* Anim; 
	struct UCameraAnimationSequence* AnimSequence; 
	char bRandomAnimSegment : 1; 
	float OscillatorTimeRemaining; 
	struct UCameraAnimInst* AnimInst; 
	struct USequenceCameraShakePattern* SequenceShakePattern; 

	struct UMatineeCameraShake* StartMatineeCameraShakeFromSource(struct APlayerCameraManager* PlayerCameraManager, struct UMatineeCameraShake* ShakeClass, struct UCameraShakeSourceComponent* SourceComponent, float Scale, enum class ECameraShakePlaySpace PlaySpace, struct FRotator UserPlaySpaceRot); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	struct UMatineeCameraShake* StartMatineeCameraShake(struct APlayerCameraManager* PlayerCameraManager, struct UMatineeCameraShake* ShakeClass, float Scale, enum class ECameraShakePlaySpace PlaySpace, struct FRotator UserPlaySpaceRot); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void ReceiveStopShake(bool bImmediately); // (Event|Public|BlueprintEvent)
	void ReceivePlayShake(float Scale); // (Event|Public|BlueprintEvent)
	bool ReceiveIsFinished(); // (Native|Event|Public|BlueprintEvent|Const)
	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, struct FMinimalViewInfo& POV, struct FMinimalViewInfo& ModifiedPOV); // (Event|Public|HasOutParms|BlueprintEvent)
};

// Class GameplayCameras.MatineeCameraShakePattern
struct UMatineeCameraShakePattern : UCameraShakePattern {
};

// Class GameplayCameras.MovieSceneMatineeCameraShakeEvaluator
struct UMovieSceneMatineeCameraShakeEvaluator : UMovieSceneCameraShakeEvaluator {
};

// Class GameplayCameras.MatineeCameraShakeFunctionLibrary
struct UMatineeCameraShakeFunctionLibrary : UBlueprintFunctionLibrary {

	struct UMatineeCameraShake* Conv_MatineeCameraShake(struct UCameraShakeBase* CameraShake); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
};

// Class GameplayCameras.PerlinNoiseCameraShakePattern
struct UPerlinNoiseCameraShakePattern : USimpleCameraShakePattern {
	float LocationAmplitudeMultiplier; 
	float LocationFrequencyMultiplier; 
	struct FPerlinNoiseShaker X; 
	struct FPerlinNoiseShaker Y; 
	struct FPerlinNoiseShaker Z; 
	float RotationAmplitudeMultiplier; 
	float RotationFrequencyMultiplier; 
	struct FPerlinNoiseShaker Pitch; 
	struct FPerlinNoiseShaker Yaw; 
	struct FPerlinNoiseShaker Roll; 
	struct FPerlinNoiseShaker FOV; 
};

// Class GameplayCameras.WaveOscillatorCameraShakePattern
struct UWaveOscillatorCameraShakePattern : USimpleCameraShakePattern {
	float LocationAmplitudeMultiplier; 
	float LocationFrequencyMultiplier; 
	struct FWaveOscillator X; 
	struct FWaveOscillator Y; 
	struct FWaveOscillator Z; 
	float RotationAmplitudeMultiplier; 
	float RotationFrequencyMultiplier; 
	struct FWaveOscillator Pitch; 
	struct FWaveOscillator Yaw; 
	struct FWaveOscillator Roll; 
	struct FWaveOscillator FOV; 
};

