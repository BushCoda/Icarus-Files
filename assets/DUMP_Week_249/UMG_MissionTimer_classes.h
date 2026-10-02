// WidgetBlueprintGeneratedClass UMG_MissionTimer.UMG_MissionTimer_C
struct UUMG_MissionTimer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* WarningCriticalTime; 
	struct UWidgetAnimation* WarningLowTime; 
	struct UTextBlock* Days; 
	struct UTextBlock* Hours; 
	struct UBorder* MainBorder; 
	struct UBorder* MediumLowTime; 
	struct UTextBlock* Mins; 
	struct UTextBlock* Return; 
	struct UTextBlock* Seconds; 
	struct UTextBlock* TimeCritical; 
	struct UInvalidationBox* TimerTextInvalidationBox; 
	struct UTextBlock* TimeRunningLow; 
	struct UInvalidationBox* TitleInvalidationBox; 
	struct UInvalidationBox* WarningInvalidationBox; 
	struct UImage* WarningSymbols; 
	struct UImage* WarningSymbols2; 
	struct UTextBlock* WarningText; 
	struct FLinearColor Green; 
	struct FLinearColor Orange; 
	struct UCurveLinearColor* ColorCurve; 
	bool RecheckVisibility; 
	int32_t LastUpdateValue; 

	void SetTime(struct TArray<struct FText>& Time); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateVisibility(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_MissionTimer(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

