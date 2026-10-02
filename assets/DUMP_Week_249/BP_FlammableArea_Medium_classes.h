// BlueprintGeneratedClass BP_FlammableArea_Medium.BP_FlammableArea_Medium_C
struct ABP_FlammableArea_Medium_C : ABP_FlammableArea_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* FMOD Fire Loop; 
	struct UPointLightComponent* PointLight_Bloom; 
	struct USceneComponent* Scene_Lights; 
	struct UNiagaraComponent* NS_Fire_FX; 

	void CleanupVFX(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_FlammableArea_Medium(int32_t EntryPoint); // (Final|UbergraphFunction)
};

