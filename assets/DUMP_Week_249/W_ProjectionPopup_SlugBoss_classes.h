// WidgetBlueprintGeneratedClass W_ProjectionPopup_SlugBoss.W_ProjectionPopup_SlugBoss_C
struct UW_ProjectionPopup_SlugBoss_C : UW_ProjectionPopup_AlertBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UProgressBar* ArmourBar; 
	struct USizeBox* Health_2; 
	struct UProgressBar* HealthBar; 
	struct UImage* Healthbar_Deco1; 
	struct UImage* Healthbar_Deco1_2; 
	struct UOverlay* HealthOverlay; 
	struct UHorizontalBox* HorizontalBox_Armour; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_4; 
	struct UImage* Image_171; 
	struct UImage* Image_416; 
	struct URetainerBox* PerceptionRetainerBox; 
	struct UUMG_BossLevel_C* UMG_BossLevel; 
	struct UCurveLinearColor* HealthCurve; 
	float NamePlateVisibilitySmoothed; 
	float NamePlateVisibility; 
	float NamePlateInterpSpeed; 
	float ArmourValue; 
	float ArmourValueSmoothed; 
	float HealthValueDelay; 
	struct TArray<struct AIcarusNPCGOAPCharacter*> CurrentSlugs; 
	float AddedPercentages; 

	bool ShouldUseOverride(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetOverridePlacement(struct FVector2D& Location, float& ScaleAlpha, struct FVector2D& Alignment, bool& UseOpacity); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool IsCreatureEpic(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateVisuals(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateAlertVisibility(); // (Public|BlueprintCallable|BlueprintEvent)
	void TickHealthVisuals(); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void TickWidget(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_W_ProjectionPopup_SlugBoss(int32_t EntryPoint); // (Final|UbergraphFunction)
};

