// WidgetBlueprintGeneratedClass WeatherRow.WeatherRow_C
struct UWeatherRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* TextBlock_57; 
	struct FText WeatherEventName; 
	struct FWeatherEventsRowHandle WeatherEvent; 

	void AddWeather(struct FName AddWeatherEvent); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_WeatherRow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

