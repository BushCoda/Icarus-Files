// BlueprintGeneratedClass BP_Armor_Bench.BP_Armor_Bench_C
struct ABP_Armor_Bench_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent; 
	struct UStaticMeshComponent* SM_DEP_Bench_Textile_Proxy_Fur_Head; 
	struct UStaticMeshComponent* SM_DEP_Bench_Textile_Proxy_Fur_Chest; 
	struct UStaticMeshComponent* SM_DEP_Bench_Textile_Proxy_Cloth; 
	struct UStaticMeshComponent* SM_DEP_Bench_Textile_Proxy_Rope; 
	struct UStaticMeshComponent* SM_DEP_Bench_Textile_Proxy_Leather; 
	struct UStaticMeshComponent* SM_DEP_Bench_Textile_Proxy_Fur; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Armor_Bench(int32_t EntryPoint); // (Final|UbergraphFunction)
};

