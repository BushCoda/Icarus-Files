// WidgetBlueprintGeneratedClass ProspectForecastRow.ProspectForecastRow_C
struct UProspectForecastRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* TextBlock_57; 
	struct FText ProspectForecastName; 
	struct FProspectForecastEnum ProspectForecast; 

	void SetProspectForecast(struct FProspectForecastEnum NewProspectForecast); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_ProspectForecastRow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

