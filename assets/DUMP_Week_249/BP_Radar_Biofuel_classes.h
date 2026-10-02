// BlueprintGeneratedClass BP_Radar_Biofuel.BP_Radar_Biofuel_C
struct ABP_Radar_Biofuel_C : ABP_Radarv3_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* Plane; 

	void UseDeviceToggle(bool& WantsDeviceToggle); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void CheckRadarActive(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRadarStateUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnGeneratorOutOfFuel(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceOnStateChanged(bool bIsOn); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Radar_Biofuel(int32_t EntryPoint); // (Final|UbergraphFunction)
};

