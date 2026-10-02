// WidgetBlueprintGeneratedClass UMG_WeatherEventTimeline.UMG_WeatherEventTimeline_C
struct UUMG_WeatherEventTimeline_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* FadeIn; 
	struct UWidgetAnimation* Flashing; 
	struct UImage* BackgroundImage; 
	struct UImage* StormIcon; 
	struct UTextBlock* StormName; 
	struct USizeBox* Timeline; 
	struct UCanvasPanel* TimelinePanel; 
	struct UImage* WeatherTier; 
	float StormTotalLength; 
	float StormTimeRemaining; 
	int32_t CurrentActionIndex; 
	float CurrentActionTimeRemaining; 
	float TimelineLengthInPixels; 
	float TimelineLengthInTime; 
	struct FActiveWeatherInfo CurrentWeatherInfo; 
	struct FActiveWeatherInfo LastProcessedWeatherInfo; 
	struct TMap<struct UBP_WeatherAction_Base_C*, struct UUMG_WeatherEventTimelineIcon_C*> ActionToIconMap; 
	struct FText AlternatingStormNameText; 
	float TickAccumulation; 

	void InitializeStorm(int32_t Tier); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateStormIcon(int32_t Tier); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void WeatherActionToTimelineSpace(int32_t ActionIdex, float& TimelineLocation); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateActionIcons(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateStormData(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ShowStormNameText(float Show length); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_WeatherEventTimeline(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

