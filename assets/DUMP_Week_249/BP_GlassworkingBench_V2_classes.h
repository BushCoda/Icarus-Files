// BlueprintGeneratedClass BP_GlassworkingBench_V2.BP_GlassworkingBench_V2_C
struct ABP_GlassworkingBench_V2_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent; 
	struct UFMODAudioComponent* FMOD_Fire_Audio; 
	struct UPointLightComponent* PointLight_Bounce; 
	struct UPointLightComponent* PointLight_Stick; 
	struct UNiagaraComponent* Niagara; 
	struct UStaticMeshComponent* SM_DEP_Bench_GlassWorking_v2_Proxy_Output3; 
	struct UStaticMeshComponent* SM_DEP_Bench_GlassWorking_v2_Proxy_Output2; 
	struct UStaticMeshComponent* SM_DEP_Bench_GlassWorking_v2_Proxy_Output1; 
	struct UStaticMeshComponent* SM_DEP_Bench_GlassWorking_v2_Proxy_Input1; 
	struct UPointLightComponent* PointLight; 
	struct USceneComponent* Scene_Lights; 

	void UpdateWaterFlow(struct FProcessorRecipesRowHandle CurrentRecipe); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateEffects(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ProcessorStateUpdate(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnDeviceOnStateChanged(bool bIsOn); // (BlueprintCallable|BlueprintEvent)
	void OnProcessingItemUpdated(struct FProcessingItem Item); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_GlassworkingBench_V2(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

