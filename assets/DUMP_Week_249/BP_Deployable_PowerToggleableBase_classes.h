// BlueprintGeneratedClass BP_Deployable_PowerToggleableBase.BP_Deployable_PowerToggleableBase_C
struct ABP_Deployable_PowerToggleableBase_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool bIsDeviceRunning; 

	void OnRep_IsDeviceRunning(); // (BlueprintCallable|BlueprintEvent)
	void IsDeviceRunning(bool& DeviceIsRunning); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void CheckDeviceRunning(); // (Public|BlueprintCallable|BlueprintEvent)
	void CalculateIsDeviceRunning(bool& IsRunning); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnDeviceOnStateChanged(bool bIsOn); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceTurnedOn(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceTurnedOff(); // (BlueprintCallable|BlueprintEvent)
	void OnBrownOutStrengthChanged(struct FIcarusResourcesEnum ResourceType, int32_t NewBrownOutStrength); // (BlueprintCallable|BlueprintEvent)
	void OnResourceNetworkUpdated(enum class EIcarusResourceType ResourceType, bool bConnected); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceStartRunning(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceStopRunning(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Deployable_PowerToggleableBase(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

