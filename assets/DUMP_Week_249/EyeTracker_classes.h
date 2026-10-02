// Class EyeTracker.EyeTrackerFunctionLibrary
struct UEyeTrackerFunctionLibrary : UBlueprintFunctionLibrary {

	void SetEyeTrackedPlayer(struct APlayerController* PlayerController); // (Final|Native|Static|Public|BlueprintCallable)
	bool IsStereoGazeDataAvailable(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsEyeTrackerConnected(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool GetStereoGazeData(struct FEyeTrackerStereoGazeData& OutGazeData); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	bool GetGazeData(struct FEyeTrackerGazeData& OutGazeData); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

