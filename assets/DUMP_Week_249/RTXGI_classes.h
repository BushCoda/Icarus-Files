// Class RTXGI.DDGIVolume
struct ADDGIVolume : AActor {
	struct UDDGIVolumeComponent* DDGIVolumeComponent; 
};

// Class RTXGI.DDGIVolumeComponent
struct UDDGIVolumeComponent : USceneComponent {
	bool EnableVolume; 
	float UpdatePriority; 
	int32_t LightingPriority; 
	float BlendingDistance; 
	float BlendingCutoffDistance; 
	bool RuntimeStatic; 
	struct FVector LastOrigin; 
	enum class EDDGIRaysPerProbe RaysPerProbe; 
	struct FIntVector ProbeCounts; 
	float ProbeMaxRayDistance; 
	float ProbeHistoryWeight; 
	struct FProbeRelocation ProbeRelocation; 
	bool ScrollProbesInfinitely; 
	float ScrollingVolumeZOffset; 
	bool VisualizeProbes; 
	struct FIntVector ProbeScrollOffset; 
	float probeDistanceExponent; 
	float probeIrradianceEncodingGamma; 
	float probeChangeThreshold; 
	float probeBrightnessThreshold; 
	enum class EDDGISkyLightType SkyLightTypeOnRayMiss; 
	float ViewBias; 
	float NormalBias; 
	float LightMultiplier; 
	float EmissiveMultiplier; 
	float IrradianceScalar; 
	struct FLightingChannels LightingChannels; 

	void ToggleVolume(bool IsVolumeEnabled); // (Final|Native|Public|BlueprintCallable)
	void SetProbesVisualization(bool IsProbesVisualized); // (Final|Native|Public|BlueprintCallable)
	void SetLightMultiplier(float NewLightMultiplier); // (Final|Native|Public|BlueprintCallable)
	void SetIrradianceScalar(float NewIrradianceScalar); // (Final|Native|Public|BlueprintCallable)
	void SetEmissiveMultiplier(float NewEmissiveMultiplier); // (Final|Native|Public|BlueprintCallable)
	float GetLightMultiplier(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetIrradianceScalar(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetEmissiveMultiplier(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void DDGIClearVolumes(); // (Final|Exec|Native|Public)
	void ClearProbeData(); // (Final|Native|Public|BlueprintCallable)
};

// Class RTXGI.RTXGIPluginSettings
struct URTXGIPluginSettings : UDeveloperSettings {
	enum class EDDGIIrradianceBits IrradianceBits; 
	enum class EDDGIDistanceBits DistanceBits; 
	float DebugProbeRadius; 
	int32_t ProbeUpdateRayBudget; 
	enum class EDDGIProbesVisulizationMode ProbesVisualization; 
	float ProbesDepthScale; 
	bool SerializeProbes; 
};

