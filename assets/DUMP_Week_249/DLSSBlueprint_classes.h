// Class DLSSBlueprint.DLSSLibrary
struct UDLSSLibrary : UBlueprintFunctionLibrary {

	void SetDLSSSharpness(float Sharpness); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	void SetDLSSMode(enum class UDLSSMode DLSSMode); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	enum class UDLSSSupport QueryDLSSSupport(); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsDLSSSupported(); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsDLSSModeSupported(enum class UDLSSMode DLSSMode); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsDLAAEnabled(); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct TArray<enum class UDLSSMode> GetSupportedDLSSModes(); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure)
	float GetDLSSSharpness(); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void GetDLSSScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage); // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void GetDLSSModeInformation(enum class UDLSSMode DLSSMode, struct FVector2D ScreenResolution, bool& bIsSupported, float& OptimalScreenPercentage, bool& bIsFixedScreenPercentage, float& MinScreenPercentage, float& MaxScreenPercentage, float& OptimalSharpness); // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	enum class UDLSSMode GetDLSSMode(); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void GetDLSSMinimumDriverVersion(int32_t& MinDriverVersionMajor, int32_t& MinDriverVersionMinor); // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	enum class UDLSSMode GetDefaultDLSSMode(); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void EnableDLAA(bool bEnabled); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
};

