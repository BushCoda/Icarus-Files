// BlueprintGeneratedClass BP_Advanced_Kitchen_Sink.BP_Advanced_Kitchen_Sink_C
struct ABP_Advanced_Kitchen_Sink_C : ABP_DeployableContainerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UAudioOcclusionComponent* AudioOcclusion1; 
	int32_t ContainerFillUnitsPerSecond; 
	float ContainerFillTickRate; 

	void GetWaterModifiers(struct TArray<struct FAlterationsEnum>& Array); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void TryAddWaterToContainers(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnBecomeInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void OnNoLongerInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ContainerFillTimerTick(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Advanced_Kitchen_Sink(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

