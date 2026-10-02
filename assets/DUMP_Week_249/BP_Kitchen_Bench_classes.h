// BlueprintGeneratedClass BP_Kitchen_Bench.BP_Kitchen_Bench_C
struct ABP_Kitchen_Bench_C : ABP_ResourceNetworkProcessor_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBPC_Recipe_Proxy_C* BPC_Recipe_Proxy; 
	struct USceneComponent* ProxyMeshesCrafting; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Kitchen_Bench(int32_t EntryPoint); // (Final|UbergraphFunction)
};

