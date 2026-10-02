// BlueprintGeneratedClass BP_WeatherAudioComponent_BuildingWindDamage.BP_WeatherAudioComponent_BuildingWindDamage_C
struct UBP_WeatherAudioComponent_BuildingWindDamage_C : UBP_WeatherAudioComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	int32_t MaxDestructionPoints; 

	void ForceStopAndDestroy(); // (Public|BlueprintCallable|BlueprintEvent)
	void StopWeatherAudio(); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckExposure(float& Exposure); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_WeatherAudioComponent_BuildingWindDamage(int32_t EntryPoint); // (Final|UbergraphFunction)
};

