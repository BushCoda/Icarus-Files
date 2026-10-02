// BlueprintGeneratedClass BP_CharacterAreaLight.BP_CharacterAreaLight_C
struct ABP_CharacterAreaLight_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UArrowComponent* Arrow; 
	struct USceneComponent* DefaultSceneRoot; 
	struct TArray<struct USpotLightComponent*> LightList; 
	float Intensity; 
	struct FLinearColor Color; 
	float FocalAngleOuter; 
	float FocalAngleInner; 
	float AttenuationDistance; 
	float LightWidth; 
	float LightLength; 
	bool CastShadows; 
	int32_t LightSamplesSquared; 
	float SourceRadiusMult; 
	float CenterOfInterestLength; 
	bool Enabled; 
	struct FLightingChannels Channels; 
	float SoftRadius; 
	float ShadowBias; 

	void LightArraySetup(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateLightValues(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_CharacterAreaLight(int32_t EntryPoint); // (Final|UbergraphFunction)
};

