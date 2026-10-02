// BlueprintGeneratedClass BP_Metal_Cupboard.BP_Metal_Cupboard_C
struct ABP_Metal_Cupboard_C : ABP_DeployableContainerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_DEP_Cupboard_Metal; 
	struct UAudioOcclusionComponent* AudioOcclusion1; 

	void OnBecomeInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void OnNoLongerInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Metal_Cupboard(int32_t EntryPoint); // (Final|UbergraphFunction)
};

