// BlueprintGeneratedClass BP_Advanced_Armor_Bench.BP_Advanced_Armor_Bench_C
struct ABP_Advanced_Armor_Bench_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_DEP_Bench_Textile_Proxy_Fur_Head; 
	struct UStaticMeshComponent* SM_DEP_Bench_Textile_Proxy_Fur_Chest; 
	struct UStaticMeshComponent* SM_DEP_Bench_Textile_Proxy_Cloth; 
	struct UStaticMeshComponent* SM_DEP_Bench_Textile_Proxy_Rope; 
	struct UStaticMeshComponent* SM_DEP_Bench_Textile_Proxy_Leather; 
	struct UStaticMeshComponent* SM_DEP_Bench_Textile_Proxy_Fur; 

	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Advanced_Armor_Bench(int32_t EntryPoint); // (Final|UbergraphFunction)
};

