// BlueprintGeneratedClass BP_Deep_Freeze.BP_Deep_Freeze_C
struct ABP_Deep_Freeze_C : ABP_DeployableContainerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_DEP_Fridge; 

	void UpdateModifier(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddIce(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnBecomeInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void OnNoLongerInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void GenerateIceTimer(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnDeviceOnStateChanged(bool bIsOn); // (BlueprintCallable|BlueprintEvent)
	void OnBorwnoutStrenghtChanged(struct FIcarusResourcesEnum ResourceType, int32_t Strength); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Deep_Freeze(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

