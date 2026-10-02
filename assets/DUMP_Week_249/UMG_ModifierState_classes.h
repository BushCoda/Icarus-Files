// WidgetBlueprintGeneratedClass UMG_ModifierState.UMG_ModifierState_C
struct UUMG_ModifierState_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* AddBuff; 
	struct UWidgetAnimation* Pulse; 
	struct UBorder* Background; 
	struct UHorizontalBox* HorizontalBox_Main; 
	struct UBorder* Icon; 
	struct UTextBlock* Percentage; 
	struct UBorder* PercentageApplied; 
	struct UProgressBar* Progress; 
	struct USizeBox* SizeBox_Main; 
	struct UTextBlock* Stack; 
	struct UBorder* StackContainer; 
	struct UTextBlock* Timer; 
	struct UBorder* TimerContainer; 
	struct UUMG_CloseButton_2_C* UMG_CloseButton_3; 
	struct TArray<struct UModifierStateComponent*> StateList; 
	struct FModifierStateData ModifierRow; 
	bool Initialised; 
	int32_t StackCount; 
	bool UpdateTrigger; 
	bool Hovered; 
	struct UTexture2D* BackgroundImage; 
	struct FName RowName; 
	float ModifierTime; 
	bool AlwaysHideTimer; 
	struct UUMG_ModifierPopup_C* CachedToolTip; 
	bool UseSimpleAnimations; 
	int32_t StackOffsetCounter; 
	struct UCurveLinearColor* RadiationColorCurve; 
	struct TArray<float> Percent Trigger; 
	bool ShowRemoveButton; 
	bool PlayingAnimation; 

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetCloseButtonVisibility(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CacheRadiationTrigger(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Get Radiation Phase Percent(float Percent, float& Progress); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetProgressBarStyle(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetRadiationBackground(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetRenderOffset(float& DesiredOffset); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	void UpdateTimerText(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ModifierTimerUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void RefreshAllDetails(); // (Public|BlueprintCallable|BlueprintEvent)
	void RefreshStackCountDisplay(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddModifier(struct UModifierStateComponent* Modifier, bool SkipAnimation); // (BlueprintCallable|BlueprintEvent)
	void Initialise(); // (BlueprintCallable|BlueprintEvent)
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void RemoveModifier(struct UModifierStateComponent* Modifier); // (BlueprintCallable|BlueprintEvent)
	void SetTimerVisibility(enum class ESlateVisibility InVisibility); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_ModifierState_UMG_CloseButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void RemoveModifierEvent(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ModifierState(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

