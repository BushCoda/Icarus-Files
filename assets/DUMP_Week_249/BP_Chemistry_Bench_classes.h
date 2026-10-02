// BlueprintGeneratedClass BP_Chemistry_Bench.BP_Chemistry_Bench_C
struct ABP_Chemistry_Bench_C : ABP_ResourceNetworkProcessor_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UDecalComponent* Decal1; 
	struct UDecalComponent* Decal; 
	struct UNiagaraComponent* NS_ChemistryBench_Bubbling; 
	struct UNiagaraComponent* NS_ChemistryBench_Smoke; 
	struct UPointLightComponent* PointLight; 
	struct UStaticMeshComponent* SM_ORB_LightBulb; 
	struct UStaticMeshComponent* SM_ORB_LightSocket_SM_ORB_LightSocket_Cage; 
	struct UNiagaraComponent* NS_ChemistBench_Flame; 
	struct UMaterialInstanceDynamic* LampEmissive; 
	bool HasSupply; 

	void OnRep_HasSupply(); // (BlueprintCallable|BlueprintEvent)
	void UpdateEffects(bool EnergyFlowChanged, bool ProcessorActiveChanged); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void FXPowered(); // (BlueprintCallable|BlueprintEvent)
	void FXNoPower(); // (BlueprintCallable|BlueprintEvent)
	void GetNetworkSupply(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Chemistry_Bench(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

