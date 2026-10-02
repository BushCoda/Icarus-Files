// WidgetBlueprintGeneratedClass W_BeaconTool.W_BeaconTool_C
struct UW_BeaconTool_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* NoLink; 
	struct UWidgetAnimation* Scanning; 
	struct UBorder* Border_Status; 
	struct UTextBlock* DistanceText; 
	struct UImage* Grid; 
	struct UHorizontalBox* HorizontalBox_Distance; 
	struct UImage* PointerImage; 
	struct UImage* ScanningLine; 
	struct UTextBlock* Signal; 
	struct UTextBlock* Status; 
	struct UW_HandheldBackground_C* W_HandheldBackground; 
	float Closest Angle; 
	float TargetOffset; 
	float CurrentOffset; 
	bool HasSignal; 
	float DistanceToLinkedBeacon; 
	struct FSlateColor WarningRed; 
	struct FSlateColor Green; 
	struct AActor* LinkedBeaconActor; 
	struct ASkeletalItem* ItemOwner; 
	int32_t MaxDistance; 
	bool CurrentlyWithinDistance; 

	bool IsWithinDistance(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void SetHasSignal(bool Signal); // (Public|BlueprintCallable|BlueprintEvent)
	struct FText GetSignalText(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetSignalPercentageText(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SetLinkedBeacon(struct AActor* LinkedBeaconActor); // (BlueprintCallable|BlueprintEvent)
	void Initialise(struct ASkeletalItem* Item); // (BlueprintCallable|BlueprintEvent)
	void SetWithinDistance(bool CurrentlyWithinDistance); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_W_BeaconTool(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

