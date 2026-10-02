// BlueprintGeneratedClass BP_Carpentry_Bench_T4.BP_Carpentry_Bench_T4_C
struct ABP_Carpentry_Bench_T4_C : ABP_ResourceNetworkProcessor_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_DEP_Carpentry_BenchT4_Proxy4; 
	struct UStaticMeshComponent* SM_DEP_Carpentry_BenchT4_Proxy3; 
	struct UStaticMeshComponent* SM_DEP_Carpentry_BenchT4_Proxy2; 
	struct UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent; 
	struct UStaticMeshComponent* SM_DEP_Carpentry_BenchT4_Proxy1; 
	struct UBPC_Recipe_Proxy_C* BPC_Recipe_Proxy; 
	struct USceneComponent* ProxyMeshesCrafting; 
	struct USceneComponent* ProxyMeshesInventory; 
	struct UPointLightComponent* PointLight; 

	void UpdateEffects(bool EnergyFlowChanged, bool ProcessorActiveChanged); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Carpentry_Bench_T4(int32_t EntryPoint); // (Final|UbergraphFunction)
};

