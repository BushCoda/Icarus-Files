// WidgetBlueprintGeneratedClass UMG_ExposureDisplay.UMG_ExposureDisplay_C
struct UUMG_ExposureDisplay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* LowPulse; 
	struct UBorder* divider; 
	struct UBorder* divider_2; 
	struct UProgressBar* ExposurePercentageBar; 
	struct UVerticalBox* ExposureVerticalBox; 
	struct UInvalidationBox* InvalidationBox_1; 
	struct UUMG_ShelterDisplay_C* UMG_ShelterDisplay; 
	float CurrentProgress; 
	bool LowImage; 
	struct FProgressBarStyle NormalStyle; 
	bool UsePlayerShelter; 
	struct UCurveLinearColor* ColourCurve; 

	void ResetExposure(); // (Public|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SetProgress(float Percent); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ExposureDisplay(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

