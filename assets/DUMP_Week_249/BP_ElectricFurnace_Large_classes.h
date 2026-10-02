// BlueprintGeneratedClass BP_ElectricFurnace_Large.BP_ElectricFurnace_Large_C
struct ABP_ElectricFurnace_Large_C : ABP_ResourceNetworkProcessor_C {
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UStaticMeshComponent* SM_DEP_Furnace_Electric_Proxy_Input_Ore_4; 
	struct UStaticMeshComponent* SM_DEP_Furnace_Electric_Proxy_Input_Ore_3; 
	struct UStaticMeshComponent* SM_DEP_Furnace_Electric_Proxy_Input_Ore_2; 
	struct UStaticMeshComponent* SM_DEP_Furnace_Electric_Proxy_Output_Ingot_4; 
	struct UStaticMeshComponent* SM_DEP_Furnace_Electric_Proxy_Output_Ingot_3; 
	struct UStaticMeshComponent* SM_DEP_Furnace_Electric_Proxy_Output_Ingot_2; 
	struct UStaticMeshComponent* SM_DEP_Furnace_Electric_Proxy_Output_Glass_4; 
	struct UStaticMeshComponent* SM_DEP_Furnace_Electric_Proxy_Output_Glass_3; 
	struct UStaticMeshComponent* SM_DEP_Furnace_Electric_Proxy_Output_Glass_2; 
	struct URectLightComponent* RectLight1; 
	struct USpotLightComponent* SpotLight; 
	struct URectLightComponent* RectLight; 
	struct USceneComponent* Lights; 
	struct UFMODAudioComponent* FMODAudio; 

	void UpdateEffects(bool EnergyFlowChanged, bool ProcessorActiveChanged); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
};

