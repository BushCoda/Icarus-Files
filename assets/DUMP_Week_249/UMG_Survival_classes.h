// WidgetBlueprintGeneratedClass UMG_Survival.UMG_Survival_C
struct UUMG_Survival_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* FadeOutHealthBar; 
	struct UWidgetAnimation* WarningHPPulse; 
	struct UUMG_ProgressBar_C* AnimatedHealthBar; 
	struct UBorder* BG; 
	struct UUMG_SurvivalProgress_C* Food; 
	struct USizeBox* HealthBarSizeBox; 
	struct UImage* HealthBoxBorder; 
	struct UCanvasPanel* HealthFoodLineCanvas; 
	struct UImage* HealthIcon; 
	struct USpacer* HealthSpacerAnchor; 
	struct UTextBlock* HealthText; 
	struct UOverlay* HPBox; 
	struct UUMG_SurvivalProgress_C* Oxygen; 
	struct UUMG_Hearing_C* UMG_Hearing; 
	struct UUMG_TempAndHome_C* UMG_TempAndHome; 
	struct UUMG_SurvivalProgress_C* Water; 
	struct FProgressBarStyle NormalHealthBarStyle; 
	bool LowImage; 
	struct FProgressBarStyle WarninglHealthBarStyle; 
	bool HealthFull; 
	bool StaminaFull; 
	bool LowStamina; 
	struct FProgressBarStyle WarningStaminaBarStyle; 
	struct FProgressBarStyle NormalStaminaBarStyle; 
	struct TArray<int32_t> StaminaLinePositions; 
	struct TArray<int32_t> HealthLinePositions; 
	float LineStart_VerticalOffset; 
	float LineEnd_VerticalOffset; 
	struct FLinearColor White; 
	struct FLinearColor Black; 
	struct UCurveLinearColor* HealthColourCurve; 
	bool Initialised; 
	bool TriggerSegmentUpdate; 

	struct FText GetHealthValue(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateSegments(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnPaint(struct FPaintContext& Context); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void HideHealthBar(); // (Public|BlueprintCallable|BlueprintEvent)
	void LowHealthWarning(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FText GetHealthPercent(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	float GetHealth(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	float GetFood(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	float GetAir(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	float GetWater(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetAirText(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetFoodText(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetWaterText(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnStatContainerUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void AttemptInitialisation(); // (BlueprintCallable|BlueprintEvent)
	void HealthUpdated(struct UActorState* ActorState, float NewHealth); // (BlueprintCallable|BlueprintEvent)
	void Update Health Bar(); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void HealthNumbersUpdated(bool Value); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_Survival(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

