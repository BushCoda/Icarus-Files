// WidgetBlueprintGeneratedClass UMG_SpeederBikeTooltip.UMG_SpeederBikeTooltip_C
struct UUMG_SpeederBikeTooltip_C : UW_ProjectionWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* TooltipFadeIn; 
	struct UTextBlock* Description; 
	struct UOverlay* FuelOverlay; 
	struct UTextBlock* FuelPct; 
	struct UProgressBar* FuelProgress; 
	struct UProgressBar* Health; 
	struct UOverlay* HealthOverlay; 
	struct UTextBlock* HealthPercent; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_4; 
	struct UImage* Image_5; 
	struct UImage* Image_77; 
	struct UImage* Image_193; 
	struct UOverlay* MainOverlay; 
	struct UTextBlock* Name; 
	struct UBorder* NoOwner; 
	struct UBorder* NotOwner; 
	struct UBorder* Owner; 
	struct UProgressBar* Oxygen; 
	struct UOverlay* OxygenOverlay; 
	struct UTextBlock* OxygenPercent; 
	struct UImage* Pointer; 
	struct UBorder* ShelterBorder; 
	struct UImage* ShelterImage; 
	struct UOverlay* ShelterOverlay; 
	struct UCanvasPanel* ShipOwnerDisplay; 
	struct UTextBlock* TextBlock_TamedBy; 
	struct UTextBlock* TextBlock_TamedBy_Nobody; 
	struct UUMG_InteractionPrompt_C* UMG_InteractionPrompt; 
	struct UUMG_ModifierStateContainer_C* UMG_ModifierStateContainer; 
	struct TArray<struct FInteractableRowHandle> InteractablesToShowStatic; 
	bool ShowShelteredIcon; 
	bool ShowElectricIcon; 
	bool ShowWaterIcon; 

	void UpdateModifiers(struct UModifierStateComponent* ModifiedComponent, bool Removed); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ProjectionItemChanged(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetProjectionActor(struct UBP_UIProjectionComponent_C* ProjectionActor); // (Public|BlueprintCallable|BlueprintEvent)
	bool ShouldUseOverride(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetOverridePlacement(struct FVector2D& Location, float& ScaleAlpha, struct FVector2D& Alignment, bool& UseOpacity); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateVisuals(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FLinearColor Get_Durability_FillColor(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateTooltip(struct AActor* InputActor); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TickWidget(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_SpeederBikeTooltip(int32_t EntryPoint); // (Final|UbergraphFunction)
};

