// Class TimeManagement.TimeSynchronizationSource
struct UTimeSynchronizationSource : UObject {
	bool bUseForSynchronization; 
	int32_t FrameOffset; 
};

// Class TimeManagement.FixedFrameRateCustomTimeStep
struct UFixedFrameRateCustomTimeStep : UEngineCustomTimeStep {
};

// Class TimeManagement.GenlockedCustomTimeStep
struct UGenlockedCustomTimeStep : UFixedFrameRateCustomTimeStep {
};

// Class TimeManagement.GenlockedFixedRateCustomTimeStep
struct UGenlockedFixedRateCustomTimeStep : UGenlockedCustomTimeStep {
	struct FFrameRate FrameRate; 
};

// Class TimeManagement.GenlockedTimecodeProvider
struct UGenlockedTimecodeProvider : UTimecodeProvider {
	bool bUseGenlockToCount; 
};

// Class TimeManagement.TimeManagementBlueprintLibrary
struct UTimeManagementBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FFrameTime TransformTime(struct FFrameTime& SourceTime, struct FFrameRate& SourceRate, struct FFrameRate& DestinationRate); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FFrameNumber Subtract_FrameNumberInteger(struct FFrameNumber A, int32_t B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FFrameNumber Subtract_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FFrameTime SnapFrameTimeToRate(struct FFrameTime& SourceTime, struct FFrameRate& SourceRate, struct FFrameRate& SnapToRate); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, struct FFrameRate& FrameRate); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FFrameNumber Multiply_FrameNumberInteger(struct FFrameNumber A, int32_t B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	bool IsValid_MultipleOf(struct FFrameRate& InFrameRate, struct FFrameRate& OtherFramerate); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool IsValid_Framerate(struct FFrameRate& InFrameRate); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FFrameRate GetTimecodeFrameRate(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FTimecode GetTimecode(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FFrameNumber Divide_FrameNumberInteger(struct FFrameNumber A, int32_t B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FString Conv_TimecodeToString(struct FTimecode& InTimecode, bool bForceSignDisplay); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	float Conv_QualifiedFrameTimeToSeconds(struct FQualifiedFrameTime& InFrameTime); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	float Conv_FrameRateToSeconds(struct FFrameRate& InFrameRate); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	int32_t Conv_FrameNumberToInteger(struct FFrameNumber& InFrameNumber); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FFrameNumber Add_FrameNumberInteger(struct FFrameNumber A, int32_t B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FFrameNumber Add_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
};

