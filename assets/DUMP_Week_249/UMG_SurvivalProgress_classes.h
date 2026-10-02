// WidgetBlueprintGeneratedClass UMG_SurvivalProgress.UMG_SurvivalProgress_C
struct UUMG_SurvivalProgress_C : USurvivalProgressBar {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* LowPulse; 
	struct UBorder* BackgroundBorder; 
	struct UImage* divider; 
	struct UProgressBar* Level; 
	struct UImage* SurvivalIcon; 
	float CurrentProgress; 
	struct FProgressBarStyle NormalStyle; 
	struct FProgressBarStyle OrangeStyle; 
	struct FProgressBarStyle WarningStyle; 
	bool Green; 
	bool Orange; 
	bool Red; 
	float GoodThreshold; 
	float BadThreshold; 
	struct UCurveLinearColor* SurvivalColourCurve; 
	struct UCurveLinearColor* SurvivalIconColourCurve; 

	void SetType(enum class ESecondaryItemTypes SurvivalType); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitStatIcon(); // (Event|Protected|BlueprintEvent)
	void UpdateDisplay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_UMG_SurvivalProgress(int32_t EntryPoint); // (Final|UbergraphFunction)
};

