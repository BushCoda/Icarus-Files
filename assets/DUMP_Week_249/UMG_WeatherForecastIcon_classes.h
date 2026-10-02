// WidgetBlueprintGeneratedClass UMG_WeatherForecastIcon.UMG_WeatherForecastIcon_C
struct UUMG_WeatherForecastIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* ForecastIcon; 
	struct UUMG_WeatherForecast_C* Timeline; 
	int32_t WeatherTier; 
	struct UObject* TempImage; 

	void Initialize(int32_t Tier); // (Public|BlueprintCallable|BlueprintEvent)
	void OnLoaded_CB8AC3624660E4D222EE8F8FA46D155E(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void SetupIcon(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_WeatherForecastIcon(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

