// Class AudioMixer.SynthComponent
struct USynthComponent : USceneComponent {
	char bAutoDestroy : 1; 
	char bStopWhenOwnerDestroyed : 1; 
	char bAllowSpatialization : 1; 
	char bOverrideAttenuation : 1; 
	char bEnableBusSends : 1; 
	char bEnableBaseSubmix : 1; 
	char bEnableSubmixSends : 1; 
	struct USoundAttenuation* AttenuationSettings; 
	struct FSoundAttenuationSettings AttenuationOverrides; 
	struct USoundConcurrency* ConcurrencySettings; 
	struct TSet<struct USoundConcurrency*> ConcurrencySet; 
	struct USoundClass* SoundClass; 
	struct USoundEffectSourcePresetChain* SourceEffectChain; 
	struct USoundSubmixBase* SoundSubmix; 
	struct TArray<struct FSoundSubmixSendInfo> SoundSubmixSends; 
	struct TArray<struct FSoundSourceBusSendInfo> BusSends; 
	struct TArray<struct FSoundSourceBusSendInfo> PreEffectBusSends; 
	char bIsUISound : 1; 
	char bIsPreviewSound : 1; 
	int32_t EnvelopeFollowerAttackTime; 
	int32_t EnvelopeFollowerReleaseTime; 
	struct FMulticastInlineDelegate OnAudioEnvelopeValue; 
	struct USynthSound* Synth; 
	struct UAudioComponent* AudioComponent; 

	void Stop(); // (Final|Native|Public|BlueprintCallable)
	void Start(); // (Final|Native|Public|BlueprintCallable)
	void SetVolumeMultiplier(float VolumeMultiplier); // (Final|Native|Public|BlueprintCallable)
	void SetSubmixSend(struct USoundSubmixBase* Submix, float SendLevel); // (Final|Native|Public|BlueprintCallable)
	void SetOutputToBusOnly(bool bInOutputToBusOnly); // (Final|Native|Public|BlueprintCallable)
	void SetLowPassFilterFrequency(float InLowPassFilterFrequency); // (Native|Public|BlueprintCallable)
	void SetLowPassFilterEnabled(bool InLowPassFilterEnabled); // (Final|Native|Public|BlueprintCallable)
	bool IsPlaying(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class AudioMixer.AudioGenerator
struct UAudioGenerator : UObject {
};

// Class AudioMixer.AudioMixerBlueprintLibrary
struct UAudioMixerBlueprintLibrary : UBlueprintFunctionLibrary {

	float TrimAudioCache(float InMegabytesToFree); // (Final|Native|Static|Public|BlueprintCallable)
	struct USoundWave* StopRecordingOutput(struct UObject* WorldContextObject, enum class EAudioRecordingExportType ExportType, struct FString Name, struct FString Path, struct USoundSubmix* SubmixToRecord, struct USoundWave* ExistingSoundWaveToOverwrite); // (Final|Native|Static|Public|BlueprintCallable)
	void StopAudioBus(struct UObject* WorldContextObject, struct UAudioBus* AudioBus); // (Final|Native|Static|Public|BlueprintCallable)
	void StopAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToStopAnalyzing); // (Final|Native|Static|Public|BlueprintCallable)
	void StartRecordingOutput(struct UObject* WorldContextObject, float ExpectedDuration, struct USoundSubmix* SubmixToRecord); // (Final|Native|Static|Public|BlueprintCallable)
	void StartAudioBus(struct UObject* WorldContextObject, struct UAudioBus* AudioBus); // (Final|Native|Static|Public|BlueprintCallable)
	void StartAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToAnalyze, enum class EFFTSize FFTSize, enum class EFFTPeakInterpolationMethod InterpolationMethod, enum class EFFTWindowType WindowType, float HopSize, enum class EAudioSpectrumType SpectrumType); // (Final|Native|Static|Public|BlueprintCallable)
	void SetSubmixEffectChainOverride(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct TArray<struct USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec); // (Final|Native|Static|Public|BlueprintCallable)
	void SetBypassSourceEffectChainEntry(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed); // (Final|Native|Static|Public|BlueprintCallable)
	void ResumeRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause); // (Final|Native|Static|Public|BlueprintCallable)
	void ReplaceSubmixEffect(struct UObject* WorldContextObject, struct USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, struct USoundEffectSubmixPreset* SubmixEffectPreset); // (Final|Native|Static|Public|BlueprintCallable)
	void ReplaceSoundEffectSubmix(struct UObject* WorldContextObject, struct USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, struct USoundEffectSubmixPreset* SubmixEffectPreset); // (Final|Native|Static|Public|BlueprintCallable)
	void RemoveSubmixEffectPresetAtIndex(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, int32_t SubmixChainIndex); // (Final|Native|Static|Public|BlueprintCallable)
	void RemoveSubmixEffectPreset(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset); // (Final|Native|Static|Public|BlueprintCallable)
	void RemoveSubmixEffectAtIndex(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, int32_t SubmixChainIndex); // (Final|Native|Static|Public|BlueprintCallable)
	void RemoveSubmixEffect(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset); // (Final|Native|Static|Public|BlueprintCallable)
	void RemoveSourceEffectFromPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex); // (Final|Native|Static|Public|BlueprintCallable)
	void RemoveMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset); // (Final|Native|Static|Public|BlueprintCallable)
	void PrimeSoundForPlayback(struct USoundWave* SoundWave, struct FDelegate OnLoadCompletion); // (Final|Native|Static|Public|BlueprintCallable)
	void PrimeSoundCueForPlayback(struct USoundCue* SoundCue); // (Final|Native|Static|Public|BlueprintCallable)
	void PauseRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause); // (Final|Native|Static|Public|BlueprintCallable)
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakePresetSpectralAnalysisBandSettings(enum class EAudioSpectrumBandPresetType InBandPresetType, int32_t InNumBands, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeMusicalSpectralAnalysisBandSettings(int32_t InNumSemitones, enum class EMusicalNoteName InStartingMusicalNote, int32_t InStartingOctave, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeFullSpectrumSpectralAnalysisBandSettings(int32_t InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsAudioBusActive(struct UObject* WorldContextObject, struct UAudioBus* AudioBus); // (Final|Native|Static|Public|BlueprintCallable)
	void GetPhaseForFrequencies(struct UObject* WorldContextObject, struct TArray<float>& Frequencies, struct TArray<float>& Phases, struct USoundSubmix* SubmixToAnalyze); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	int32_t GetNumberOfEntriesInSourceEffectChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain); // (Final|Native|Static|Public|BlueprintCallable)
	void GetMagnitudeForFrequencies(struct UObject* WorldContextObject, struct TArray<float>& Frequencies, struct TArray<float>& Magnitudes, struct USoundSubmix* SubmixToAnalyze); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void ClearSubmixEffects(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix); // (Final|Native|Static|Public|BlueprintCallable)
	void ClearSubmixEffectChainOverride(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, float FadeTimeSec); // (Final|Native|Static|Public|BlueprintCallable)
	void ClearMasterSubmixEffects(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable)
	int32_t AddSubmixEffect(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset); // (Final|Native|Static|Public|BlueprintCallable)
	void AddSourceEffectToPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, struct FSourceEffectChainEntry Entry); // (Final|Native|Static|Public|BlueprintCallable)
	void AddMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class AudioMixer.QuartzClockHandle
struct UQuartzClockHandle : UObject {
	struct UQuartzSubsystem* QuartzSubsystem; 
	struct UWorld* WorldPtr; 

	void UnsubscribeFromTimeDivision(struct UObject* WorldContextObject, enum class EQuartzCommandQuantization InQuantizationBoundary, struct UQuartzClockHandle*& ClockHandle); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void UnsubscribeFromAllTimeDivisions(struct UObject* WorldContextObject, struct UQuartzClockHandle*& ClockHandle); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SubscribeToQuantizationEvent(struct UObject* WorldContextObject, enum class EQuartzCommandQuantization InQuantizationBoundary, struct FDelegate& OnQuantizationEvent, struct UQuartzClockHandle*& ClockHandle); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SubscribeToAllQuantizationEvents(struct UObject* WorldContextObject, struct FDelegate& OnQuantizationEvent, struct UQuartzClockHandle*& ClockHandle); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void StopClock(struct UObject* WorldContextObject, bool CancelPendingEvents, struct UQuartzClockHandle*& ClockHandle); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void StartOtherClock(struct UObject* WorldContextObject, struct FName OtherClockName, struct FQuartzQuantizationBoundary InQuantizationBoundary, struct FDelegate& InDelegate); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void StartClock(struct UObject* WorldContextObject, struct UQuartzClockHandle*& ClockHandle); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetTicksPerSecond(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, struct UQuartzClockHandle*& ClockHandle, float TicksPerSecond); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetThirtySecondNotesPerMinute(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, struct UQuartzClockHandle*& ClockHandle, float ThirtySecondsNotesPerMinute); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetSecondsPerTick(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, struct UQuartzClockHandle*& ClockHandle, float SecondsPerTick); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetMillisecondsPerTick(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, struct UQuartzClockHandle*& ClockHandle, float MillisecondsPerTick); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetBeatsPerMinute(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, struct UQuartzClockHandle*& ClockHandle, float BeatsPerMinute); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void ResumeClock(struct UObject* WorldContextObject, struct UQuartzClockHandle*& ClockHandle); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void ResetTransportQuantized(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary InQuantizationBoundary, struct FDelegate& InDelegate, struct UQuartzClockHandle*& ClockHandle); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void ResetTransport(struct UObject* WorldContextObject, struct FDelegate& InDelegate); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void PauseClock(struct UObject* WorldContextObject, struct UQuartzClockHandle*& ClockHandle); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	bool IsClockRunning(struct UObject* WorldContextObject); // (Final|Native|Public|BlueprintCallable)
	float GetTicksPerSecond(struct UObject* WorldContextObject); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetThirtySecondNotesPerMinute(struct UObject* WorldContextObject); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetSecondsPerTick(struct UObject* WorldContextObject); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetMillisecondsPerTick(struct UObject* WorldContextObject); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetEstimatedRunTime(struct UObject* WorldContextObject); // (Final|Native|Public|BlueprintCallable)
	float GetDurationOfQuantizationTypeInSeconds(struct UObject* WorldContextObject, enum class EQuartzCommandQuantization& QuantizationType, float Multiplier); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	struct FQuartzTransportTimeStamp GetCurrentTimestamp(struct UObject* WorldContextObject); // (Final|Native|Public|BlueprintCallable)
	float GetBeatsPerMinute(struct UObject* WorldContextObject); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
struct USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset {
	struct FSubmixEffectDynamicsProcessorSettings Settings; 

	void SetSettings(struct FSubmixEffectDynamicsProcessorSettings& Settings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetExternalSubmix(struct USoundSubmix* Submix); // (Final|Native|Public|BlueprintCallable)
	void SetAudioBus(struct UAudioBus* AudioBus); // (Final|Native|Public|BlueprintCallable)
	void ResetKey(); // (Final|Native|Public|BlueprintCallable)
};

// Class AudioMixer.SubmixEffectSubmixEQPreset
struct USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset {
	struct FSubmixEffectSubmixEQSettings Settings; 

	void SetSettings(struct FSubmixEffectSubmixEQSettings& InSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class AudioMixer.SubmixEffectReverbPreset
struct USubmixEffectReverbPreset : USoundEffectSubmixPreset {
	struct FSubmixEffectReverbSettings Settings; 

	void SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel); // (Final|Native|Public|BlueprintCallable)
	void SetSettings(struct FSubmixEffectReverbSettings& InSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};

// Class AudioMixer.QuartzSubsystem
struct UQuartzSubsystem : UTickableWorldSubsystem {

	bool IsQuartzEnabled(); // (Final|Native|Public|BlueprintCallable)
	bool IsClockRunning(struct UObject* WorldContextObject, struct FName ClockName); // (Final|Native|Public|BlueprintCallable)
	float GetRoundTripMinLatency(struct UObject* WorldContextObject); // (Final|Native|Public|BlueprintCallable)
	float GetRoundTripMaxLatency(struct UObject* WorldContextObject); // (Final|Native|Public|BlueprintCallable)
	float GetRoundTripAverageLatency(struct UObject* WorldContextObject); // (Final|Native|Public|BlueprintCallable)
	struct UQuartzClockHandle* GetHandleForClock(struct UObject* WorldContextObject, struct FName ClockName); // (Final|Native|Public|BlueprintCallable)
	float GetGameThreadToAudioRenderThreadMinLatency(struct UObject* WorldContextObject); // (Final|Native|Public|BlueprintCallable)
	float GetGameThreadToAudioRenderThreadMaxLatency(struct UObject* WorldContextObject); // (Final|Native|Public|BlueprintCallable)
	float GetGameThreadToAudioRenderThreadAverageLatency(struct UObject* WorldContextObject); // (Final|Native|Public|BlueprintCallable)
	float GetEstimatedClockRunTime(struct UObject* WorldContextObject, struct FName& InClockName); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	float GetDurationOfQuantizationTypeInSeconds(struct UObject* WorldContextObject, struct FName ClockName, enum class EQuartzCommandQuantization& QuantizationType, float Multiplier); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	struct FQuartzTransportTimeStamp GetCurrentClockTimestamp(struct UObject* WorldContextObject, struct FName& InClockName); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	float GetAudioRenderThreadToGameThreadMinLatency(); // (Final|Native|Public|BlueprintCallable)
	float GetAudioRenderThreadToGameThreadMaxLatency(); // (Final|Native|Public|BlueprintCallable)
	float GetAudioRenderThreadToGameThreadAverageLatency(); // (Final|Native|Public|BlueprintCallable)
	bool DoesClockExist(struct UObject* WorldContextObject, struct FName ClockName); // (Final|Native|Public|BlueprintCallable)
	void DeleteClockByName(struct UObject* WorldContextObject, struct FName ClockName); // (Final|Native|Public|BlueprintCallable)
	void DeleteClockByHandle(struct UObject* WorldContextObject, struct UQuartzClockHandle*& InClockHandle); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	struct UQuartzClockHandle* CreateNewClock(struct UObject* WorldContextObject, struct FName ClockName, struct FQuartzClockSettings InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager); // (Final|Native|Public|BlueprintCallable)
};

// Class AudioMixer.SynthSound
struct USynthSound : USoundWaveProcedural {
	struct USynthComponent* OwningSynthComponent; 
};

