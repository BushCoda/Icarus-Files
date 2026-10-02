// WidgetBlueprintGeneratedClass W_Recovery_Beacon_Tracker.W_Recovery_Beacon_Tracker_C
struct UW_Recovery_Beacon_Tracker_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Scanning; 
	struct UTextBlock* BeaconID; 
	struct UImage* BeaconImage; 
	struct UBorder* Border; 
	struct UImage* Grid; 
	struct UImage* PointerImage; 
	struct UImage* ScanningLine; 
	struct UTextBlock* Signal; 
	struct UTextBlock* SignalText; 
	struct UW_HandheldBackground_C* W_HandheldBackground; 
	struct UBP_ActionableBehaviour_Recovery_Beacon_Tracker_C* Scanner; 
	float Closest Angle; 
	float TargetOffset; 
	float CurrentOffset; 
	bool HasSignal; 
	float SignalIntensity; 
	struct FSlateColor WarningRed; 
	struct FSlateColor Green; 
	float ARROW_INTERP_SPEED; 

	void UpdateBeaconStatus(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetHasSignal(bool Signal); // (Public|BlueprintCallable|BlueprintEvent)
	struct FText GetSignalText(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetSignalPercentageText(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Init(struct UBP_ActionableBehaviour_Recovery_Beacon_Tracker_C* Scanner); // (BlueprintCallable|BlueprintEvent)
	void TrackedUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_W_Recovery_Beacon_Tracker(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

