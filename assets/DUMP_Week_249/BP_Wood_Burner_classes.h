// BlueprintGeneratedClass BP_Wood_Burner.BP_Wood_Burner_C
struct ABP_Wood_Burner_C : ABP_FireProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct USceneComponent* Scene_Lights; 
	struct UNiagaraComponent* NS_WoodBurner_Fire; 
	struct UStaticMeshComponent* SM_DEP_Fireplace_WoodLogs; 
	struct UNiagaraComponent* NS_Potbelly_Smoke; 
	struct USceneComponent* Scene_Niagara; 

	void UpdateEffects(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void Rain(int32_t Millilitres); // (Public|BlueprintCallable|BlueprintEvent)
	void Snow(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void Sand(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void Ash(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Wood_Burner(int32_t EntryPoint); // (Final|UbergraphFunction)
};

