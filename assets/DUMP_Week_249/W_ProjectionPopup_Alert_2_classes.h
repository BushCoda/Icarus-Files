// WidgetBlueprintGeneratedClass W_ProjectionPopup_Alert_2.W_ProjectionPopup_Alert_1_C
struct UW_ProjectionPopup_Alert_1_C : UW_ProjectionPopup_AlertBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* AlertFrame; 
	struct UImage* AlertFrame_2; 
	struct UImage* AlertFrame_3; 
	struct UImage* AlertLines; 
	struct USizeBox* Armor; 
	struct UProgressBar* ArmorBar; 
	struct UHorizontalBox* ArmorContainer; 
	struct UCanvasPanel* CustomAction; 
	struct UCanvasPanel* EatingOrDrinking; 
	struct UImage* EyeImage; 
	struct UImage* EyeImage_CustomAction; 
	struct UImage* EyeImage_EatingDrinking; 
	struct USizeBox* Health_2; 
	struct UProgressBar* HealthBar; 
	struct UOverlay* HealthOverlay; 
	struct UImage* Image; 
	struct UImage* Image_171; 
	struct UCanvasPanel* Perception; 
	struct URetainerBox* PerceptionRetainerBox; 
	struct UProgressBar* ProgressBar_Vertical; 
	struct UProgressBar* ProgressBar_Vertical_2; 
	struct UProgressBar* ProgressBar_Vertical_3; 
	struct USpacer* Spacer_Offset; 
	struct UUMG_AnimalLevel_C* UMG_AnimalLevel_C_7; 
	struct UCurveLinearColor* HealthCurve; 
	float NamePlateVisibilitySmoothed; 
	float NamePlateVisibility; 
	float NamePlateInterpSpeed; 

	void TickArmorVisuals(); // (Public|BlueprintCallable|BlueprintEvent)
	bool IsCreatureEpic(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateVisuals(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateAlertVisibility(); // (Public|BlueprintCallable|BlueprintEvent)
	void TickHealthVisuals(); // (Public|BlueprintCallable|BlueprintEvent)
	void TickAlertVisuals(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void TickWidget(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_W_ProjectionPopup_Alert_2(int32_t EntryPoint); // (Final|UbergraphFunction)
};

