// WidgetBlueprintGeneratedClass UMG_ProgressBar.UMG_ProgressBar_C
struct UUMG_ProgressBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_ProgressBarAnimatedLayer_C* Actual; 
	struct UOverlay* BarOverlay; 
	struct UUMG_ProgressBarAnimatedLayer_C* Damage; 
	struct UUMG_ProgressBarAnimatedLayer_C* Heal; 
	struct USizeBox* SizeBar; 
	float In Height Override; 
	float In Width Override; 
	struct UCurveLinearColor* ColorCurve; 
	struct FLinearColor ProgressUpColour; 
	struct FLinearColor ProgressDownColour; 
	struct FLinearColor DamageColour; 
	float InitialPercentage; 

	void UpdateWidth(float Width); // (Public|BlueprintCallable|BlueprintEvent)
	void SetStyle(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetTarget(float NewTarget, float Speed); // (Public|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ProgressBar(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

