// BlueprintGeneratedClass BP_AtmosphereController.BP_AtmosphereController_C
struct ABP_AtmosphereController_C : AAtmosphereController {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UPostProcessComponent* PostProcess_GL; 
	struct UPostProcessComponent* PostProcess_CF; 
	struct UPostProcessComponent* PostProcess_Fire; 
	struct UPostProcessComponent* PostProcess_SandStorm; 
	struct UPostProcessComponent* PostProcess_Base; 
	struct UPostProcessComponent* PostProcess_WL; 
	struct UPostProcessComponent* PostProcess_AC; 
	struct UPostProcessComponent* PostProcess_DC; 
	struct UPostProcessComponent* PostProcess_LC; 
	struct USceneComponent* PostProcesss; 
	struct UStaticMeshComponent* Sphere; 
	struct UStaticMeshComponent* SunPos; 
	struct UStaticMeshComponent* SM_PlanetCard6; 
	struct UStaticMeshComponent* SM_PlanetCard5; 
	struct UStaticMeshComponent* SM_PlanetCard4; 
	struct UStaticMeshComponent* SM_PlanetCard3; 
	struct UStaticMeshComponent* SM_PlanetCard2; 
	struct UStaticMeshComponent* SM_PlanetCard1; 
	struct UStaticMeshComponent* SM_PlanetCard; 
	struct USceneComponent* SkyPlanets; 
	struct UBP_CaveLightController_C* BP_CaveLightController; 
	struct UVolumetricCloudComponent* VolumetricCloud; 
	struct USkyAtmosphereComponent* SkyAtmosphere; 
	struct UStaticMeshComponent* SkySphere; 
	struct UDirectionalLightComponent* MoonLight; 
	struct USceneComponent* MoonOffset; 
	struct USceneComponent* Moon; 
	struct UDirectionalLightComponent* SunLight; 
	struct UExponentialHeightFogComponent* ExponentialHeightFog; 
	struct USkyLightComponent* SkyLight; 
	struct UChildActorComponent* WindDirectionalSource; 
	struct USceneComponent* DefaultSceneRoot; 
	int32_t StartHour; 
	float StartMinute; 
	struct UCurveFloat* CurveWeatherWind; 
	bool Enabled; 
	float SnowcapHeight; 
	float SunRoll; 
	float RainAmountCF; 
	float StormAmountCF; 
	float RainAmountLC; 
	float StormAmountLC; 
	float RainAmountDC; 
	float StormAmountDC; 
	float RainAmountAC; 
	float StormAmountAC; 
	float RainAmountWL; 
	float StormAmountWL; 
	bool Debug_Wind; 
	enum class EBiomes CurrentBiome; 
	float TransitionValue; 
	bool SpineTransition; 
	struct UCurveFloat* CurveNightSky; 
	float FogOffset; 
	float SunDirection; 
	struct UCurveFloat* CurveSunIntensity; 
	struct UCurveFloat* CurveSkylightIntensity; 
	struct UCurveLinearColor* CurveSunColour; 
	bool AutoTransition; 
	struct UCurveFloat* TimeScaleCurve; 
	float MoonRoll; 
	float FogHeight; 
	struct UCurveFloat* CurveMoonIntensity; 
	float WeatherVal_Rain; 
	float WeatherVal_SandStorm; 
	float WeatherVal_Snow; 
	float WeatherVal_Cloudy; 
	float WeatherVal_Thunder; 
	struct UMaterialInstanceDynamic* DynamicCloudMaterial; 
	float WeatherVal_SnowStorm; 
	struct FBiomesEnum PlayerBiome; 
	struct FBiomesEnum PlayerNewBiome; 
	struct UTexture* CloudMAP; 
	float DropshipOverride; 
	float WeatherVal_WindSpeed; 
	float WeatherVal_WindStrength; 
	float WeatherVal_WindMaxGustAmount; 
	float WeatherVal_WindMinGustAmount; 
	struct UCurveFloat* CurveContactShadow; 
	float WeatherVal_Debris; 
	float OverrideWindSpeed; 
	float OverrideWindStrength; 
	bool UpdateWeather; 
	struct UCurveFloat* CloudCoverageFogCurve; 
	struct FMulticastInlineDelegate SunLightDirection; 
	struct FMulticastInlineDelegate SunLightColor; 
	float WeatherVal_FogDensity; 
	float WeatherVal_FogExtinction; 
	struct FLinearColor Color_2; 
	float Intensity_2; 
	struct FRotator SunDirection_2; 
	struct UCurveFloat* CaveLightCurve; 
	struct TArray<struct AWT_CaveVolume_C*> CaveVolumesInUse; 
	float CaveInfluence; 
	struct UCurveFloat* CurvePlanetSunDirection; 
	struct FRotator WindRotation; 
	bool useWeatherMan; 
	struct UCurveLinearColor* LocalFogTimeOfDay; 
	struct UCurveFloat* CurveShadowCascades; 
	float ImpassableSnowOffset; 
	float SunBrightness; 
	float MoonThreshold; 
	struct FLinearColor MoonLightColor; 
	bool Use Sun Atmosphere for moon; 
	bool UseLowShadowSettings; 
	bool OverrideLightSettings; 
	bool WeathermanActive; 
	float TimeTotalThisFrame; 
	float WeatherVal_Ash; 
	float WeatherVal_Embers; 
	float WeatherVal_Smoke; 
	float WeatherVal_AcidRain; 
	float WeatherVal_Hail; 
	float RainAmountGL; 
	float StormAmountGL; 
	struct FVector CurrentBloomSettings; 
	bool BloomActive; 
	struct FLinearColor FogColor; 
	float FogColorAmount; 
	float Whiteout Amount; 
	float WeatherVal_Radiation; 
	float WeatherVal_LightningCloud; 
	float WeatherVal_RadiationWind; 
	float WeatherVal_Speckles; 

	void UpdateCubemap(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AtmosphereSetProperties(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateBiomeMPCs(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void UpdatePostProcessing(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void UpdateSunCSMSettings(); // (Public|BlueprintCallable|BlueprintEvent)
	void ForceSetAtmosphere(struct FAtmospheresEnum Atmosphere); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAtmosphereInfluence(struct FAtmospheresEnum Atmosphere, float& Influence); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateCaveInfluence(float Influence); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheckShadowQualitySetting(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetFogTintPerBiome(struct FLinearColor& Out); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateBloomSettings(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FAtmospheresEnum GetAtmosphereType(struct FBiomesEnum Biome); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	float GetCurrentTimeRealTime(); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	float GetCurrentTimeNormalized(); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	float GetCurrentTimeTotal(); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void FogTimeOfDay(); // (Public|BlueprintCallable|BlueprintEvent)
	void RemoveCaveVolume(struct AWT_CaveVolume_C* Volume); // (Public|BlueprintCallable|BlueprintEvent)
	void AddCaveVolume(struct AWT_CaveVolume_C* Volume); // (Public|BlueprintCallable|BlueprintEvent)
	void WeatherVisualUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void LinearBiomeTransition(struct FBiomesEnum PlayerNewBiome); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TransitionWeather(struct FBiomesEnum FromBiome, struct FBiomesEnum ToBiome, float Amount); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Get Dist Fog Scale(struct FVector& Scale); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetCloudCoverage(float& Coverage, float& CoverageNoClamp); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateCloudCoverage(); // (Public|BlueprintCallable|BlueprintEvent)
	void MoonSetRotation(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateWeatherMPCs(); // (Public|BlueprintCallable|BlueprintEvent)
	void SkylightSetProperties(); // (Public|BlueprintCallable|BlueprintEvent)
	void FogSetProperties(); // (Public|BlueprintCallable|BlueprintEvent)
	void SunSetProperties(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SunSetRotation(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	float GetBiomeInfluence(struct FBiomesEnum Biome); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Transition Biome(struct FBiomesEnum FromBiome, struct FBiomesEnum ToBiome, float Amount); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ForceSetBiome(struct FBiomesEnum Biome); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Fog Track Player(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateWind(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetTerrainDetails(); // (Public|BlueprintCallable|BlueprintEvent)
	void EditorReset(); // (Public|BlueprintCallable|BlueprintEvent)
	void Update Atmosphere Settings(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetCurrentTimeOfDay(float& Total, float& Normalized, float& Realtime); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheckBiome(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void SlowTickUpdates(); // (BlueprintCallable|BlueprintEvent)
	void UltraSlowTickUpdates(); // (BlueprintCallable|BlueprintEvent)
	void FastTickUpdates(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_AtmosphereController(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void SunLightColor__DelegateSignature(struct FLinearColor Color, float Intensity, float CaveCover); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void SunLightDirection__DelegateSignature(struct FRotator SunDirection); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

