// BlueprintGeneratedClass BP_Anvil_Bench_T4.BP_Anvil_Bench_T4_C
struct ABP_Anvil_Bench_T4_C : ABP_ResourceNetworkProcessor_C {
	struct UStaticMeshComponent* SM_DEP_Bench_Anvil_T4_Proxy_Input1; 
	struct UStaticMeshComponent* SM_DEP_Bench_Anvil_T4_Proxy_Input3; 
	struct UStaticMeshComponent* SM_DEP_Bench_Anvil_T4_Proxy_Input2; 
	struct UStaticMeshComponent* SM_DEP_Bench_Anvil_T4_Proxy_Output3; 
	struct UStaticMeshComponent* SM_DEP_Bench_Anvil_T4_Proxy_Output2; 
	struct UStaticMeshComponent* SM_DEP_Bench_Anvil_T4_Proxy_Output1; 
	struct USceneComponent* ProxyMeshesCrafting; 
	struct USceneComponent* ProxyMeshesInventory; 
	struct UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UFMODAudioComponent* PoweredAudio; 

	void UpdateEffects(bool EnergyFlowChanged, bool ProcessorActiveChanged); // (Public|BlueprintCallable|BlueprintEvent)
};

