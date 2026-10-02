// BlueprintGeneratedClass BP_Interior_Wood_Cupboard.BP_Interior_Wood_Cupboard_C
struct ABP_Interior_Wood_Cupboard_C : ABP_DeployableContainerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_DEP_Cupboard_Wood_INT; 
	struct UAudioOcclusionComponent* AudioOcclusion1; 

	void OnBecomeInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void OnNoLongerInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Interior_Wood_Cupboard(int32_t EntryPoint); // (Final|UbergraphFunction)
};

