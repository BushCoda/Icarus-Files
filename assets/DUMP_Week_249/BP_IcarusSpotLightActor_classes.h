// BlueprintGeneratedClass BP_IcarusSpotLightActor.BP_IcarusSpotLightActor_C
struct ABP_IcarusSpotLightActor_C : AActor {
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight; 
	struct FColor LightColor; 
	float Intensity; 
	bool UseTemperature; 
	float Temperature; 
	bool CastShadows; 
	float AttenuationRadius; 
	float InnerConeAngle; 
	float OuterConeAngle; 

	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
};

