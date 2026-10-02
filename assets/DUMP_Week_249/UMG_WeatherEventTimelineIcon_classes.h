// WidgetBlueprintGeneratedClass UMG_WeatherEventTimelineIcon.UMG_WeatherEventTimelineIcon_C
struct UUMG_WeatherEventTimelineIcon_C : UUserWidget {
	struct UImage* WeatherActionImage; 
	struct UImage* WeatherTailBar; 
	struct UUMG_WeatherEventTimeline_C* Timeline; 
	struct FWeatherActionsRowHandle WeatherActionRowHandle; 

	void SetupIcon(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Initialise(struct FWeatherActionsRowHandle WeatherAction, float LifeTime); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
};

