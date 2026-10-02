// Class Synthesis.ModularSynthPresetBank
struct UModularSynthPresetBank : UObject {
	struct TArray<struct FModularSynthPresetBankEntry> Presets; 
};

// Class Synthesis.ModularSynthLibrary
struct UModularSynthLibrary : UBlueprintFunctionLibrary {

	void AddModularSynthPresetToBankAsset(struct UModularSynthPresetBank* InBank, struct FModularSynthPreset& Preset, struct FString PresetName); // (Final|Native|Static|Private|HasOutParms|BlueprintCallable)
};

// Class Synthesis.ModularSynthComponent
struct UModularSynthComponent : USynthComponent {
	int32_t VoiceCount; 

	void SetSynthPreset(struct FModularSynthPreset& SynthPreset); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetSustainGain(float SustainGain); // (Final|Native|Public|BlueprintCallable)
	void SetStereoDelayWetlevel(float DelayWetlevel); // (Final|Native|Public|BlueprintCallable)
	void SetStereoDelayTime(float DelayTimeMsec); // (Final|Native|Public|BlueprintCallable)
	void SetStereoDelayRatio(float DelayRatio); // (Final|Native|Public|BlueprintCallable)
	void SetStereoDelayMode(enum class ESynthStereoDelayMode StereoDelayMode); // (Final|Native|Public|BlueprintCallable)
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled); // (Final|Native|Public|BlueprintCallable)
	void SetStereoDelayFeedback(float DelayFeedback); // (Final|Native|Public|BlueprintCallable)
	void SetSpread(float Spread); // (Final|Native|Public|BlueprintCallable)
	void SetReleaseTime(float ReleaseTimeMsec); // (Final|Native|Public|BlueprintCallable)
	void SetPortamento(float Portamento); // (Final|Native|Public|BlueprintCallable)
	void SetPitchBend(float PitchBend); // (Final|Native|Public|BlueprintCallable)
	void SetPan(float Pan); // (Final|Native|Public|BlueprintCallable)
	void SetOscType(int32_t OscIndex, enum class ESynth1OscType OscType); // (Final|Native|Public|BlueprintCallable)
	void SetOscSync(bool bIsSynced); // (Final|Native|Public|BlueprintCallable)
	void SetOscSemitones(int32_t OscIndex, float Semitones); // (Final|Native|Public|BlueprintCallable)
	void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth); // (Final|Native|Public|BlueprintCallable)
	void SetOscOctave(int32_t OscIndex, float Octave); // (Final|Native|Public|BlueprintCallable)
	void SetOscGainMod(int32_t OscIndex, float OscGainMod); // (Final|Native|Public|BlueprintCallable)
	void SetOscGain(int32_t OscIndex, float OscGain); // (Final|Native|Public|BlueprintCallable)
	void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod); // (Final|Native|Public|BlueprintCallable)
	void SetOscCents(int32_t OscIndex, float Cents); // (Final|Native|Public|BlueprintCallable)
	void SetModEnvSustainGain(float SustainGain); // (Final|Native|Public|BlueprintCallable)
	void SetModEnvReleaseTime(float Release); // (Final|Native|Public|BlueprintCallable)
	void SetModEnvPatch(enum class ESynthModEnvPatch InPatchType); // (Final|Native|Public|BlueprintCallable)
	void SetModEnvInvert(bool bInvert); // (Final|Native|Public|BlueprintCallable)
	void SetModEnvDepth(float Depth); // (Final|Native|Public|BlueprintCallable)
	void SetModEnvDecayTime(float DecayTimeMsec); // (Final|Native|Public|BlueprintCallable)
	void SetModEnvBiasPatch(enum class ESynthModEnvBiasPatch InPatchType); // (Final|Native|Public|BlueprintCallable)
	void SetModEnvBiasInvert(bool bInvert); // (Final|Native|Public|BlueprintCallable)
	void SetModEnvAttackTime(float AttackTimeMsec); // (Final|Native|Public|BlueprintCallable)
	void SetLFOType(int32_t LFOIndex, enum class ESynthLFOType LFOType); // (Final|Native|Public|BlueprintCallable)
	void SetLFOPatch(int32_t LFOIndex, enum class ESynthLFOPatchType LFOPatchType); // (Final|Native|Public|BlueprintCallable)
	void SetLFOMode(int32_t LFOIndex, enum class ESynthLFOMode LFOMode); // (Final|Native|Public|BlueprintCallable)
	void SetLFOGainMod(int32_t LFOIndex, float GainMod); // (Final|Native|Public|BlueprintCallable)
	void SetLFOGain(int32_t LFOIndex, float Gain); // (Final|Native|Public|BlueprintCallable)
	void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz); // (Final|Native|Public|BlueprintCallable)
	void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz); // (Final|Native|Public|BlueprintCallable)
	void SetGainDb(float GainDb); // (Final|Native|Public|BlueprintCallable)
	void SetFilterType(enum class ESynthFilterType FilterType); // (Final|Native|Public|BlueprintCallable)
	void SetFilterQMod(float FilterQ); // (Final|Native|Public|BlueprintCallable)
	void SetFilterQ(float FilterQ); // (Final|Native|Public|BlueprintCallable)
	void SetFilterFrequencyMod(float FilterFrequencyHz); // (Final|Native|Public|BlueprintCallable)
	void SetFilterFrequency(float FilterFrequencyHz); // (Final|Native|Public|BlueprintCallable)
	void SetFilterAlgorithm(enum class ESynthFilterAlgorithm FilterAlgorithm); // (Final|Native|Public|BlueprintCallable)
	void SetEnableUnison(bool EnableUnison); // (Final|Native|Public|BlueprintCallable)
	void SetEnableRetrigger(bool RetriggerEnabled); // (Final|Native|Public|BlueprintCallable)
	void SetEnablePolyphony(bool bEnablePolyphony); // (Final|Native|Public|BlueprintCallable)
	bool SetEnablePatch(struct FPatchId PatchId, bool bIsEnabled); // (Final|Native|Public|BlueprintCallable)
	void SetEnableLegato(bool LegatoEnabled); // (Final|Native|Public|BlueprintCallable)
	void SetDecayTime(float DecayTimeMsec); // (Final|Native|Public|BlueprintCallable)
	void SetChorusFrequency(float Frequency); // (Final|Native|Public|BlueprintCallable)
	void SetChorusFeedback(float Feedback); // (Final|Native|Public|BlueprintCallable)
	void SetChorusEnabled(bool EnableChorus); // (Final|Native|Public|BlueprintCallable)
	void SetChorusDepth(float Depth); // (Final|Native|Public|BlueprintCallable)
	void SetAttackTime(float AttackTimeMsec); // (Final|Native|Public|BlueprintCallable)
	void NoteOn(float Note, int32_t Velocity, float Duration); // (Final|Native|Public|BlueprintCallable)
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes); // (Final|Native|Public|BlueprintCallable)
	struct FPatchId CreatePatch(enum class ESynth1PatchSource PatchSource, struct TArray<struct FSynth1PatchCable>& PatchCables, bool bEnableByDefault); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class Synthesis.SourceEffectBitCrusherPreset
struct USourceEffectBitCrusherPreset : USoundEffectSourcePreset {
	struct FSourceEffectBitCrusherSettings Settings; 

	void SetSettings(struct FSourceEffectBitCrusherBaseSettings& Settings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetSampleRateModulator(struct USoundModulatorBase* Modulator); // (Final|Native|Public|BlueprintCallable)
	void SetSampleRate(float SampleRate); // (Final|Native|Public|BlueprintCallable)
	void SetModulationSettings(struct FSourceEffectBitCrusherSettings& ModulationSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetBits(float Bits); // (Final|Native|Public|BlueprintCallable)
	void SetBitModulator(struct USoundModulatorBase* Modulator); // (Final|Native|Public|BlueprintCallable)
};

// Class Synthesis.SourceEffectChorusPreset
struct USourceEffectChorusPreset : USoundEffectSourcePreset {
	struct FSourceEffectChorusSettings Settings; 

	void SetWetModulator(struct USoundModulatorBase* Modulator); // (Final|Native|Public|BlueprintCallable)
	void SetWet(float WetAmount); // (Final|Native|Public|BlueprintCallable)
	void SetSpreadModulator(struct USoundModulatorBase* Modulator); // (Final|Native|Public|BlueprintCallable)
	void SetSpread(float Spread); // (Final|Native|Public|BlueprintCallable)
	void SetSettings(struct FSourceEffectChorusBaseSettings& Settings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetModulationSettings(struct FSourceEffectChorusSettings& ModulationSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetFrequencyModulator(struct USoundModulatorBase* Modulator); // (Final|Native|Public|BlueprintCallable)
	void SetFrequency(float Frequency); // (Final|Native|Public|BlueprintCallable)
	void SetFeedbackModulator(struct USoundModulatorBase* Modulator); // (Final|Native|Public|BlueprintCallable)
	void SetFeedback(float Feedback); // (Final|Native|Public|BlueprintCallable)
	void SetDryModulator(struct USoundModulatorBase* Modulator); // (Final|Native|Public|BlueprintCallable)
	void SetDry(float DryAmount); // (Final|Native|Public|BlueprintCallable)
	void SetDepthModulator(struct USoundModulatorBase* Modulator); // (Final|Native|Public|BlueprintCallable)
	void SetDepth(float Depth); // (Final|Native|Public|BlueprintCallable)
};

// Class Synthesis.SourceEffectDynamicsProcessorPreset
struct USourceEffectDynamicsProcessorPreset : USoundEffectSourcePreset {
	struct FSourceEffectDynamicsProcessorSettings Settings; 

	void SetSettings(struct FSourceEffectDynamicsProcessorSettings& InSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class Synthesis.EnvelopeFollowerListener
struct UEnvelopeFollowerListener : UActorComponent {
	struct FMulticastInlineDelegate OnEnvelopeFollowerUpdate; 
};

// Class Synthesis.SourceEffectEnvelopeFollowerPreset
struct USourceEffectEnvelopeFollowerPreset : USoundEffectSourcePreset {
	struct FSourceEffectEnvelopeFollowerSettings Settings; 

	void UnregisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // (Final|Native|Public|BlueprintCallable)
	void SetSettings(struct FSourceEffectEnvelopeFollowerSettings& InSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void RegisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // (Final|Native|Public|BlueprintCallable)
};

// Class Synthesis.SourceEffectEQPreset
struct USourceEffectEQPreset : USoundEffectSourcePreset {
	struct FSourceEffectEQSettings Settings; 

	void SetSettings(struct FSourceEffectEQSettings& InSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class Synthesis.SourceEffectFilterPreset
struct USourceEffectFilterPreset : USoundEffectSourcePreset {
	struct FSourceEffectFilterSettings Settings; 

	void SetSettings(struct FSourceEffectFilterSettings& InSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class Synthesis.SourceEffectFoldbackDistortionPreset
struct USourceEffectFoldbackDistortionPreset : USoundEffectSourcePreset {
	struct FSourceEffectFoldbackDistortionSettings Settings; 

	void SetSettings(struct FSourceEffectFoldbackDistortionSettings& InSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class Synthesis.SourceEffectMidSideSpreaderPreset
struct USourceEffectMidSideSpreaderPreset : USoundEffectSourcePreset {
	struct FSourceEffectMidSideSpreaderSettings Settings; 

	void SetSettings(struct FSourceEffectMidSideSpreaderSettings& InSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class Synthesis.SourceEffectPannerPreset
struct USourceEffectPannerPreset : USoundEffectSourcePreset {
	struct FSourceEffectPannerSettings Settings; 

	void SetSettings(struct FSourceEffectPannerSettings& InSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class Synthesis.SourceEffectPhaserPreset
struct USourceEffectPhaserPreset : USoundEffectSourcePreset {
	struct FSourceEffectPhaserSettings Settings; 

	void SetSettings(struct FSourceEffectPhaserSettings& InSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class Synthesis.SourceEffectRingModulationPreset
struct USourceEffectRingModulationPreset : USoundEffectSourcePreset {
	struct FSourceEffectRingModulationSettings Settings; 

	void SetSettings(struct FSourceEffectRingModulationSettings& InSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class Synthesis.SourceEffectSimpleDelayPreset
struct USourceEffectSimpleDelayPreset : USoundEffectSourcePreset {
	struct FSourceEffectSimpleDelaySettings Settings; 

	void SetSettings(struct FSourceEffectSimpleDelaySettings& InSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class Synthesis.SourceEffectStereoDelayPreset
struct USourceEffectStereoDelayPreset : USoundEffectSourcePreset {
	struct FSourceEffectStereoDelaySettings Settings; 

	void SetSettings(struct FSourceEffectStereoDelaySettings& InSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class Synthesis.SourceEffectWaveShaperPreset
struct USourceEffectWaveShaperPreset : USoundEffectSourcePreset {
	struct FSourceEffectWaveShaperSettings Settings; 

	void SetSettings(struct FSourceEffectWaveShaperSettings& InSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class Synthesis.AudioImpulseResponse
struct UAudioImpulseResponse : UObject {
	struct TArray<float> ImpulseResponse; 
	int32_t NumChannels; 
	int32_t SampleRate; 
	float NormalizationVolumeDb; 
	bool bTrueStereo; 
	struct TArray<float> IRData; 
};

// Class Synthesis.SubmixEffectConvolutionReverbPreset
struct USubmixEffectConvolutionReverbPreset : USoundEffectSubmixPreset {
	struct UAudioImpulseResponse* ImpulseResponse; 
	struct FSubmixEffectConvolutionReverbSettings Settings; 
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize; 
	bool bEnableHardwareAcceleration; 

	void SetSettings(struct FSubmixEffectConvolutionReverbSettings& InSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetImpulseResponse(struct UAudioImpulseResponse* InImpulseResponse); // (Final|Native|Public|BlueprintCallable)
};

// Class Synthesis.SubmixEffectDelayPreset
struct USubmixEffectDelayPreset : USoundEffectSubmixPreset {
	struct FSubmixEffectDelaySettings Settings; 
	struct FSubmixEffectDelaySettings DynamicSettings; 

	void SetSettings(struct FSubmixEffectDelaySettings& InSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetInterpolationTime(float Time); // (Final|Native|Public|BlueprintCallable)
	void SetDelay(float Length); // (Final|Native|Public|BlueprintCallable)
	float GetMaxDelayInMilliseconds(); // (Final|Native|Public|BlueprintCallable)
};

// Class Synthesis.SubmixEffectFilterPreset
struct USubmixEffectFilterPreset : USoundEffectSubmixPreset {
	struct FSubmixEffectFilterSettings Settings; 

	void SetSettings(struct FSubmixEffectFilterSettings& InSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetFilterType(enum class ESubmixFilterType InType); // (Final|Native|Public|BlueprintCallable)
	void SetFilterQMod(float InQ); // (Final|Native|Public|BlueprintCallable)
	void SetFilterQ(float InQ); // (Final|Native|Public|BlueprintCallable)
	void SetFilterCutoffFrequencyMod(float InFrequency); // (Final|Native|Public|BlueprintCallable)
	void SetFilterCutoffFrequency(float InFrequency); // (Final|Native|Public|BlueprintCallable)
	void SetFilterAlgorithm(enum class ESubmixFilterAlgorithm InAlgorithm); // (Final|Native|Public|BlueprintCallable)
};

// Class Synthesis.SubmixEffectFlexiverbPreset
struct USubmixEffectFlexiverbPreset : USoundEffectSubmixPreset {
	struct FSubmixEffectFlexiverbSettings Settings; 

	void SetSettings(struct FSubmixEffectFlexiverbSettings& InSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class Synthesis.SubmixEffectMultibandCompressorPreset
struct USubmixEffectMultibandCompressorPreset : USoundEffectSubmixPreset {
	struct FSubmixEffectMultibandCompressorSettings Settings; 

	void SetSettings(struct FSubmixEffectMultibandCompressorSettings& InSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class Synthesis.SubmixEffectStereoDelayPreset
struct USubmixEffectStereoDelayPreset : USoundEffectSubmixPreset {
	struct FSubmixEffectStereoDelaySettings Settings; 

	void SetSettings(struct FSubmixEffectStereoDelaySettings& InSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class Synthesis.SubmixEffectTapDelayPreset
struct USubmixEffectTapDelayPreset : USoundEffectSubmixPreset {
	struct FSubmixEffectTapDelaySettings Settings; 

	void SetTap(int32_t TapId, struct FTapDelayInfo& TapInfo); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetSettings(struct FSubmixEffectTapDelaySettings& InSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetInterpolationTime(float Time); // (Final|Native|Public|BlueprintCallable)
	void RemoveTap(int32_t TapId); // (Final|Native|Public|BlueprintCallable)
	void GetTapIds(struct TArray<int32_t>& TapIds); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void GetTap(int32_t TapId, struct FTapDelayInfo& TapInfo); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	float GetMaxDelayInMilliseconds(); // (Final|Native|Public|BlueprintCallable)
	void AddTap(int32_t& TapId); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class Synthesis.Synth2DSlider
struct USynth2DSlider : UWidget {
	float ValueX; 
	float ValueY; 
	struct FDelegate ValueXDelegate; 
	struct FDelegate ValueYDelegate; 
	struct FSynth2DSliderStyle WidgetStyle; 
	struct FLinearColor SliderHandleColor; 
	bool IndentHandle; 
	bool Locked; 
	float StepSize; 
	bool IsFocusable; 
	struct FMulticastInlineDelegate OnMouseCaptureBegin; 
	struct FMulticastInlineDelegate OnMouseCaptureEnd; 
	struct FMulticastInlineDelegate OnControllerCaptureBegin; 
	struct FMulticastInlineDelegate OnControllerCaptureEnd; 
	struct FMulticastInlineDelegate OnValueChangedX; 
	struct FMulticastInlineDelegate OnValueChangedY; 

	void SetValue(struct FVector2D InValue); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetStepSize(float InValue); // (Final|Native|Public|BlueprintCallable)
	void SetSliderHandleColor(struct FLinearColor InValue); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetLocked(bool InValue); // (Final|Native|Public|BlueprintCallable)
	void SetIndentHandle(bool InValue); // (Final|Native|Public|BlueprintCallable)
	struct FVector2D GetValue(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
};

// Class Synthesis.GranularSynth
struct UGranularSynth : USynthComponent {
	struct USoundWave* GranulatedSoundWave; 

	void SetSustainGain(float SustainGain); // (Final|Native|Public|BlueprintCallable)
	void SetSoundWave(struct USoundWave* InSoundWave); // (Final|Native|Public|BlueprintCallable)
	void SetScrubMode(bool bScrubMode); // (Final|Native|Public|BlueprintCallable)
	void SetReleaseTimeMsec(float ReleaseTimeMsec); // (Final|Native|Public|BlueprintCallable)
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, enum class EGranularSynthSeekType SeekType); // (Final|Native|Public|BlueprintCallable)
	void SetPlaybackSpeed(float InPlayheadRate); // (Final|Native|Public|BlueprintCallable)
	void SetGrainVolume(float BaseVolume, struct FVector2D VolumeRange); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetGrainsPerSecond(float InGrainsPerSecond); // (Final|Native|Public|BlueprintCallable)
	void SetGrainProbability(float InGrainProbability); // (Final|Native|Public|BlueprintCallable)
	void SetGrainPitch(float BasePitch, struct FVector2D PitchRange); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetGrainPan(float BasePan, struct FVector2D PanRange); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetGrainEnvelopeType(enum class EGranularSynthEnvelopeType EnvelopeType); // (Final|Native|Public|BlueprintCallable)
	void SetGrainDuration(float BaseDurationMsec, struct FVector2D DurationRange); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetDecayTime(float DecayTimeMsec); // (Final|Native|Public|BlueprintCallable)
	void SetAttackTime(float AttackTimeMsec); // (Final|Native|Public|BlueprintCallable)
	void NoteOn(float Note, int32_t Velocity, float Duration); // (Final|Native|Public|BlueprintCallable)
	void NoteOff(float Note, bool bKill); // (Final|Native|Public|BlueprintCallable)
	bool IsLoaded(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetSampleDuration(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetCurrentPlayheadTime(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Synthesis.MonoWaveTableSynthPreset
struct UMonoWaveTableSynthPreset : UObject {
	struct FString PresetName; 
	char bLockKeyframesToGridBool : 1; 
	int32_t LockKeyframesToGrid; 
	int32_t WaveTableResolution; 
	struct TArray<struct FRuntimeFloatCurve> WaveTable; 
	char bNormalizeWaveTables : 1; 
};

// Class Synthesis.SynthComponentMonoWaveTable
struct USynthComponentMonoWaveTable : USynthComponent {
	struct FMulticastInlineDelegate OnTableAltered; 
	struct FMulticastInlineDelegate OnNumTablesChanged; 
	struct UMonoWaveTableSynthPreset* CurrentPreset; 

	void SetWaveTablePosition(float InPosition); // (Final|Native|Public|BlueprintCallable)
	void SetSustainPedalState(bool InSustainPedalState); // (Final|Native|Public|BlueprintCallable)
	void SetPosLfoType(enum class ESynthLFOType InLfoType); // (Final|Native|Public|BlueprintCallable)
	void SetPosLfoFrequency(float InLfoFrequency); // (Final|Native|Public|BlueprintCallable)
	void SetPosLfoDepth(float InLfoDepth); // (Final|Native|Public|BlueprintCallable)
	void SetPositionEnvelopeSustainGain(float InSustainGain); // (Final|Native|Public|BlueprintCallable)
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec); // (Final|Native|Public|BlueprintCallable)
	void SetPositionEnvelopeInvert(bool bInInvert); // (Final|Native|Public|BlueprintCallable)
	void SetPositionEnvelopeDepth(float InDepth); // (Final|Native|Public|BlueprintCallable)
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec); // (Final|Native|Public|BlueprintCallable)
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert); // (Final|Native|Public|BlueprintCallable)
	void SetPositionEnvelopeBiasDepth(float InDepth); // (Final|Native|Public|BlueprintCallable)
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec); // (Final|Native|Public|BlueprintCallable)
	void SetLowPassFilterResonance(float InNewQ); // (Final|Native|Public|BlueprintCallable)
	void SetFrequencyWithMidiNote(float InMidiNote); // (Final|Native|Public|BlueprintCallable)
	void SetFrequencyPitchBend(float FrequencyOffsetCents); // (Final|Native|Public|BlueprintCallable)
	void SetFrequency(float FrequencyHz); // (Final|Native|Public|BlueprintCallable)
	void SetFilterEnvelopeSustainGain(float InSustainGain); // (Final|Native|Public|BlueprintCallable)
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec); // (Final|Native|Public|BlueprintCallable)
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec); // (Final|Native|Public|BlueprintCallable)
	void SetFilterEnvelopeInvert(bool bInInvert); // (Final|Native|Public|BlueprintCallable)
	void SetFilterEnvelopeDepth(float InDepth); // (Final|Native|Public|BlueprintCallable)
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert); // (Final|Native|Public|BlueprintCallable)
	void SetFilterEnvelopeBiasDepth(float InDepth); // (Final|Native|Public|BlueprintCallable)
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec); // (Final|Native|Public|BlueprintCallable)
	bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue); // (Final|Native|Public|BlueprintCallable)
	bool SetCurveTangent(int32_t TableIndex, float InNewTangent); // (Final|Native|Public|BlueprintCallable)
	bool SetCurveInterpolationType(enum class CurveInterpolationType InterpolationType, int32_t TableIndex); // (Final|Native|Public|BlueprintCallable)
	void SetAmpEnvelopeSustainGain(float InSustainGain); // (Final|Native|Public|BlueprintCallable)
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec); // (Final|Native|Public|BlueprintCallable)
	void SetAmpEnvelopeInvert(bool bInInvert); // (Final|Native|Public|BlueprintCallable)
	void SetAmpEnvelopeDepth(float InDepth); // (Final|Native|Public|BlueprintCallable)
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec); // (Final|Native|Public|BlueprintCallable)
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert); // (Final|Native|Public|BlueprintCallable)
	void SetAmpEnvelopeBiasDepth(float InDepth); // (Final|Native|Public|BlueprintCallable)
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec); // (Final|Native|Public|BlueprintCallable)
	void RefreshWaveTable(int32_t Index); // (Final|Native|Public|BlueprintCallable)
	void RefreshAllWaveTables(); // (Final|Native|Public|BlueprintCallable)
	void NoteOn(float InMidiNote, float InVelocity); // (Final|Native|Public|BlueprintCallable)
	void NoteOff(float InMidiNote); // (Final|Native|Public|BlueprintCallable)
	int32_t GetNumTableEntries(); // (Final|Native|Public|BlueprintCallable)
	int32_t GetMaxTableIndex(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<float> GetKeyFrameValuesForTable(float TableIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetCurveTangent(int32_t TableIndex); // (Final|Native|Public|BlueprintCallable)
};

// Class Synthesis.SynthComponentToneGenerator
struct USynthComponentToneGenerator : USynthComponent {
	float Frequency; 
	float Volume; 

	void SetVolume(float InVolume); // (Final|Native|Public|BlueprintCallable)
	void SetFrequency(float InFrequency); // (Final|Native|Public|BlueprintCallable)
};

// Class Synthesis.SynthSamplePlayer
struct USynthSamplePlayer : USynthComponent {
	struct USoundWave* SoundWave; 
	struct FMulticastInlineDelegate OnSampleLoaded; 
	struct FMulticastInlineDelegate OnSamplePlaybackProgress; 

	void SetSoundWave(struct USoundWave* InSoundWave); // (Final|Native|Public|BlueprintCallable)
	void SetScrubTimeWidth(float InScrubTimeWidthSec); // (Final|Native|Public|BlueprintCallable)
	void SetScrubMode(bool bScrubMode); // (Final|Native|Public|BlueprintCallable)
	void SetPitch(float InPitch, float TimeSec); // (Final|Native|Public|BlueprintCallable)
	void SeekToTime(float TimeSec, enum class ESamplePlayerSeekType SeekType, bool bWrap); // (Final|Native|Public|BlueprintCallable)
	bool IsLoaded(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetSampleDuration(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetCurrentPlaybackProgressTime(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetCurrentPlaybackProgressPercent(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
struct USynthesisUtilitiesBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	float GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax); // (Final|Native|Static|Private|BlueprintCallable)
	float GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax); // (Final|Native|Static|Private|BlueprintCallable)
};

// Class Synthesis.SynthKnob
struct USynthKnob : UWidget {
	float Value; 
	float StepSize; 
	float MouseSpeed; 
	float MouseFineTuneSpeed; 
	char ShowTooltipInfo : 1; 
	struct FText ParameterName; 
	struct FText ParameterUnits; 
	struct FDelegate ValueDelegate; 
	struct FSynthKnobStyle WidgetStyle; 
	bool Locked; 
	bool IsFocusable; 
	struct FMulticastInlineDelegate OnMouseCaptureBegin; 
	struct FMulticastInlineDelegate OnMouseCaptureEnd; 
	struct FMulticastInlineDelegate OnControllerCaptureBegin; 
	struct FMulticastInlineDelegate OnControllerCaptureEnd; 
	struct FMulticastInlineDelegate OnValueChanged; 

	void SetValue(float InValue); // (Final|Native|Public|BlueprintCallable)
	void SetStepSize(float InValue); // (Final|Native|Public|BlueprintCallable)
	void SetLocked(bool InValue); // (Final|Native|Public|BlueprintCallable)
	float GetValue(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

