// BlueprintGeneratedClass BP_Stone_Fireplace.BP_Stone_Fireplace_C
struct ABP_Stone_Fireplace_C : ABP_Fireplace_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Bounce; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Fill; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight; 
	struct UNiagaraComponent* NS_Fireplace_FX; 
	struct UStaticMeshComponent* SM_DEP_Fireplace_WoodLogs; 
	struct UStaticMeshComponent* SM_DEP_Fireplace_Interior_Filler; 

	void UpdateEffects(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Stone_Fireplace(int32_t EntryPoint); // (Final|UbergraphFunction)
};

