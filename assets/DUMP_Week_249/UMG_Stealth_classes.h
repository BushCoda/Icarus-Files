// WidgetBlueprintGeneratedClass UMG_Stealth.UMG_Stealth_C
struct UUMG_Stealth_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* HearingLevels; 
	struct UWidgetAnimation* EyeGlowing; 
	struct UWidgetAnimation* FadeIn; 
	struct UWidgetAnimation* EyeToHidden; 
	struct UImage* Eye; 
	struct UImage* EyeGlow; 
	struct UImage* Hearing1; 
	struct UImage* Hearing2; 
	struct UImage* Hearing3; 
	struct UImage* Hidden; 
	struct UInvalidationBox* InvalidationBox_1; 
	int32_t DetectionValue; 
	float LerpedDetectionPercentage; 
	bool WantsVisible; 

	void UpdateDetectionValue(int32_t NewDetectionValue); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateVisibility(bool IsVisible); // (BlueprintCallable|BlueprintEvent)
	void OnFadeAnimFinished(); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_Stealth(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

