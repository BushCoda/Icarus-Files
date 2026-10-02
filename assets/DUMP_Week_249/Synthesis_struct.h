// Enum Synthesis.ESynth1PatchDestination
enum class ESynth1PatchDestination : uint8 {
	Osc1Gain = 0,
	Osc1Frequency = 1,
	Osc1Pulsewidth = 2,
	Osc2Gain = 3,
	Osc2Frequency = 4,
	Osc2Pulsewidth = 5,
	FilterFrequency = 6,
	FilterQ = 7,
	Gain = 8,
	Pan = 9,
	LFO1Frequency = 10,
	LFO1Gain = 11,
	LFO2Frequency = 12,
	LFO2Gain = 13,
	Count = 14,
	ESynth1PatchDestination_MAX = 15
};

// Enum Synthesis.ESynth1PatchSource
enum class ESynth1PatchSource : uint8 {
	LFO1 = 0,
	LFO2 = 1,
	Envelope = 2,
	BiasEnvelope = 3,
	Count = 4,
	ESynth1PatchSource_MAX = 5
};

// Enum Synthesis.ESynthStereoDelayMode
enum class ESynthStereoDelayMode : uint8 {
	Normal = 0,
	Cross = 1,
	PingPong = 2,
	Count = 3,
	ESynthStereoDelayMode_MAX = 4
};

// Enum Synthesis.ESynthFilterAlgorithm
enum class ESynthFilterAlgorithm : uint8 {
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESynthFilterAlgorithm_MAX = 4
};

// Enum Synthesis.ESynthFilterType
enum class ESynthFilterType : uint8 {
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESynthFilterType_MAX = 5
};

// Enum Synthesis.ESynthModEnvBiasPatch
enum class ESynthModEnvBiasPatch : uint8 {
	PatchToNone = 0,
	PatchToOscFreq = 1,
	PatchToFilterFreq = 2,
	PatchToFilterQ = 3,
	PatchToLFO1Gain = 4,
	PatchToLFO2Gain = 5,
	PatchToLFO1Freq = 6,
	PatchToLFO2Freq = 7,
	Count = 8,
	ESynthModEnvBiasPatch_MAX = 9
};

// Enum Synthesis.ESynthModEnvPatch
enum class ESynthModEnvPatch : uint8 {
	PatchToNone = 0,
	PatchToOscFreq = 1,
	PatchToFilterFreq = 2,
	PatchToFilterQ = 3,
	PatchToLFO1Gain = 4,
	PatchToLFO2Gain = 5,
	PatchToLFO1Freq = 6,
	PatchToLFO2Freq = 7,
	Count = 8,
	ESynthModEnvPatch_MAX = 9
};

// Enum Synthesis.ESynthLFOPatchType
enum class ESynthLFOPatchType : uint8 {
	PatchToNone = 0,
	PatchToGain = 1,
	PatchToOscFreq = 2,
	PatchToFilterFreq = 3,
	PatchToFilterQ = 4,
	PatchToOscPulseWidth = 5,
	PatchToOscPan = 6,
	PatchLFO1ToLFO2Frequency = 7,
	PatchLFO1ToLFO2Gain = 8,
	Count = 9,
	ESynthLFOPatchType_MAX = 10
};

// Enum Synthesis.ESynthLFOMode
enum class ESynthLFOMode : uint8 {
	Sync = 0,
	OneShot = 1,
	Free = 2,
	Count = 3,
	ESynthLFOMode_MAX = 4
};

// Enum Synthesis.ESynthLFOType
enum class ESynthLFOType : uint8 {
	Sine = 0,
	UpSaw = 1,
	DownSaw = 2,
	Square = 3,
	Triangle = 4,
	Exponential = 5,
	RandomSampleHold = 6,
	Count = 7,
	ESynthLFOType_MAX = 8
};

// Enum Synthesis.ESynth1OscType
enum class ESynth1OscType : uint8 {
	Sine = 0,
	Saw = 1,
	Triangle = 2,
	Square = 3,
	Noise = 4,
	Count = 5,
	ESynth1OscType_MAX = 6
};

// Enum Synthesis.ESourceEffectDynamicsPeakMode
enum class ESourceEffectDynamicsPeakMode : uint8 {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ESourceEffectDynamicsPeakMode_MAX = 4
};

// Enum Synthesis.ESourceEffectDynamicsProcessorType
enum class ESourceEffectDynamicsProcessorType : uint8 {
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	Count = 4,
	ESourceEffectDynamicsProcessorType_MAX = 5
};

// Enum Synthesis.EEnvelopeFollowerPeakMode
enum class EEnvelopeFollowerPeakMode : uint8 {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	EEnvelopeFollowerPeakMode_MAX = 4
};

// Enum Synthesis.ESourceEffectFilterParam
enum class ESourceEffectFilterParam : uint8 {
	FilterFrequency = 0,
	FilterResonance = 1,
	Count = 2,
	ESourceEffectFilterParam_MAX = 3
};

// Enum Synthesis.ESourceEffectFilterType
enum class ESourceEffectFilterType : uint8 {
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESourceEffectFilterType_MAX = 5
};

// Enum Synthesis.ESourceEffectFilterCircuit
enum class ESourceEffectFilterCircuit : uint8 {
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESourceEffectFilterCircuit_MAX = 4
};

// Enum Synthesis.EStereoChannelMode
enum class EStereoChannelMode : uint8 {
	MidSide = 0,
	LeftRight = 1,
	count = 2,
	EStereoChannelMode_MAX = 3
};

// Enum Synthesis.EPhaserLFOType
enum class EPhaserLFOType : uint8 {
	Sine = 0,
	UpSaw = 1,
	DownSaw = 2,
	Square = 3,
	Triangle = 4,
	Exponential = 5,
	RandomSampleHold = 6,
	Count = 7,
	EPhaserLFOType_MAX = 8
};

// Enum Synthesis.ERingModulatorTypeSourceEffect
enum class ERingModulatorTypeSourceEffect : uint8 {
	Sine = 0,
	Saw = 1,
	Triangle = 2,
	Square = 3,
	Count = 4,
	ERingModulatorTypeSourceEffect_MAX = 5
};

// Enum Synthesis.EStereoDelayFiltertype
enum class EStereoDelayFiltertype : uint8 {
	Lowpass = 0,
	Highpass = 1,
	Bandpass = 2,
	Notch = 3,
	Count = 4,
	EStereoDelayFiltertype_MAX = 5
};

// Enum Synthesis.EStereoDelaySourceEffect
enum class EStereoDelaySourceEffect : uint8 {
	Normal = 0,
	Cross = 1,
	PingPong = 2,
	Count = 3,
	EStereoDelaySourceEffect_MAX = 4
};

// Enum Synthesis.ESubmixEffectConvolutionReverbBlockSize
enum class ESubmixEffectConvolutionReverbBlockSize : uint8 {
	BlockSize256 = 0,
	BlockSize512 = 1,
	BlockSize1024 = 2,
	ESubmixEffectConvolutionReverbBlockSize_MAX = 3
};

// Enum Synthesis.ESubmixFilterAlgorithm
enum class ESubmixFilterAlgorithm : uint8 {
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESubmixFilterAlgorithm_MAX = 4
};

// Enum Synthesis.ESubmixFilterType
enum class ESubmixFilterType : uint8 {
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESubmixFilterType_MAX = 5
};

// Enum Synthesis.ETapLineMode
enum class ETapLineMode : uint8 {
	SendToChannel = 0,
	Panning = 1,
	Disabled = 2,
	ETapLineMode_MAX = 3
};

// Enum Synthesis.EGranularSynthSeekType
enum class EGranularSynthSeekType : uint8 {
	FromBeginning = 0,
	FromCurrentPosition = 1,
	Count = 2,
	EGranularSynthSeekType_MAX = 3
};

// Enum Synthesis.EGranularSynthEnvelopeType
enum class EGranularSynthEnvelopeType : uint8 {
	Rectangular = 0,
	Triangle = 1,
	DownwardTriangle = 2,
	UpwardTriangle = 3,
	ExponentialDecay = 4,
	ExponentialIncrease = 5,
	Gaussian = 6,
	Hanning = 7,
	Lanczos = 8,
	Cosine = 9,
	CosineSquared = 10,
	Welch = 11,
	Blackman = 12,
	BlackmanHarris = 13,
	Count = 14,
	EGranularSynthEnvelopeType_MAX = 15
};

// Enum Synthesis.CurveInterpolationType
enum class CurveInterpolationType : uint8 {
	AUTOINTERP = 0,
	LINEAR = 1,
	CONSTANT = 2,
	CurveInterpolationType_MAX = 3
};

// Enum Synthesis.ESamplePlayerSeekType
enum class ESamplePlayerSeekType : uint8 {
	FromBeginning = 0,
	FromCurrentPosition = 1,
	FromEnd = 2,
	Count = 3,
	ESamplePlayerSeekType_MAX = 4
};

// Enum Synthesis.ESynthKnobSize
enum class ESynthKnobSize : uint8 {
	Medium = 0,
	Large = 1,
	Count = 2,
	ESynthKnobSize_MAX = 3
};

// Enum Synthesis.ESynthSlateColorStyle
enum class ESynthSlateColorStyle : uint8 {
	Light = 0,
	Dark = 1,
	Count = 2,
	ESynthSlateColorStyle_MAX = 3
};

// Enum Synthesis.ESynthSlateSizeType
enum class ESynthSlateSizeType : uint8 {
	Small = 0,
	Medium = 1,
	Large = 2,
	Count = 3,
	ESynthSlateSizeType_MAX = 4
};

// ScriptStruct Synthesis.ModularSynthPresetBankEntry
struct FModularSynthPresetBankEntry {
	struct FString PresetName; 
	struct FModularSynthPreset Preset; 
};

// ScriptStruct Synthesis.ModularSynthPreset
struct FModularSynthPreset : FTableRowBase {
	char bEnablePolyphony : 1; 
	enum class ESynth1OscType Osc1Type; 
	float Osc1Gain; 
	float Osc1Octave; 
	float Osc1Semitones; 
	float Osc1Cents; 
	float Osc1PulseWidth; 
	enum class ESynth1OscType Osc2Type; 
	float Osc2Gain; 
	float Osc2Octave; 
	float Osc2Semitones; 
	float Osc2Cents; 
	float Osc2PulseWidth; 
	float Portamento; 
	char bEnableUnison : 1; 
	char bEnableOscillatorSync : 1; 
	float Spread; 
	float Pan; 
	float LFO1Frequency; 
	float LFO1Gain; 
	enum class ESynthLFOType LFO1Type; 
	enum class ESynthLFOMode LFO1Mode; 
	enum class ESynthLFOPatchType LFO1PatchType; 
	float LFO2Frequency; 
	float LFO2Gain; 
	enum class ESynthLFOType LFO2Type; 
	enum class ESynthLFOMode LFO2Mode; 
	enum class ESynthLFOPatchType LFO2PatchType; 
	float GainDb; 
	float AttackTime; 
	float DecayTime; 
	float SustainGain; 
	float ReleaseTime; 
	enum class ESynthModEnvPatch ModEnvPatchType; 
	enum class ESynthModEnvBiasPatch ModEnvBiasPatchType; 
	char bInvertModulationEnvelope : 1; 
	char bInvertModulationEnvelopeBias : 1; 
	float ModulationEnvelopeDepth; 
	float ModulationEnvelopeAttackTime; 
	float ModulationEnvelopeDecayTime; 
	float ModulationEnvelopeSustainGain; 
	float ModulationEnvelopeReleaseTime; 
	char bLegato : 1; 
	char bRetrigger : 1; 
	float FilterFrequency; 
	float FilterQ; 
	enum class ESynthFilterType FilterType; 
	enum class ESynthFilterAlgorithm FilterAlgorithm; 
	char bStereoDelayEnabled : 1; 
	enum class ESynthStereoDelayMode StereoDelayMode; 
	float StereoDelayTime; 
	float StereoDelayFeedback; 
	float StereoDelayWetlevel; 
	float StereoDelayRatio; 
	char bChorusEnabled : 1; 
	float ChorusDepth; 
	float ChorusFeedback; 
	float ChorusFrequency; 
	struct TArray<struct FEpicSynth1Patch> Patches; 
};

// ScriptStruct Synthesis.EpicSynth1Patch
struct FEpicSynth1Patch {
	enum class ESynth1PatchSource PatchSource; 
	struct TArray<struct FSynth1PatchCable> PatchCables; 
};

// ScriptStruct Synthesis.Synth1PatchCable
struct FSynth1PatchCable {
	float Depth; 
	enum class ESynth1PatchDestination Destination; 
};

// ScriptStruct Synthesis.PatchId
struct FPatchId {
	int32_t ID; 
};

// ScriptStruct Synthesis.SourceEffectBitCrusherSettings
struct FSourceEffectBitCrusherSettings {
	float CrushedSampleRate; 
	struct FSoundModulationDestinationSettings SampleRateModulation; 
	float CrushedBits; 
	struct FSoundModulationDestinationSettings BitModulation; 
};

// ScriptStruct Synthesis.SourceEffectBitCrusherBaseSettings
struct FSourceEffectBitCrusherBaseSettings {
	float SampleRate; 
	float BitDepth; 
};

// ScriptStruct Synthesis.SourceEffectChorusSettings
struct FSourceEffectChorusSettings {
	float Depth; 
	float Frequency; 
	float Feedback; 
	float WetLevel; 
	float DryLevel; 
	float Spread; 
	struct FSoundModulationDestinationSettings DepthModulation; 
	struct FSoundModulationDestinationSettings FrequencyModulation; 
	struct FSoundModulationDestinationSettings FeedbackModulation; 
	struct FSoundModulationDestinationSettings WetModulation; 
	struct FSoundModulationDestinationSettings DryModulation; 
	struct FSoundModulationDestinationSettings SpreadModulation; 
};

// ScriptStruct Synthesis.SourceEffectChorusBaseSettings
struct FSourceEffectChorusBaseSettings {
	float Depth; 
	float Frequency; 
	float Feedback; 
	float WetLevel; 
	float DryLevel; 
	float Spread; 
};

// ScriptStruct Synthesis.SourceEffectDynamicsProcessorSettings
struct FSourceEffectDynamicsProcessorSettings {
	enum class ESourceEffectDynamicsProcessorType DynamicsProcessorType; 
	enum class ESourceEffectDynamicsPeakMode PeakMode; 
	float LookAheadMsec; 
	float AttackTimeMsec; 
	float ReleaseTimeMsec; 
	float ThresholdDb; 
	float Ratio; 
	float KneeBandwidthDb; 
	float InputGainDb; 
	float OutputGainDb; 
	char bStereoLinked : 1; 
	char bAnalogMode : 1; 
};

// ScriptStruct Synthesis.SourceEffectEnvelopeFollowerSettings
struct FSourceEffectEnvelopeFollowerSettings {
	float AttackTime; 
	float ReleaseTime; 
	enum class EEnvelopeFollowerPeakMode PeakMode; 
	bool bIsAnalogMode; 
};

// ScriptStruct Synthesis.SourceEffectEQSettings
struct FSourceEffectEQSettings {
	struct TArray<struct FSourceEffectEQBand> EQBands; 
};

// ScriptStruct Synthesis.SourceEffectEQBand
struct FSourceEffectEQBand {
	float Frequency; 
	float Bandwidth; 
	float GainDb; 
	char bEnabled : 1; 
};

// ScriptStruct Synthesis.SourceEffectFilterSettings
struct FSourceEffectFilterSettings {
	enum class ESourceEffectFilterCircuit FilterCircuit; 
	enum class ESourceEffectFilterType FilterType; 
	float CutoffFrequency; 
	float FilterQ; 
	struct TArray<struct FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation; 
};

// ScriptStruct Synthesis.SourceEffectFilterAudioBusModulationSettings
struct FSourceEffectFilterAudioBusModulationSettings {
	struct UAudioBus* AudioBus; 
	int32_t EnvelopeFollowerAttackTimeMsec; 
	int32_t EnvelopeFollowerReleaseTimeMsec; 
	float EnvelopeGainMultiplier; 
	enum class ESourceEffectFilterParam FilterParam; 
	float MinFrequencyModulation; 
	float MaxFrequencyModulation; 
	float MinResonanceModulation; 
	float MaxResonanceModulation; 
};

// ScriptStruct Synthesis.SourceEffectFoldbackDistortionSettings
struct FSourceEffectFoldbackDistortionSettings {
	float InputGainDb; 
	float ThresholdDb; 
	float OutputGainDb; 
};

// ScriptStruct Synthesis.SourceEffectMidSideSpreaderSettings
struct FSourceEffectMidSideSpreaderSettings {
	float SpreadAmount; 
	enum class EStereoChannelMode InputMode; 
	enum class EStereoChannelMode OutputMode; 
	bool bEqualPower; 
};

// ScriptStruct Synthesis.SourceEffectPannerSettings
struct FSourceEffectPannerSettings {
	float Spread; 
	float Pan; 
};

// ScriptStruct Synthesis.SourceEffectPhaserSettings
struct FSourceEffectPhaserSettings {
	float WetLevel; 
	float Frequency; 
	float Feedback; 
	enum class EPhaserLFOType LFOType; 
	bool UseQuadraturePhase; 
};

// ScriptStruct Synthesis.SourceEffectRingModulationSettings
struct FSourceEffectRingModulationSettings {
	enum class ERingModulatorTypeSourceEffect ModulatorType; 
	float Frequency; 
	float Depth; 
	float DryLevel; 
	float WetLevel; 
	struct UAudioBus* AudioBusModulator; 
};

// ScriptStruct Synthesis.SourceEffectSimpleDelaySettings
struct FSourceEffectSimpleDelaySettings {
	float SpeedOfSound; 
	float DelayAmount; 
	float DryAmount; 
	float WetAmount; 
	float Feedback; 
	char bDelayBasedOnDistance : 1; 
};

// ScriptStruct Synthesis.SourceEffectStereoDelaySettings
struct FSourceEffectStereoDelaySettings {
	enum class EStereoDelaySourceEffect DelayMode; 
	float DelayTimeMsec; 
	float Feedback; 
	float DelayRatio; 
	float WetLevel; 
	float DryLevel; 
	bool bFilterEnabled; 
	enum class EStereoDelayFiltertype FilterType; 
	float FilterFrequency; 
	float FilterQ; 
};

// ScriptStruct Synthesis.SourceEffectWaveShaperSettings
struct FSourceEffectWaveShaperSettings {
	float Amount; 
	float OutputGainDb; 
};

// ScriptStruct Synthesis.SubmixEffectConvolutionReverbSettings
struct FSubmixEffectConvolutionReverbSettings {
	float NormalizationVolumeDb; 
	bool bBypass; 
	bool bMixInputChannelFormatToImpulseResponseFormat; 
	bool bMixReverbOutputToOutputChannelFormat; 
	float SurroundRearChannelBleedDb; 
	bool bInvertRearChannelBleedPhase; 
	bool bSurroundRearChannelFlip; 
	float SurroundRearChannelBleedAmount; 
	struct UAudioImpulseResponse* ImpulseResponse; 
	bool AllowHArdwareAcceleration; 
};

// ScriptStruct Synthesis.SubmixEffectDelaySettings
struct FSubmixEffectDelaySettings {
	float MaximumDelayLength; 
	float InterpolationTime; 
	float DelayLength; 
};

// ScriptStruct Synthesis.SubmixEffectFilterSettings
struct FSubmixEffectFilterSettings {
	enum class ESubmixFilterType FilterType; 
	enum class ESubmixFilterAlgorithm FilterAlgorithm; 
	float FilterFrequency; 
	float FilterQ; 
};

// ScriptStruct Synthesis.SubmixEffectFlexiverbSettings
struct FSubmixEffectFlexiverbSettings {
	float PreDelay; 
	float DecayTime; 
	float RoomDampening; 
	int32_t Complexity; 
};

// ScriptStruct Synthesis.SubmixEffectMultibandCompressorSettings
struct FSubmixEffectMultibandCompressorSettings {
	enum class ESubmixEffectDynamicsProcessorType DynamicsProcessorType; 
	enum class ESubmixEffectDynamicsPeakMode PeakMode; 
	float LookAheadMsec; 
	bool bLinkChannels; 
	bool bAnalogMode; 
	bool bFourPole; 
	struct TArray<struct FDynamicsBandSettings> Bands; 
};

// ScriptStruct Synthesis.DynamicsBandSettings
struct FDynamicsBandSettings {
	float CrossoverTopFrequency; 
	float AttackTimeMsec; 
	float ReleaseTimeMsec; 
	float ThresholdDb; 
	float Ratio; 
	float KneeBandwidthDb; 
	float InputGainDb; 
	float OutputGainDb; 
};

// ScriptStruct Synthesis.SubmixEffectStereoDelaySettings
struct FSubmixEffectStereoDelaySettings {
	enum class EStereoDelaySourceEffect DelayMode; 
	float DelayTimeMsec; 
	float Feedback; 
	float DelayRatio; 
	float WetLevel; 
	float DryLevel; 
	bool bFilterEnabled; 
	enum class EStereoDelayFiltertype FilterType; 
	float FilterFrequency; 
	float FilterQ; 
};

// ScriptStruct Synthesis.SubmixEffectTapDelaySettings
struct FSubmixEffectTapDelaySettings {
	float MaximumDelayLength; 
	float InterpolationTime; 
	struct TArray<struct FTapDelayInfo> Taps; 
};

// ScriptStruct Synthesis.TapDelayInfo
struct FTapDelayInfo {
	enum class ETapLineMode TapLineMode; 
	float DelayLength; 
	float Gain; 
	int32_t OutputChannel; 
	float PanInDegrees; 
	int32_t TapId; 
};

// ScriptStruct Synthesis.Synth2DSliderStyle
struct FSynth2DSliderStyle : FSlateWidgetStyle {
	struct FSlateBrush NormalThumbImage; 
	struct FSlateBrush DisabledThumbImage; 
	struct FSlateBrush NormalBarImage; 
	struct FSlateBrush DisabledBarImage; 
	struct FSlateBrush BackgroundImage; 
	float BarThickness; 
};

// ScriptStruct Synthesis.SynthKnobStyle
struct FSynthKnobStyle : FSlateWidgetStyle {
	struct FSlateBrush LargeKnob; 
	struct FSlateBrush LargeKnobOverlay; 
	struct FSlateBrush MediumKnob; 
	struct FSlateBrush MediumKnobOverlay; 
	float MinValueAngle; 
	float MaxValueAngle; 
	enum class ESynthKnobSize KnobSize; 
};

// ScriptStruct Synthesis.SynthSlateStyle
struct FSynthSlateStyle : FSlateWidgetStyle {
	enum class ESynthSlateSizeType SizeType; 
	enum class ESynthSlateColorStyle ColorStyle; 
};

