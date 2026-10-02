// WidgetBlueprintGeneratedClass UMG_RadiationDisplay.UMG_RadiationDisplay_C
struct UUMG_RadiationDisplay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* LowPulse; 
	struct UImage* 1; 
	struct UImage* 2; 
	struct UImage* 3; 
	struct UBorder* divider; 
	struct UBorder* divider_2; 
	struct UInvalidationBox* InvalidationBox_1; 
	struct UVerticalBox* MainDisplay; 
	struct UProgressBar* RadiationBar; 
	float CurrentProgress; 
	bool LowImage; 
	struct FProgressBarStyle NormalStyle; 
	bool UsePlayerShelter; 
	struct UCurveLinearColor* ColourCurve; 
	float Calculated; 

	void ResetExposure(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetProgress(float Percent); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_RadiationDisplay(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

