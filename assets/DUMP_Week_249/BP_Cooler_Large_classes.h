// BlueprintGeneratedClass BP_Cooler_Large.BP_Cooler_Large_C
struct ABP_Cooler_Large_C : ABP_Deployable_PowerToggleableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_DEP_Cooler_T4; 
	struct UFMODAudioComponent* ActiveAudio; 
	int32_t LastRangeValue; 
	struct FModifierStatesRowHandle AuraEffect; 

	void UpdateAuraEffect(bool Active); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateThermalComponent(); // (Public|BlueprintCallable|BlueprintEvent)
	void Update Running Effects(bool ReceivingPower); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnDeviceStartRunning(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceStopRunning(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnStatContainerUpdated(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceResourceChanged(struct FIcarusResourcesEnum ResourceType); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Cooler_Large(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

