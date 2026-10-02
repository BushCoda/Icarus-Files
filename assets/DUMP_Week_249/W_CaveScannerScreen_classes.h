// WidgetBlueprintGeneratedClass W_CaveScannerScreen.W_CaveScannerScreen_C
struct UW_CaveScannerScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Scanning; 
	struct UImage* Grid; 
	struct UTextBlock* OreType; 
	struct UBorder* OreTypeBorder; 
	struct UImage* PointerImage; 
	struct UImage* ScanningLine; 
	struct UTextBlock* Signal; 
	struct UTextBlock* SignalText; 
	struct UW_HandheldBackground_C* W_HandheldBackground; 
	struct UBP_ActionableBehaviour_Scanner_C* Scanner; 
	float Closest Angle; 
	float TargetOffset; 
	float CurrentOffset; 
	bool HasSignal; 
	float SignalIntensity; 
	struct FSlateColor WarningRed; 
	struct FSlateColor Green; 

	void SetHasSignal(bool Signal); // (Public|BlueprintCallable|BlueprintEvent)
	struct FText GetSignalText(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetOreTypeText(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetSignalPercentageText(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Init(struct UBP_ActionableBehaviour_Scanner_C* Scanner); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_W_CaveScannerScreen(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

