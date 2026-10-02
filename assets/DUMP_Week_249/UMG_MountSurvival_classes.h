// WidgetBlueprintGeneratedClass UMG_MountSurvival.UMG_MountSurvival_C
struct UUMG_MountSurvival_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* FadeOutHealthBar; 
	struct UWidgetAnimation* WarningHPPulse; 
	struct UUMG_ProgressBar_C* AnimatedHealthBar; 
	struct UBorder* BG; 
	struct UImage* divider_2; 
	struct USizeBox* HealthBarSizeBox; 
	struct UImage* HealthBoxBorder; 
	struct UCanvasPanel* HealthFoodLineCanvas; 
	struct UImage* HealthIcon; 
	struct USpacer* HealthSpacerAnchor; 
	struct UTextBlock* HealthText; 
	struct UOverlay* HPBox; 
	struct UInvalidationBox* InvalidationBox_1; 
	struct UNamedSlot* NamedSlot_AdditionalInfo; 
	struct UNamedSlot* NamedSlot_ExperienceGained; 
	struct UTextBlock* TextBlock_MountName; 
	struct UUMG_ModifierStateContainer_C* UMG_ModifierStateContainer; 
	struct FProgressBarStyle NormalHealthBarStyle; 
	bool LowImage; 
	struct FProgressBarStyle WarninglHealthBarStyle; 
	bool HealthFull; 
	struct TArray<int32_t> HealthLinePositions; 
	float LineStart_VerticalOffset; 
	float LineEnd_VerticalOffset; 
	struct FLinearColor White; 
	struct FLinearColor Black; 
	struct UCurveLinearColor* HealthColourCurve; 
	bool TriggerSegmentUpdate; 
	struct AIcarusMountCharacter* MountReference; 
	float MountHealthScale; 

	struct FText GetHealthValue(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PopulateModifierList(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnPaint(struct FPaintContext& Context); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void HideHealthBar(); // (Public|BlueprintCallable|BlueprintEvent)
	void LowHealthWarning(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FText GetHealthPercent(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	float GetHealth(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Update Health Bar(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnStatContainerUpdated(); // (BlueprintCallable|BlueprintEvent)
	void AttemptInitialisation(); // (BlueprintCallable|BlueprintEvent)
	void HealthUpdated(struct UActorState* ActorState, float NewHealth); // (BlueprintCallable|BlueprintEvent)
	void UpdateSegments(); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnExperienceEvent(struct FExperienceEventsRowHandle ExperienceEvent, int32_t ExperienceGained); // (BlueprintCallable|BlueprintEvent)
	void OnMountModifiersUpdated(struct UModifierStateComponent* ModifiedComponent, bool Removed); // (BlueprintCallable|BlueprintEvent)
	void CleanupPreviousMount(); // (BlueprintCallable|BlueprintEvent)
	void HealthNumbersUpdated(bool Value); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_MountSurvival(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

