// BlueprintGeneratedClass BP_Light_Electric_Base.BP_Light_Electric_Base_C
struct ABP_Light_Electric_Base_C : ABP_Deployable_PowerToggleableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* ActiveAudio; 
	struct USceneComponent* Scene_Lights; 
	struct UFMODEvent* FMODEvent_SwitchOn; 
	struct UFMODEvent* FMODEvent_SwitchOff; 
	struct UMaterialInterface* MaterialOn; 
	struct UMaterialInterface* MaterialOff; 
	int32_t MaterialIndex; 
	int32_t BrownOutStrength; 
	struct TMap<struct ULightComponent*, float> IntensityMapping; 
	int32_t LastEffectiveness; 

	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnRep_BrownOutStrength(); // (BlueprintCallable|BlueprintEvent)
	void SetLightActiveState(); // (Public|BlueprintCallable|BlueprintEvent)
	void PlaySwitchSound(bool On); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void UpdateLights(); // (BlueprintCallable|BlueprintEvent)
	void UpdateLights_BrownOut(int32_t Strength); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceTurnedOff(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceTurnedOn(); // (BlueprintCallable|BlueprintEvent)
	void OnBrownOutStrengthChanged(struct FIcarusResourcesEnum ResourceType, int32_t NewBrownOutStrength); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceStartRunning(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceStopRunning(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnStatsUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Light_Electric_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

