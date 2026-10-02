// ScriptStruct MotoSynth.MotoSynthRuntimeSettings
struct FMotoSynthRuntimeSettings {
	bool bSynthToneEnabled; 
	float SynthToneVolume; 
	float SynthToneFilterFrequency; 
	int32_t SynthOctaveShift; 
	bool bGranularEngineEnabled; 
	float GranularEngineVolume; 
	float GranularEnginePitchScale; 
	int32_t NumSamplesToCrossfadeBetweenGrains; 
	int32_t NumGrainTableEntriesPerGrain; 
	int32_t GrainTableRandomOffsetForConstantRPMs; 
	int32_t GrainCrossfadeSamplesForConstantRPMs; 
	struct UMotoSynthSource* AccelerationSource; 
	struct UMotoSynthSource* DecelerationSource; 
	bool bStereoWidenerEnabled; 
	float StereoDelayMsec; 
	float StereoFeedback; 
	float StereoWidenerWetlevel; 
	float StereoWidenerDryLevel; 
	float StereoWidenerDelayRatio; 
	bool bStereoWidenerFilterEnabled; 
	float StereoWidenerFilterFrequency; 
	float StereoWidenerFilterQ; 
};

// ScriptStruct MotoSynth.GrainTableEntry
struct FGrainTableEntry {
	int32_t SampleIndex; 
	float RPM; 
};

