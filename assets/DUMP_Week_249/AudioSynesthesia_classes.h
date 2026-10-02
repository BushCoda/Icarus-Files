// Class AudioSynesthesia.AudioSynesthesiaNRTSettings
struct UAudioSynesthesiaNRTSettings : UAudioAnalyzerNRTSettings {
};

// Class AudioSynesthesia.AudioSynesthesiaNRT
struct UAudioSynesthesiaNRT : UAudioAnalyzerNRT {
};

// Class AudioSynesthesia.ConstantQNRTSettings
struct UConstantQNRTSettings : UAudioSynesthesiaNRTSettings {
	float StartingFrequency; 
	int32_t NumBands; 
	float NumBandsPerOctave; 
	float AnalysisPeriod; 
	bool bDownmixToMono; 
	enum class EConstantQFFTSizeEnum FFTSize; 
	enum class EFFTWindowType WindowType; 
	enum class EAudioSpectrumType SpectrumType; 
	float BandWidthStretch; 
	enum class EConstantQNormalizationEnum CQTNormalization; 
	float NoiseFloorDb; 
};

// Class AudioSynesthesia.ConstantQNRT
struct UConstantQNRT : UAudioSynesthesiaNRT {
	struct UConstantQNRTSettings* Settings; 

	void GetNormalizedChannelConstantQAtTime(float InSeconds, int32_t InChannel, struct TArray<float>& OutConstantQ); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void GetChannelConstantQAtTime(float InSeconds, int32_t InChannel, struct TArray<float>& OutConstantQ); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
};

// Class AudioSynesthesia.LoudnessNRTSettings
struct ULoudnessNRTSettings : UAudioSynesthesiaNRTSettings {
	float AnalysisPeriod; 
	float MinimumFrequency; 
	float MaximumFrequency; 
	enum class ELoudnessNRTCurveTypeEnum CurveType; 
	float NoiseFloorDb; 
};

// Class AudioSynesthesia.LoudnessNRT
struct ULoudnessNRT : UAudioSynesthesiaNRT {
	struct ULoudnessNRTSettings* Settings; 

	void GetNormalizedLoudnessAtTime(float InSeconds, float& OutLoudness); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void GetNormalizedChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void GetLoudnessAtTime(float InSeconds, float& OutLoudness); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void GetChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
};

// Class AudioSynesthesia.OnsetNRTSettings
struct UOnsetNRTSettings : UAudioSynesthesiaNRTSettings {
	bool bDownmixToMono; 
	float GranularityInSeconds; 
	float Sensitivity; 
	float MinimumFrequency; 
	float MaximumFrequency; 
};

// Class AudioSynesthesia.OnsetNRT
struct UOnsetNRT : UAudioSynesthesiaNRT {
	struct UOnsetNRTSettings* Settings; 

	void GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, struct TArray<float>& OutOnsetTimestamps, struct TArray<float>& OutOnsetStrengths); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, struct TArray<float>& OutOnsetTimestamps, struct TArray<float>& OutOnsetStrengths); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
};

