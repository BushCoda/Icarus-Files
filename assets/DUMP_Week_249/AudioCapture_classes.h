// Class AudioCapture.AudioCapture
struct UAudioCapture : UAudioGenerator {

	void StopCapturingAudio(); // (Final|Native|Public|BlueprintCallable)
	void StartCapturingAudio(); // (Final|Native|Public|BlueprintCallable)
	bool IsCapturingAudio(); // (Final|Native|Public|BlueprintCallable)
	bool GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo& OutInfo); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class AudioCapture.AudioCaptureFunctionLibrary
struct UAudioCaptureFunctionLibrary : UBlueprintFunctionLibrary {

	struct UAudioCapture* CreateAudioCapture(); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class AudioCapture.AudioCaptureComponent
struct UAudioCaptureComponent : USynthComponent {
	int32_t JitterLatencyFrames; 
};

