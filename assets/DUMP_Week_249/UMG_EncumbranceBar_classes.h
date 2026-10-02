// WidgetBlueprintGeneratedClass UMG_EncumbranceBar.UMG_EncumbranceBar_C
struct UUMG_EncumbranceBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* BackpackFadeOut; 
	struct UWidgetAnimation* BackpackFullPulse; 
	struct UWidgetAnimation* OverencumberedPulse2; 
	struct UWidgetAnimation* FadeToOverencumbered; 
	struct UWidgetAnimation* WeightFadeOut; 
	struct UWidgetAnimation* OverencumberedPulse; 
	struct UProgressBar* EncumbranceBar; 
	struct URetainerBox* EncumbranceBox; 
	struct UImage* EncumbranceFrame; 
	struct UInvalidationBox* InvalidationBox; 
	struct UInvalidationBox* InvalidationBox_1; 
	struct UInvalidationBox* InvalidationBox_2; 
	struct UOverlay* Overlay_1; 
	struct UProgressBar* SlotCountBar; 
	struct UImage* SlotsIcon; 
	struct UTextBlock* SlotsText; 
	struct UTextBlock* WarningText; 
	struct UTextBlock* WarningText_Slots; 
	struct UTextBlock* WeightText; 
	bool WeightWarning; 
	bool OverEncumbered; 
	bool CachedCurrentWeight; 
	float PlayerWeight; 
	struct FProgressBarStyle OverencumberedStyle; 
	struct FProgressBarStyle NormalStyle_NearFull; 
	struct FProgressBarStyle NormalStyle; 
	bool WarningVisible; 
	float PlayerWeightLastReduced; 
	struct FSlateColor Red; 
	struct FSlateColor Orange; 
	struct FSlateColor Green; 
	float CurrentEncumbrance; 
	bool Initialised; 
	bool NeedsUpdate; 
	int32_t SlotMax; 
	int32_t SlotCurrent; 
	int32_t SlotPrevious; 

	void UpdateEncumberanceColors(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetSlotPercent(float& SlotPercent); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateSlots(bool UpdateStep); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OverEncumbrance(); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowEncumbrance(); // (Public|BlueprintCallable|BlueprintEvent)
	float GetEncumbrance(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PlayerWeightUpdated_Event_1(int32_t CurrentWeight); // (BlueprintCallable|BlueprintEvent)
	void GetEncumeranceAmount(); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnStatsUpdated(); // (BlueprintCallable|BlueprintEvent)
	void DoUpdate(); // (BlueprintCallable|BlueprintEvent)
	void PeriodicSlotUpdate(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_EncumbranceBar(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

