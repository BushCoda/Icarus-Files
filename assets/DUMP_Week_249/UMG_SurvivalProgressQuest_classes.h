// WidgetBlueprintGeneratedClass UMG_SurvivalProgressQuest.UMG_SurvivalProgressQuest_C
struct UUMG_SurvivalProgressQuest_C : UUserWidget {
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
	float CurrentPct; 

	void SetType(enum class ESecondaryItemTypes SurvivalType); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Update(float CurrentPct); // (BlueprintCallable|BlueprintEvent)
	void Initialise(enum class ESurvivalStatType Index); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_SurvivalProgressQuest(int32_t EntryPoint); // (Final|UbergraphFunction)
};

