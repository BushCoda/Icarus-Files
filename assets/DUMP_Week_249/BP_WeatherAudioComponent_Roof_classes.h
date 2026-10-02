// BlueprintGeneratedClass BP_WeatherAudioComponent_Roof.BP_WeatherAudioComponent_Roof_C
struct UBP_WeatherAudioComponent_Roof_C : UBP_WeatherAudioComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_BuildingAudioComponent_C* BuildingAudio; 
	struct UFMODEvent* BuildingFMODEvent; 

	struct FVector GetMultiPointAudioLocation(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	float GetMultiPointAudioWeighting(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void CheckExposure(float& Exposure); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	void DeregisterWithBuilding(); // (Public|BlueprintCallable|BlueprintEvent)
	void RegisterWithBuilding(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateWeatherExposure(); // (Protected|BlueprintCallable|BlueprintEvent)
	void StopWeatherAudio(); // (Public|BlueprintCallable|BlueprintEvent)
	void StartWeatherAudio(); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void OnBuildingDestroyed(struct ABuildingBase* Building, enum class EBuildingDestroyReason DestroyReason); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_WeatherAudioComponent_Roof(int32_t EntryPoint); // (Final|UbergraphFunction)
};

