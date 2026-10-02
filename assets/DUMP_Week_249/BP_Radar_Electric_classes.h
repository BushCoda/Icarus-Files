// BlueprintGeneratedClass BP_Radar_Electric.BP_Radar_Electric_C
struct ABP_Radar_Electric_C : ABP_Radarv3_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void CheckRadarOnState(); // (Public|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnRadarStateUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnDeviceResourceChanged(struct FIcarusResourcesEnum ResourceType); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Radar_Electric(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

