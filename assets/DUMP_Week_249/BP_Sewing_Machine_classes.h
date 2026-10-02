// BlueprintGeneratedClass BP_Sewing_Machine.BP_Sewing_Machine_C
struct ABP_Sewing_Machine_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_DEP_Bench_Sewing_Machine; 
	struct UFMODAudioComponent* Sewing Loop; 

	void OnProcessorStateUpdated(bool bIsActive); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Sewing_Machine(int32_t EntryPoint); // (Final|UbergraphFunction)
};

