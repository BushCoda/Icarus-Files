// BlueprintGeneratedClass BP_Herbalism_Bench.BP_Herbalism_Bench_C
struct ABP_Herbalism_Bench_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent; 
	struct UStaticMeshComponent* SM_DEP_Bench_Herbalism_Proxy_Herb2; 
	struct UStaticMeshComponent* SM_DEP_Bench_Herbalism_Proxy_Herb1; 
	struct UStaticMeshComponent* SM_DEP_Bench_Herbalism_Proxy_Herb3; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Herbalism_Bench(int32_t EntryPoint); // (Final|UbergraphFunction)
};

