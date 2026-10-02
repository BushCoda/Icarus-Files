// WidgetBlueprintGeneratedClass UMG_Stamina.UMG_Stamina_C
struct UUMG_Stamina_C : UStaminaBarBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* PopinStamina; 
	struct UWidgetAnimation* StaminaDepleted; 
	struct UWidgetAnimation* FadeOutStamina; 
	struct UUMG_ProgressBar_C* AnimatedStaminaBar; 
	struct UImage* Border; 
	struct UInvalidationBox* InvalidationBox_238; 
	struct UOverlay* StaminaBarOverlay; 
	struct URetainerBox* StaminaBox; 
	struct UImage* StaminaBoxBorder; 
	struct UOverlay* StaminaDepletedBorder; 
	struct UTextBlock* StaminaDepletedText; 
	struct UCanvasPanel* StaminaFoodLineCanvas; 
	struct UImage* StaminaIcon; 
	struct USizeBox* StaminaSizeBox; 
	struct USpacer* StaminaSpacerAnchor; 
	struct TArray<int32_t> StaminaLinePositions; 
	bool StaminaFull; 
	bool LowStamina; 
	struct FProgressBarStyle NormalStaminaBarStyle; 
	struct FProgressBarStyle WarningStaminaBarStyle; 
	bool NoStamina; 
	struct UCurveLinearColor* StaminaColourCurve; 

	void NoStaminaWarning(); // (Public|BlueprintCallable|BlueprintEvent)
	void LowStaminaWarning(); // (Public|BlueprintCallable|BlueprintEvent)
	float GetStamina(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ResetStaminaUI(float CurrentStamina, float MaxStamina, float StaminaPct, enum class EStaminaBracket CurrentBracket); // (Event|Protected|BlueprintEvent)
	void UpdateStaminaUI(float CurrentStamina, float MaxStamina, float StaminaPct, enum class EStaminaBracket CurrentBracket, enum class EStaminaBracket LastBracket); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_UMG_Stamina(int32_t EntryPoint); // (Final|UbergraphFunction)
};

