// BlueprintGeneratedClass BP_Advanced_Kitchen_Bench.BP_Advanced_Kitchen_Bench_C
struct ABP_Advanced_Kitchen_Bench_C : ABP_ResourceNetworkProcessor_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBPC_Recipe_Proxy_C* BPC_Recipe_Proxy; 
	struct USceneComponent* ProxyMeshesCrafting; 
	struct TMap<struct FTagQueriesRowHandle, int32_t> Proxy Mesh Crafting Filters_1; 
	struct TMap<struct USceneComponent*, struct FTagQueriesRowHandle> Proxy Recipe Crafting Temp; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Advanced_Kitchen_Bench(int32_t EntryPoint); // (Final|UbergraphFunction)
};

