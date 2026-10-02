// BlueprintGeneratedClass BP_Rustic_Decoration_Bench.BP_Rustic_Decoration_Bench_C
struct ABP_Rustic_Decoration_Bench_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* ProxyMeshesInventory; 
	struct UBPC_Recipe_Proxy_C* BPC_Recipe_Proxy; 
	struct USceneComponent* ProxyMeshesCrafting; 

	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Rustic_Decoration_Bench(int32_t EntryPoint); // (Final|UbergraphFunction)
};

