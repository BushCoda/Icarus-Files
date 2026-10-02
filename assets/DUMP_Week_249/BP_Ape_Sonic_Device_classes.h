// BlueprintGeneratedClass BP_Ape_Sonic_Device.BP_Ape_Sonic_Device_C
struct ABP_Ape_Sonic_Device_C : ABP_Deployable_ManualToggle_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* ApeSonicLoopAudio; 

	void ActiveUpdated(bool bNewActive); // (Public|BlueprintCallable|BlueprintEvent)
	void Play Loop Audio(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void Stop Loop Audio(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void OnDeviceOnStateChanged(bool bIsOn); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Ape_Sonic_Device(int32_t EntryPoint); // (Final|UbergraphFunction)
};

