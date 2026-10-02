// BlueprintGeneratedClass BP_Wood_Crate_Medium.BP_Wood_Crate_Medium_C
struct ABP_Wood_Crate_Medium_C : ABP_DeployableContainerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_DEP_Crate_Medium_Wood; 
	struct UAudioOcclusionComponent* AudioOcclusion1; 

	void OnBecomeInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void OnNoLongerInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Wood_Crate_Medium(int32_t EntryPoint); // (Final|UbergraphFunction)
};

