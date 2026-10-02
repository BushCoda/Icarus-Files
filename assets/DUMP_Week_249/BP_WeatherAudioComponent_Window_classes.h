// BlueprintGeneratedClass BP_WeatherAudioComponent_Window.BP_WeatherAudioComponent_Window_C
struct UBP_WeatherAudioComponent_Window_C : UBP_WeatherAudioComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool Open; 

	void BuildingOpenStateChanged(enum class EBuildingOpenableState NewState); // (Public|BlueprintCallable|BlueprintEvent)
	void SetOpenParameter(); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckExposure(float& Exposure); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	void StartWeatherAudio(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetOpenState(bool Open); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_WeatherAudioComponent_Window(int32_t EntryPoint); // (Final|UbergraphFunction)
};

