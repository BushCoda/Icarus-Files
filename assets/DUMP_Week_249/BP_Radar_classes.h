// BlueprintGeneratedClass BP_Radar.BP_Radar_C
struct ABP_Radar_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UIcarusMapIconComponent* IcarusMapIcon; 
	struct UFMODAudioComponent* FMOD_Radar_Audio; 
	struct UPointLightComponent* PointLight; 
	struct UStaticMeshComponent* Cube; 
	bool IsOn; 
	int32_t ScanningTileX; 
	int32_t ScanningTileY; 
	float Progress; 
	float SecondsToScan; 
	struct AMapManager_C* MapManager; 
	int32_t SpiralRadiusMax; 
	int32_t SpiralRadiusCurrent; 
	int32_t SpiralLastX; 
	int32_t SpiralLastY; 
	bool Completed; 
	struct FMulticastInlineDelegate RadarActivated; 

	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnRep_IsOn(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void NextSpiralScanLocation(bool& Success); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void Activate(struct AActor* Instigator); // (BlueprintCallable|BlueprintEvent)
	void DeployableTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Radar(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void RadarActivated__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

