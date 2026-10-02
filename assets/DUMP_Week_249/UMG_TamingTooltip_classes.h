// WidgetBlueprintGeneratedClass UMG_TamingTooltip.UMG_TamingTooltip_C
struct UUMG_TamingTooltip_C : UW_ProjectionWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* TooltipFadeIn; 
	struct UBorder* Border_LikesDislikes; 
	struct UProgressBar* Health; 
	struct UOverlay* HealthOverlay; 
	struct UTextBlock* HealthPercent; 
	struct UHorizontalBox* HorizontalBox_Survival; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_4; 
	struct UImage* Image_77; 
	struct UImage* Image_193; 
	struct UImage* Line; 
	struct UOverlay* MainOverlay; 
	struct UBorder* ModifiersBorder; 
	struct UImage* ModifiersImage; 
	struct UOverlay* ModifiersOverlay; 
	struct UImage* ModifiersStatus; 
	struct UTextBlock* Name; 
	struct UBorder* NotOwner; 
	struct UBorder* NutritionBorder; 
	struct UImage* NutritionImage; 
	struct UOverlay* NutritionOverlay; 
	struct UImage* NutritionStatus; 
	struct UBorder* Owner; 
	struct USizeBox* ParentageBox; 
	struct UImage* Pointer; 
	struct UImage* SexImage; 
	struct UBorder* ShelterBorder; 
	struct UImage* ShelterImage; 
	struct UOverlay* ShelterOverlay; 
	struct UImage* ShelterStatus; 
	struct UProgressBar* Taming; 
	struct UOverlay* TamingOverlay; 
	struct UTextBlock* TamingPercent; 
	struct UTextBlock* TextBlock_Modifier_NeedsDescription_2; 
	struct UTextBlock* TextBlock_Modifier_NeedsDescription_3; 
	struct UTextBlock* TextBlock_TamedBy; 
	struct UCanvasPanel* TopDisplay; 
	struct UUMG_InteractionPrompt_C* UMG_InteractionPrompt; 
	struct UUMG_ModifierStateContainer_C* UMG_ModifierStateContainer; 
	struct UUMG_TameParent_C* UMG_TameParent; 
	struct UVerticalBox* VerticalBox_NeedsDescription; 
	struct UBorder* WarmthBorder; 
	struct UImage* WarmthImage; 
	struct UOverlay* WarmthOverlay; 
	struct UImage* WarmthStatus; 
	struct TArray<struct FInteractableRowHandle> InteractablesToShowStatic; 
	bool ShowShelteredIcon; 
	bool ShowElectricIcon; 
	bool ShowWaterIcon; 

	void OnModifierStateUpdated(struct UModifierStateComponent* ModifiedComponent, bool Removed); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BuildModifierStatesDescription(struct FText& WantsText, bool& WantsModifierStates, struct FText& DislikesText, bool& DislikesModifierStates); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	void SetProjectionActor(struct UBP_UIProjectionComponent_C* ProjectionActor); // (Public|BlueprintCallable|BlueprintEvent)
	bool ShouldUseOverride(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetOverridePlacement(struct FVector2D& Location, float& ScaleAlpha, struct FVector2D& Alignment, bool& UseOpacity); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateVisuals(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateTooltip(struct AActor* InputActor); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TickWidget(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_TamingTooltip(int32_t EntryPoint); // (Final|UbergraphFunction)
};

