// BlueprintGeneratedClass BP_Interior_Wood_Crate_Small.BP_Interior_Wood_Crate_Small_C
struct ABP_Interior_Wood_Crate_Small_C : ABP_DeployableContainerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_DEP_Crate_SML_Wood_INT; 
	struct UAudioOcclusionComponent* AudioOcclusion1; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 

	void OnBecomeInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void OnNoLongerInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Interior_Wood_Crate_Small(int32_t EntryPoint); // (Final|UbergraphFunction)
};

