// Enum AudioPlatformConfiguration.ESoundwaveSampleRateSettings
enum class ESoundwaveSampleRateSettings : uint8 {
	Max = 0,
	High = 1,
	Medium = 2,
	Low = 3,
	Min = 4,
	MatchDevice = 5
};

// ScriptStruct AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides
struct FPlatformRuntimeAudioCompressionOverrides {
	bool bOverrideCompressionTimes; 
	float DurationThreshold; 
	int32_t MaxNumRandomBranches; 
	int32_t SoundCueQualityIndex; 
};

