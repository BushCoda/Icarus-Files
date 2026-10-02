// BlueprintGeneratedClass BP_Anvil_Bench_T3.BP_Anvil_Bench_T3_C
struct ABP_Anvil_Bench_T3_C : ABP_ToggleableProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_DEP_Bench_Anvil_T3_Proxy; 
	struct UStaticMeshComponent* Cylinder; 
	struct UNiagaraComponent* NS_Firepit_FX; 
	struct USceneComponent* Scene_Niagara; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct USceneComponent* Scene_Lights; 
	struct UBPC_Recipe_Proxy_C* BPC_Recipe_Proxy; 
	struct USceneComponent* ProxyMeshesCrafting; 

	void UpdateEffects(bool Active); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Anvil_Bench_T3(int32_t EntryPoint); // (Final|UbergraphFunction)
};

