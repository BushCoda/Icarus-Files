// Class StreamlineBlueprint.StreamlineLibraryDLSSG
struct UStreamlineLibraryDLSSG : UBlueprintFunctionLibrary {

	void SetDLSSGMode(enum class UStreamlineDLSSGMode DLSSGMode); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	enum class UStreamlineDLSSGSupport QueryDLSSGSupport(); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsDLSSGSupported(); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsDLSSGModeSupported(enum class UStreamlineDLSSGMode DLSSGMode); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct TArray<enum class UStreamlineDLSSGMode> GetSupportedDLSSGModes(); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure)
	enum class UStreamlineDLSSGMode GetDLSSGMode(); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void GetDLSSGMinimumDriverVersion(int32_t& MinDriverVersionMajor, int32_t& MinDriverVersionMinor); // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void GetDLSSGFrameTiming(float& FrameRateInHertz, int32_t& FramesPresented); // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	enum class UStreamlineDLSSGMode GetDefaultDLSSGMode(); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure)
};

// Class StreamlineBlueprint.StreamlineLibraryReflex
struct UStreamlineLibraryReflex : UBlueprintFunctionLibrary {

	void SetReflexMode(enum class UStreamlineReflexMode Mode); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	enum class UStreamlineReflexSupport QueryReflexSupport(); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsReflexSupported(); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float GetRenderLatencyInMs(); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure)
	enum class UStreamlineReflexMode GetReflexMode(); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float GetGameToRenderLatencyInMs(); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float GetGameLatencyInMs(); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure)
	enum class UStreamlineReflexMode GetDefaultReflexMode(); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure)
};

