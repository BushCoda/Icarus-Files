// BlueprintGeneratedClass BP_CraftingBench.BP_CraftingBench_C
struct ABP_CraftingBench_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBPC_Recipe_Proxy_C* BPC_Recipe_Proxy; 
	struct USceneComponent* ProxyMeshesCrafting; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_CraftingBench(int32_t EntryPoint); // (Final|UbergraphFunction)
};

