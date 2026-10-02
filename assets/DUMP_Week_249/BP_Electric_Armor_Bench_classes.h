// BlueprintGeneratedClass BP_Electric_Armor_Bench.BP_Electric_Armor_Bench_C
struct ABP_Electric_Armor_Bench_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent; 
	struct UStaticMeshComponent* Proxy_Head; 
	struct UStaticMeshComponent* Proxy_Chest; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Electric_Armor_Bench(int32_t EntryPoint); // (Final|UbergraphFunction)
};

