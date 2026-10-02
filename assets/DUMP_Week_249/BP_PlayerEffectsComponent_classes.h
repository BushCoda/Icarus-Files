// BlueprintGeneratedClass BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C
struct UBP_PlayerEffectsComponent_C : UPlayerEffectsComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_AtmosphereController_C* AtmosphereController; 
	struct ABP_FX_DistantFog_C* FxDistantFog; 
	struct UNiagaraComponent* NFX_MotesCF; 
	struct UNiagaraComponent* NFX_MotesGL; 
	struct UNiagaraComponent* NFX_StormCF; 
	struct UNiagaraComponent* NFX_StormDC; 
	struct UNiagaraComponent* NFX_StormAC; 
	struct UPostProcessComponent* PP_Lightning; 
	struct UPostProcessComponent* PP_RainDroplets; 
	struct UPostProcessComponent* PP_Radiation; 
	struct UMaterialInstanceDynamic* PP_Mat_DebrisCF; 
	struct UMaterialInstanceDynamic* PP_Mat_DebrisAC; 
	struct TArray<struct UStaticMesh*> FxLightningMeshes; 
	struct ABP_FX_ThunderStrike_C* FxStrikeActor; 
	float FxStrikeIntensity; 
	struct ABP_IcarusPlayerCharacterSurvival_C* LocalPlayer; 
	bool InWater; 
	float NextWaterWake; 
	struct UNiagaraComponent* NFX_StormLC; 
	struct UNiagaraComponent* NFX_StormSW; 
	struct UNiagaraComponent* NFX_StormGL; 
	struct UNiagaraComponent* NFX_Rain; 
	struct UNiagaraComponent* NFX_Snow; 
	struct ABP_Fx_StormWall_C* FxActorStormWall; 
	bool LocalController; 
	struct ABP_FX_ShelterCapture_C* FxShelterCaptureActor; 
	float FireIntensity; 
	float FireIntensityLerpSpeed; 
	float FireIntensityMaxDistance; 
	float DesiredFireIntensity; 
	struct ABP_FX_LocalFogVolume_C* FxLocalFogVolume; 
	struct UCurveFloat* CurveLocFogExtinction; 
	struct UCurveLinearColor* CurveLocFogColour; 
	bool Initialised; 
	struct UMaterialInstanceDynamic* PP_Mat_DebrisLC; 
	struct UMaterialInstanceDynamic* PP_Mat_DebrisSW; 
	struct UNiagaraComponent* NFX_Ashes; 
	struct UNiagaraComponent* NFX_Embers; 
	struct UNiagaraComponent* NFX_Hail; 
	struct UNiagaraComponent* NFX_Acid; 
	struct UNiagaraComponent* NFX_Smoke; 
	struct UMaterialInstanceDynamic* PP_Mat_DebrisGL; 
	enum class EPhysicalSurface WaterSurfaceType; 
	struct UNiagaraComponent* NFX_Whiteout; 
	struct UMaterialInstanceDynamic* PP_Mat_Radiation; 
	struct UNiagaraComponent* NFX_RadiationLocal; 
	float RainDropInterp; 
	bool DeactivateStormWall; 
	struct UNiagaraComponent* NFX_RadiationWeather; 
	float DES_LastCheck; 
	bool LowEffectsQuality; 
	float StormWallMaxDist; 
	float StormWallMinDist; 
	struct UNiagaraComponent* NFX_LightningCloud; 
	struct UNiagaraComponent* NFX_RadiationWind; 
	struct UNiagaraComponent* NFX_Speckles; 

	float GetDesiredStormWallDist(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PeriodicSettingsCheck(); // (Public|BlueprintCallable|BlueprintEvent)
	void TickRadiationNFX(float Event Name, struct UNiagaraComponent* NFX ); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetOwnerOverride(struct USceneComponent* OwnerOverride); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void GetEffectOwner(struct USceneComponent*& OwnerComponent); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetEffectTargetLocation(struct FVector& TargetLocation); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void UpdateRainDropsPP(float WeatherVal); // (Public|BlueprintCallable|BlueprintEvent)
	float GetPlayerVelocity(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void WeatherCaptureGrid(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ToggleAllStormNFX(bool Activate); // (Public|BlueprintCallable|BlueprintEvent)
	void DisablePPDebrisEffects(); // (Public|BlueprintCallable|BlueprintEvent)
	void TickWeatherEvent(float Event Name, struct UNiagaraComponent* NFX ); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Calculate Desired Fire Intensity(float DeltaSeconds); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Is Sheltered(bool& Sheltered); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CreateCosmeticLightningStrike(struct FVector StrikeLocation); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FVector DES_TraceAroundPlayer(float FOV, float RangeMin, float RangeMax); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void TickDynamicEmitterSystem(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TickEmbers(); // (BlueprintCallable|BlueprintEvent)
	void TickAshes(); // (BlueprintCallable|BlueprintEvent)
	void TickHail(); // (BlueprintCallable|BlueprintEvent)
	void TickSmoke(); // (BlueprintCallable|BlueprintEvent)
	void TickMiscFx(); // (BlueprintCallable|BlueprintEvent)
	void TickLocalFogVolume(); // (BlueprintCallable|BlueprintEvent)
	void TickWaterInteraction(); // (BlueprintCallable|BlueprintEvent)
	void TickFire(); // (BlueprintCallable|BlueprintEvent)
	void TickShelterCapture(); // (BlueprintCallable|BlueprintEvent)
	void TickStormWall(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void TickStorms(); // (BlueprintCallable|BlueprintEvent)
	void TickLightning(); // (BlueprintCallable|BlueprintEvent)
	void TickWhiteout(); // (BlueprintCallable|BlueprintEvent)
	void TickRadiation(); // (BlueprintCallable|BlueprintEvent)
	void TickLightningClouds(); // (BlueprintCallable|BlueprintEvent)
	void TickSnow(); // (BlueprintCallable|BlueprintEvent)
	void TickRadiationWind(); // (BlueprintCallable|BlueprintEvent)
	void TickSpeckles(); // (BlueprintCallable|BlueprintEvent)
	void InitShelterCapture(); // (BlueprintCallable|BlueprintEvent)
	void InitPostProcess(); // (BlueprintCallable|BlueprintEvent)
	void InitRain(); // (BlueprintCallable|BlueprintEvent)
	void InitSnow(); // (BlueprintCallable|BlueprintEvent)
	void InitDistantFog(); // (BlueprintCallable|BlueprintEvent)
	void TickRain(); // (BlueprintCallable|BlueprintEvent)
	void InitStorms(); // (BlueprintCallable|BlueprintEvent)
	void TickAcid(); // (BlueprintCallable|BlueprintEvent)
	void InitMiscFx(); // (BlueprintCallable|BlueprintEvent)
	void InitLocalFogVolume(); // (BlueprintCallable|BlueprintEvent)
	void Initialise(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void InitTerrainDeformation(); // (BlueprintCallable|BlueprintEvent)
	void InitAshes(); // (BlueprintCallable|BlueprintEvent)
	void InitEmber(); // (BlueprintCallable|BlueprintEvent)
	void InitHail(); // (BlueprintCallable|BlueprintEvent)
	void InitAcid(); // (BlueprintCallable|BlueprintEvent)
	void InitSmoke(); // (BlueprintCallable|BlueprintEvent)
	void InitWhiteout(); // (BlueprintCallable|BlueprintEvent)
	void InitRadiation(); // (BlueprintCallable|BlueprintEvent)
	void InitSlowTick(); // (BlueprintCallable|BlueprintEvent)
	void SlowTick(); // (BlueprintCallable|BlueprintEvent)
	void InitLightningClouds(); // (BlueprintCallable|BlueprintEvent)
	void InitRadiationWind(); // (BlueprintCallable|BlueprintEvent)
	void InitSpeckles(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_PlayerEffectsComponent(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

