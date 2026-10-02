// BlueprintGeneratedClass BP_Gas_Fireplace.BP_Gas_Fireplace_C
struct ABP_Gas_Fireplace_C : ABP_Fireplace_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight; 
	struct UNiagaraComponent* NS_HeatHaze_Soft; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Display; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_R; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_L; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UNiagaraComponent* NS_GasFireplace_Flames; 
	struct UStaticMeshComponent* SM_DEP_Fireplace_Gas; 

	void UpdateEffects(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void OnBecomeInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void OnNoLongerInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Gas_Fireplace(int32_t EntryPoint); // (Final|UbergraphFunction)
};

