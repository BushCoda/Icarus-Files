// Enum AudioMixer.EMusicalNoteName
enum class EMusicalNoteName : uint8 {
	C = 0,
	Db = 1,
	D = 2,
	Eb = 3,
	E = 4,
	F = 5,
	Gb = 6,
	G = 7,
	Ab = 8,
	A = 9,
	Bb = 10,
	B = 11,
	EMusicalNoteName_MAX = 12
};

// Enum AudioMixer.ESubmixEffectDynamicsKeySource
enum class ESubmixEffectDynamicsKeySource : uint8 {
	Default = 0,
	AudioBus = 1,
	Submix = 2,
	Count = 3,
	ESubmixEffectDynamicsKeySource_MAX = 4
};

// Enum AudioMixer.ESubmixEffectDynamicsChannelLinkMode
enum class ESubmixEffectDynamicsChannelLinkMode : uint8 {
	Disabled = 0,
	Average = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsChannelLinkMode_MAX = 4
};

// Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8 {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsPeakMode_MAX = 4
};

// Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8 {
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	Count = 4,
	ESubmixEffectDynamicsProcessorType_MAX = 5
};

// Enum AudioMixer.EQuarztClockManagerType
enum class EQuarztClockManagerType : uint8 {
	AudioEngine = 0,
	QuartzSubsystem = 1,
	Count = 2,
	EQuarztClockManagerType_MAX = 3
};

// ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
struct FSubmixEffectDynamicsProcessorSettings {
	enum class ESubmixEffectDynamicsProcessorType DynamicsProcessorType; 
	enum class ESubmixEffectDynamicsPeakMode PeakMode; 
	enum class ESubmixEffectDynamicsChannelLinkMode LinkMode; 
	float InputGainDb; 
	float ThresholdDb; 
	float Ratio; 
	float KneeBandwidthDb; 
	float LookAheadMsec; 
	float AttackTimeMsec; 
	float ReleaseTimeMsec; 
	enum class ESubmixEffectDynamicsKeySource KeySource; 
	struct UAudioBus* ExternalAudioBus; 
	struct USoundSubmix* ExternalSubmix; 
	char bChannelLinked : 1; 
	char bAnalogMode : 1; 
	char bBypass : 1; 
	char bKeyAudition : 1; 
	float KeyGainDb; 
	float OutputGainDb; 
	struct FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf; 
	struct FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf; 
};

// ScriptStruct AudioMixer.SubmixEffectDynamicProcessorFilterSettings
struct FSubmixEffectDynamicProcessorFilterSettings {
	char bEnabled : 1; 
	float Cutoff; 
	float GainDb; 
};

// ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
struct FSubmixEffectSubmixEQSettings {
	struct TArray<struct FSubmixEffectEQBand> EQBands; 
};

// ScriptStruct AudioMixer.SubmixEffectEQBand
struct FSubmixEffectEQBand {
	float Frequency; 
	float Bandwidth; 
	float GainDb; 
	char bEnabled : 1; 
};

// ScriptStruct AudioMixer.SubmixEffectReverbSettings
struct FSubmixEffectReverbSettings {
	bool bBypassEarlyReflections; 
	float ReflectionsDelay; 
	float GainHF; 
	float ReflectionsGain; 
	bool bBypassLateReflections; 
	float LateDelay; 
	float DecayTime; 
	float Density; 
	float Diffusion; 
	float AirAbsorptionGainHF; 
	float DecayHFRatio; 
	float LateGain; 
	float Gain; 
	float WetLevel; 
	float DryLevel; 
	bool bBypass; 
};

