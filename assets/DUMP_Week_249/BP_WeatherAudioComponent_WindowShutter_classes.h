// BlueprintGeneratedClass BP_WeatherAudioComponent_WindowShutter.BP_WeatherAudioComponent_WindowShutter_C
struct UBP_WeatherAudioComponent_WindowShutter_C : UBP_WeatherAudioComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void PlayPointSourceAudio(); // (Public|BlueprintCallable|BlueprintEvent)
	void StartWeatherAudio(); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckExposure(float& Exposure); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetOpenState(bool Open); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_WeatherAudioComponent_WindowShutter(int32_t EntryPoint); // (Final|UbergraphFunction)
};

