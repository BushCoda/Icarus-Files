// WidgetBlueprintGeneratedClass W_Radiation_Tracker.W_Radiation_Tracker_C
struct UW_Radiation_Tracker_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Scanning; 
	struct UImage* Grid; 
	struct UImage* PointerImage; 
	struct UImage* ScanningLine; 
	struct UTextBlock* Signal; 
	struct UTextBlock* SignalText; 
	struct UW_HandheldBackground_C* W_HandheldBackground; 
	struct UBP_ActionableBehaviour_RadiationTracker_C* Tracker; 
	float Closest Angle; 
	float TargetOffset; 
	float CurrentOffset; 
	bool HasSignal; 
	float SignalIntensity; 
	struct FSlateColor WarningRed; 
	struct FSlateColor Green; 
	float ARROW_INTERP_SPEED; 

	void SetHasSignal(bool Signal); // (Public|BlueprintCallable|BlueprintEvent)
	struct FText GetSignalText(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetSignalPercentageText(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Init(struct UBP_ActionableBehaviour_RadiationTracker_C* Tracker); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_W_Radiation_Tracker(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

