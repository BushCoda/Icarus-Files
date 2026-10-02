// BlueprintGeneratedClass BP_WeatherAudioComponent.BP_WeatherAudioComponent_C
struct UBP_WeatherAudioComponent_C : UWeatherAudioComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusActor* IcarusActor; 
	bool WeatherAudioActive; 
	struct UFMODAudioComponent* AudioComponent; 
	float WeatherExposureUpdateFrequency; 
	struct FTimerHandle WeatherExposureTimerHandle; 
	struct UFMODEvent* ItemFMODEvent; 
	float Exposure; 

	void GetBiome(struct FBiomesRowHandle& Biome); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SubscribeToWeatherUpdates(struct FBiomesRowHandle Biome); // (Private|BlueprintCallable|BlueprintEvent)
	void CheckExposure(float& Exposure); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetPointSourceExposureParameter(); // (Public|BlueprintCallable|BlueprintEvent)
	void StopPointSourceAudio(); // (Public|BlueprintCallable|BlueprintEvent)
	void StopExposureTimer(); // (Public|BlueprintCallable|BlueprintEvent)
	void StartExposureTimer(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayPointSourceAudio(); // (Public|BlueprintCallable|BlueprintEvent)
	void StopWeatherAudio(); // (Public|BlueprintCallable|BlueprintEvent)
	void StartWeatherAudio(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateWeatherExposure(); // (Protected|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void UpdateWeatherAudio(bool bWeatherActive); // (Event|Public|BlueprintEvent)
	void OnBiomeUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_WeatherAudioComponent(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

