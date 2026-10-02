// BlueprintGeneratedClass BP_TreeHUD.BP_TreeHUD_C
struct ABP_TreeHUD_C : AIcarusHUD {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* DefaultSceneRoot; 
	struct ABP_ActorPreview_C* PlayerPreview; 
	bool ShouldDrawWeather; 
	struct ABP_TooltipProjectionActor_C* ToolTipActor; 
	struct ABP_CardPreview_C* CardPreview; 
	struct TMap<struct FWeatherBiomeGroupsEnum, struct FWeatherBiomeGroupForecast> Biome Group Forecast; 

	void ColorFromTier(int32_t Tier, struct FLinearColor& TierColor); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void DrawWeather(int32_t SizeX, int32_t SizeY); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetEventEndTime(struct FWeatherEventsRowHandle Event, int32_t StartTime, int32_t& EndTime); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveDrawHUD(int32_t SizeX, int32_t SizeY); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void SetBiomeWeatherData(struct TMap<struct FWeatherBiomeGroupsEnum, struct FWeatherBiomeGroupForecast>& BiomeGroupForecast); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ToggleDrawWeather(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_TreeHUD(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

