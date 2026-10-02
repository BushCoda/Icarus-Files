// WidgetBlueprintGeneratedClass UMG_WeatherForecastBox.UMG_WeatherForecastBox_C
struct UUMG_WeatherForecastBox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* ForecastBox; 
	struct UUMG_WeatherForecast_C* Timeline; 
	int32_t WeatherTier; 
	struct UObject* TempImage; 

	void Initialize(int32_t Tier); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupBoxColor(); // (BlueprintCallable|BlueprintEvent)
	void SetBoxWidth(int32_t NewWidth); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_WeatherForecastBox(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

