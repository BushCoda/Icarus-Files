// BlueprintGeneratedClass CT_Cave_Light.CT_Cave_Light_C
struct ACT_Cave_Light_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* DefaultSceneRoot; 
	enum class ECaveLightType LightType; 
	struct FColor LightColor; 
	float Intensity; 
	float VolumetricScatteringIntensity; 
	bool UseTemperature; 
	float Temperature; 
	float MaxDrawDistance; 
	bool CastShadows; 
	bool CastVolumetricShadow; 
	float AttenuationRadius; 
	float InnerConeAngle; 
	float OuterConeAngle; 
	float SourceRadius; 
	float SourceWidth; 
	float SourceHeight; 
	float BarnDoorAngle; 
	bool TrackSun; 
	float SunlightPercentage; 
	float LightFalloffExponent; 

	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void CheckTime(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_CT_Cave_Light(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

