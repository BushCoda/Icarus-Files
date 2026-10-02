// BlueprintGeneratedClass BP_Spotlight_Tripod.BP_Spotlight_Tripod_C
struct ABP_Spotlight_Tripod_C : ABP_Light_Electric_Base_C {
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Fill; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight; 
	struct UFMODAudioComponent* FMODAudio; 
	struct UInventory* FuelInventory; 
	struct UFMODEvent* Extinguish; 

	void Toggle(); // (Public|BlueprintCallable|BlueprintEvent)
};

