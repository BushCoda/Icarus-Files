// BlueprintGeneratedClass BP_SurveyRadar.BP_SurveyRadar_C
struct ABP_SurveyRadar_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* FMODAudio; 
	struct UPointLightComponent* PointLight_Laptop; 
	struct USceneComponent* Scene_Laptop; 
	struct UStaticMeshComponent* TransmitterLaser; 
	struct UPointLightComponent* PointLight_Transmitter; 
	struct UStaticMeshComponent* RadarLaser; 
	struct USceneComponent* Scene_TransmitterActive; 
	struct UPointLightComponent* PointLight_Radar; 
	struct USceneComponent* Scene_RadarActive; 
	struct ABP_SurveyRadar_C* FoundRadar; 
	struct FVector LaserPos; 
	float UIDRadar; 
	bool DeviceActive; 
	bool ShowRadarLaser; 
	struct FTimerHandle LookForRadarTimer; 
	struct ABP_SurveyTransmitter_C* FoundTransmitter; 
	bool ShowTransmitterLaser; 
	struct UFMODEvent* FMODEventSwitchOn; 

	void UpdateFMODParameter(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_ShowTransmitterLaser(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_FoundTransmitter(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_FoundRadar(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_ShowLaser(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_DeviceActive(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void FindFirstRadar(struct ABP_SurveyRadar_C*& NextRadar); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FindNextRadarUID(struct ABP_SurveyRadar_C*& NextRadar); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void LookForRadar(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void StopLookingForRadar(); // (BlueprintCallable|BlueprintEvent)
	void LookForActiveTransmitter(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SurveyRadar(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

