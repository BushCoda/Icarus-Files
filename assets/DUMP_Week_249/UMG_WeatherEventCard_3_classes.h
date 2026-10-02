// WidgetBlueprintGeneratedClass UMG_WeatherEventCard_3.UMG_WeatherEventCard_2_C
struct UUMG_WeatherEventCard_2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* CardReveal; 
	struct UTextBlock* EventCard; 
	struct UImage* ImageBack; 
	struct UTextBlock* StormName; 
	struct UTextBlock* WeatherDescription; 
	struct UImage* WeatherEventImage; 
	struct UTextBlock* WeatherEventText; 
	struct UImage* WeatherFrame; 
	struct FWeatherEventsRowHandle CurrentEvent; 

	void UpdateWeatherEvent(struct FWeatherEventsRowHandle NewEvent); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnAnimationStarted(struct UWidgetAnimation* Animation); // (BlueprintCosmetic|Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_UMG_WeatherEventCard_3(int32_t EntryPoint); // (Final|UbergraphFunction)
};

