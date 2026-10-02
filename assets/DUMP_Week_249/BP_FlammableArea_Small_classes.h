// BlueprintGeneratedClass BP_FlammableArea_Small.BP_FlammableArea_Small_C
struct ABP_FlammableArea_Small_C : ABP_FlammableArea_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* FMOD Fire Loop; 
	struct UPointLightComponent* PointLight_Bloom; 
	struct USceneComponent* Scene_Lights; 
	struct UNiagaraComponent* NS_Potbelly_Fire; 

	void CleanupVFX(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_FlammableArea_Small(int32_t EntryPoint); // (Final|UbergraphFunction)
};

