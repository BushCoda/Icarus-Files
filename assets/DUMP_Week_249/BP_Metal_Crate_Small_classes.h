// BlueprintGeneratedClass BP_Metal_Crate_Small.BP_Metal_Crate_Small_C
struct ABP_Metal_Crate_Small_C : ABP_DeployableContainerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_DEP_Crate_SML_Metal1; 
	struct UStaticMeshComponent* SM_DEP_Crate_SML_Metal; 
	struct UAudioOcclusionComponent* AudioOcclusion1; 

	void OnBecomeInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void OnNoLongerInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Metal_Crate_Small(int32_t EntryPoint); // (Final|UbergraphFunction)
};

