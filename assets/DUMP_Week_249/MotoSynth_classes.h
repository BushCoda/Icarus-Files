// Class MotoSynth.MotoSynthPreset
struct UMotoSynthPreset : UObject {
	struct FMotoSynthRuntimeSettings Settings; 
};

// Class MotoSynth.MotoSynthSource
struct UMotoSynthSource : UObject {
	bool bConvertTo8Bit; 
	float DownSampleFactor; 
	struct FRuntimeFloatCurve RPMCurve; 
	struct TArray<float> SourceData; 
	struct TArray<int16_t> SourceDataPCM; 
	int32_t SourceSampleRate; 
	struct TArray<struct FGrainTableEntry> GrainTable; 
};

// Class MotoSynth.SynthComponentMoto
struct USynthComponentMoto : USynthComponent {
	struct UMotoSynthPreset* MotoSynthPreset; 
	float RPM; 

	void SetSettings(struct FMotoSynthRuntimeSettings& InSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetRPM(float InRPM, float InTimeSec); // (Final|Native|Public|BlueprintCallable)
	bool IsEnabled(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetRPMRange(float& OutMinRPM, float& OutMaxRPM); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

