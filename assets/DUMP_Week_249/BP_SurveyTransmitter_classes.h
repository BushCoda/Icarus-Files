// BlueprintGeneratedClass BP_SurveyTransmitter.BP_SurveyTransmitter_C
struct ABP_SurveyTransmitter_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource1; 
	struct UGenericAITargetComponent* GenericAITarget; 
	struct UFMODAudioComponent* FMODAudio; 
	struct UStaticMeshComponent* TransmitLaser; 
	struct UPointLightComponent* PointLight; 
	struct USceneComponent* Scene_SendData; 
	int32_t ValidRadarsFound; 
	struct UGenericAITargetComponent* GeneratedTargetComponent; 
	bool DeviceActive; 
	struct FTimerHandle CheckForRadarsTimer; 
	bool AbleToTransmit; 
	struct UFMODEvent* FMODEventSwitchOn; 
	bool ForceDeviceActive_On; 

	void ForceDeviceActive(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_AbleToTransmit(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_DeviceActive(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void CheckForRadars(); // (BlueprintCallable|BlueprintEvent)
	void AddAITarget(); // (BlueprintCallable|BlueprintEvent)
	void RemoveAITarget(); // (BlueprintCallable|BlueprintEvent)
	void TransmittingComplete(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SurveyTransmitter(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

