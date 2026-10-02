// BlueprintGeneratedClass BP_ConcreteFurnace_V2.BP_ConcreteFurnace_V2_C
struct ABP_ConcreteFurnace_V2_C : ABP_FireProcessorBase_C {
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight; 
	struct UPointLightComponent* PointLight_Chimney; 
	struct UStaticMeshComponent* SM_DEP_Furnace_Concrete_Proxy_Output_Ingot_4; 
	struct UStaticMeshComponent* SM_DEP_Furnace_Concrete_Proxy_Output_Ingot_3; 
	struct UStaticMeshComponent* SM_DEP_Furnace_Concrete_Proxy_Output_Ingot_2; 
	struct UStaticMeshComponent* SM_DEP_Furnace_Concrete_Proxy_Input_Ore_4; 
	struct UStaticMeshComponent* SM_DEP_Furnace_Concrete_Proxy_Input_Ore_3; 
	struct UStaticMeshComponent* SM_DEP_Furnace_Concrete_Proxy_Input_Ore_2; 
	struct UNiagaraComponent* Niagara; 
	struct UPointLightComponent* PointLight_Left; 
	struct UPointLightComponent* PointLight_Right; 
	struct USceneComponent* Scene_Lights; 

	void UpdateEffects(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
};

