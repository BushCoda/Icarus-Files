// BlueprintGeneratedClass BP_Animal_Bench.BP_Animal_Bench_C
struct ABP_Animal_Bench_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_ITM_Saddle_ArcticExplorer; 
	struct UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent; 
	struct UStaticMeshComponent* SM_DEP_Bench_Animal_Proxy_4; 
	struct UStaticMeshComponent* SM_DEP_Bench_Animal_Proxy_3; 
	struct UStaticMeshComponent* SM_DEP_Bench_Animal_Proxy_2; 
	struct USceneComponent* ProxyMeshesInventory; 
	struct USceneComponent* ProxyMeshesCrafting; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Animal_Bench(int32_t EntryPoint); // (Final|UbergraphFunction)
};

