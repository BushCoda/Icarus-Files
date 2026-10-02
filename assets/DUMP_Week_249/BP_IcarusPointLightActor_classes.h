// BlueprintGeneratedClass BP_IcarusPointLightActor.BP_IcarusPointLightActor_C
struct ABP_IcarusPointLightActor_C : AActor {
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct FColor LightColor; 
	float Intensity; 
	bool UseTemperature; 
	float Temperature; 
	bool CastShadows; 
	float AttenuationRadius; 

	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
};

