// BlueprintGeneratedClass BP_Wood_Crate.BP_Wood_Crate_C
struct ABP_Wood_Crate_C : ABP_DeployableContainerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_DEP_Crate_SML_Wood; 
	struct UAudioOcclusionComponent* AudioOcclusion1; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct TSet<struct AActor*> CurrentInteractors_1; 

	void OnBecomeInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void OnNoLongerInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Wood_Crate(int32_t EntryPoint); // (Final|UbergraphFunction)
};

