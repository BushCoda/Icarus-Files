// BlueprintGeneratedClass BP_WeatherController.BP_WeatherController_C
struct ABP_WeatherController_C : AWeatherController {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float Deployable_Max_Damage; 
	float Player_Max_Damage; 
	struct FMulticastInlineDelegate StormIncomingAlert; 
	struct FMulticastInlineDelegate StormStartedAlert; 
	struct FMulticastInlineDelegate AIPerceptionModifierUpdated; 
	struct TArray<struct FWeatherBiomeGroupsRowHandle> ProspectBiomeGroups; 
	int32_t NumDaysToForecast; 
	struct AWeatherForecastManager* WeatherForecastManager; 
	struct FRandomStream RandomStream; 
	bool WeatherDisabled; 
	bool WeatherDebug; 
	struct UWeatherManagerComponent* WeatherManagerRef; 

	void Ash(float Intensity, struct FBiomesRowHandle Biome); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Sand(float Intensity, struct FBiomesRowHandle Biome); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateResourceNetworks(struct FBiomesRowHandle Biome, int32_t BaseModifierEffectiveness, struct FModifierStatesRowHandle Modifier); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DamageToPlayerFocusedItem(struct FBiomesRowHandle Biome, int32_t Intensity, enum class EIcarusDamageType DamageType); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DamageTaggedPlayerItems(struct FBiomesRowHandle Biome, int32_t Intensity, struct FTagQueriesRowHandle TagQueryRow, enum class EIcarusDamageType DamageType, struct FInventoryIDEnum InventoryID); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ClogDeployableActors(struct FBiomesRowHandle Biome, int32_t Percent); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetInitialForecastRow(struct FProspectForecastRowHandle& Forecast); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnForecastRestored(); // (Public|BlueprintCallable|BlueprintEvent)
	void Update Forecast(struct FProspectForecastRowHandle ProspectForecast); // (Public|BlueprintCallable|BlueprintEvent)
	void GetProspectForecastRow(struct FProspectForecastRowHandle& Forecast); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetGameTimeSeconds(int32_t& TimeSeconds); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetupProspectWeatherData(int32_t GameStateSeed); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Flush Forecast Weather(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetProspectWeatherPool(struct TArray<struct FWeatherPoolEntry>& WeatherPools, struct FWeatherPoolsRowHandle& RowHandle); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ExtinguishFires(struct FBiomesRowHandle Biome, float Intensity); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DebugWeatherController(struct FBiomesRowHandle Biome, struct FString InStr, float Delta); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlayerModifiers(struct FBiomesRowHandle Biome, float Intensity, struct FGameplayTagQuery Query, struct FModifier Modifier); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DrawWeatherForecastDebug(); // (Public|BlueprintCallable|BlueprintEvent)
	void Generate Future Events(int32_t CurrentTime); // (Public|BlueprintCallable|BlueprintEvent)
	void GetEventDuration(struct FWeatherEventsRowHandle Event, int32_t& Duration); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OneTimeInit(int32_t GameSeed); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Snow(float Intensity, struct FBiomesRowHandle Biome); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Rain(struct FBiomesRowHandle Biome, int32_t Rainfall (Millilitre)); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Deployable Damage(struct FBiomesRowHandle Biome, float Intensity, struct FGameplayTagQuery Query); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Player Damage(struct FBiomesRowHandle Biome, float Intensity, struct FGameplayTagQuery Query); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void SetRain(float Severity, struct FBiomesRowHandle Biome); // (BlueprintCallable|BlueprintEvent)
	void ClearAllWeather(); // (BlueprintCallable|BlueprintEvent)
	void SetSnow(float Severity, struct FBiomesRowHandle Biome); // (BlueprintCallable|BlueprintEvent)
	void SetSand(float Severity, struct FBiomesRowHandle Biome); // (BlueprintCallable|BlueprintEvent)
	void ClearWeatherBiome(struct FBiomesEnum Biome); // (BlueprintCallable|BlueprintEvent)
	void OnSeedInitialised(int32_t Seed); // (BlueprintCallable|BlueprintEvent)
	void SetCloud(float Severity, struct FBiomesRowHandle Biome); // (BlueprintCallable|BlueprintEvent)
	void SetThunder(float Severity, struct FBiomesRowHandle Biome); // (BlueprintCallable|BlueprintEvent)
	void SetSnowStorm(float Severity, struct FBiomesRowHandle Biome); // (BlueprintCallable|BlueprintEvent)
	void ShowWeatherWarningMessage(struct FBiomesRowHandle Biome, struct FText Message); // (BlueprintCallable|BlueprintEvent)
	void HideWeatherWarningMessage(struct FBiomesRowHandle Biome); // (BlueprintCallable|BlueprintEvent)
	void SetBiomeWindVisuals(float WindSpeed, float WindStrength, float WindGust, struct FBiomesRowHandle BiomeRow); // (BlueprintCallable|BlueprintEvent)
	void SetBiomeWindForce(float WindDirectionStrength, struct FBiomesRowHandle BiomeRow); // (BlueprintCallable|BlueprintEvent)
	void SetBiomeWindDirection(struct FVector WindDirection, struct FBiomesRowHandle BiomeRow); // (BlueprintCallable|BlueprintEvent)
	void SetWeatherTemperatureModifier(int32_t TempModifier, struct FBiomesRowHandle BiomeRow); // (BlueprintCallable|BlueprintEvent)
	void SetAIPerceptionModifier(int32_t Modifier, struct FBiomesRowHandle BiomesRowHandle); // (BlueprintCallable|BlueprintEvent)
	void SetDebris(float Severity, struct FBiomesRowHandle BiomeRow); // (BlueprintCallable|BlueprintEvent)
	void PostProspectInfoFetched(); // (Event|Public|BlueprintEvent)
	void LowHertzTick(); // (Event|Public|BlueprintEvent)
	void NotifyStormWarning(int32_t TimeUntilStorm, struct FWeatherEventsRowHandle& StormRow, struct FBiomesEnum& Biome); // (Event|Protected|HasOutParms|BlueprintEvent)
	void SetAsh(float Severity, struct FBiomesRowHandle BiomeRow); // (BlueprintCallable|BlueprintEvent)
	void SetEmbers(float Severity, struct FBiomesRowHandle BiomeRow); // (BlueprintCallable|BlueprintEvent)
	void SetSmoke(float Severity, struct FBiomesRowHandle BiomeRow); // (BlueprintCallable|BlueprintEvent)
	void SetAcidRain(float Severity, struct FBiomesRowHandle BiomeRow); // (BlueprintCallable|BlueprintEvent)
	void SetHail(float Severity, struct FBiomesRowHandle BiomeRow); // (BlueprintCallable|BlueprintEvent)
	void SetFogDensity(struct FBiomesRowHandle BiomeRow, float Severity); // (BlueprintCallable|BlueprintEvent)
	void SetFogExtinction(struct FBiomesRowHandle BiomeRow, float Amount); // (BlueprintCallable|BlueprintEvent)
	void SetFogColor(struct FBiomesRowHandle Biome Row, struct FLinearColor Color, float ColorAmount); // (BlueprintCallable|BlueprintEvent)
	void SetWhiteoutAmount(struct FBiomesRowHandle BiomeRow, float Severity); // (BlueprintCallable|BlueprintEvent)
	void DisableWeather(bool DisableWeather); // (BlueprintCallable|BlueprintEvent)
	void SetRadiation(float Severity, struct FBiomesRowHandle BiomeRow); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void SetRadiationWind(struct FBiomesRowHandle BiomeRow, float Severity); // (BlueprintCallable|BlueprintEvent)
	void SetSpeckles(struct FBiomesRowHandle BiomeRow, float Amount); // (BlueprintCallable|BlueprintEvent)
	void SetLightningClouds(float Severity, struct FBiomesRowHandle BiomeRow); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_WeatherController(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void AIPerceptionModifierUpdated__DelegateSignature(int32_t NewValue, struct FBiomesRowHandle Biome); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void StormStartedAlert__DelegateSignature(struct FWeatherEventsRowHandle Event, struct FBiomesEnum Biome); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void StormIncomingAlert__DelegateSignature(int32_t TimeUntilStorm, struct FWeatherEventsRowHandle StormRow, struct FBiomesEnum Biome); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

