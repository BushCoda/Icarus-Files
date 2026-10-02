// WidgetBlueprintGeneratedClass UMG_WeatherForecast.UMG_WeatherForecast_C
struct UUMG_WeatherForecast_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* ForecastChangeBar; 
	struct UWidgetAnimation* ForecastChangeFlash; 
	struct UInvalidationBox* InvalidationBox_1; 
	struct UImage* TodayMask; 
	struct USizeBox* WeatherForecastTimeLine; 
	struct UCanvasPanel* WeatherForecastTimelinePanelBox; 
	struct UCanvasPanel* WeatherForecastTimelinePanelIcon; 
	struct TMap<struct FWeatherForecastItem, struct UUMG_WeatherForecastIcon_C*> ItemIconMap; 
	int32_t TimelineStartSec; 
	int32_t TimelineEndSec; 
	int32_t NumDaysDisplayed; 
	int32_t TimelineDurationSec; 
	struct UWeatherForecastBarComponent* WeatherForecastBarRef; 
	struct ABP_WeatherController_C* WeatherControllerRef; 
	bool Initialized; 
	struct TMap<struct FWeatherForecastItem, struct UUMG_WeatherForecastBox_C*> ItemBoxMap; 
	float Elapsed; 

	void ProspectForecastUpdated(struct FProspectForecastRowHandle NewForecast); // (Public|BlueprintCallable|BlueprintEvent)
	void LowHzTick(float DeltaTime, bool& DoTick); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void IsReady(bool& Ready); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PositionAndSizeBox(int32_t StartTime, int32_t EndTime, struct UUMG_WeatherForecastBox_C* Box); // (Public|BlueprintCallable|BlueprintEvent)
	void RebindBoxes(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetWeatherForecastSafe(); // (Public|BlueprintCallable|BlueprintEvent)
	void PositionIcon(int32_t StartTime, int32_t EndTime, struct UUMG_WeatherForecastIcon_C* Icon); // (Public|BlueprintCallable|BlueprintEvent)
	void TickIconsAndBoxes(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RebindIcons(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RefreshTimeOfDay(); // (Public|BlueprintCallable|BlueprintEvent)
	void Destruct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnReBindIcons(); // (BlueprintCallable|BlueprintEvent)
	void OnProspectForecastUpdated(struct FProspectForecastRowHandle NewForecast); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_WeatherForecast(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

