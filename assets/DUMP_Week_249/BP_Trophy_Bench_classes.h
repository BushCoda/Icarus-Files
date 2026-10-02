// BlueprintGeneratedClass BP_Trophy_Bench.BP_Trophy_Bench_C
struct ABP_Trophy_Bench_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBPC_Recipe_Proxy_C* BPC_Recipe_Proxy; 
	struct USceneComponent* ProxyMeshesCrafting; 
	struct UGFurComponent* GFur; 

	void GrantBestiaryProgress(struct FProcessingItem Item); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Trophy_Bench(int32_t EntryPoint); // (Final|UbergraphFunction)
};

