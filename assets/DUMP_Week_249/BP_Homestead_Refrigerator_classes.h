// BlueprintGeneratedClass BP_Homestead_Refrigerator.BP_Homestead_Refrigerator_C
struct ABP_Homestead_Refrigerator_C : ABP_DeployableContainerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_DEP_Fridge; 

	void UpdateModifierState(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnBecomeInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void OnNoLongerInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnDeviceResourceChanged(struct FIcarusResourcesEnum ResourceType); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Homestead_Refrigerator(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

