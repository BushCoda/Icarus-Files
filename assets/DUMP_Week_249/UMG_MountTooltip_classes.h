// WidgetBlueprintGeneratedClass UMG_MountTooltip.UMG_MountTooltip_C
struct UUMG_MountTooltip_C : UW_ProjectionWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* TooltipFadeIn; 
	struct UTextBlock* Capacity; 
	struct UTextBlock* Description; 
	struct UProgressBar* Food; 
	struct UOverlay* FoodOverlay; 
	struct UTextBlock* FoodPercent; 
	struct UOverlay* GestationOverlay; 
	struct UProgressBar* GestationProgress; 
	struct UTextBlock* GestationTitle; 
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
	struct UProgressBar* Milk; 
	struct UOverlay* MilkOverlay; 
	struct UTextBlock* MilkPercent; 
	struct UTextBlock* Name; 
	struct UBorder* NoOwner; 
	struct UBorder* NotOwner; 
	struct UBorder* Owner; 
	struct UProgressBar* Oxygen; 
	struct UOverlay* OxygenOverlay; 
	struct UTextBlock* OxygenPercent; 
	struct UImage* Pointer; 
	struct UImage* SexImage; 
	struct UBorder* ShelterBorder; 
	struct UImage* ShelterImage; 
	struct UOverlay* ShelterOverlay; 
	struct UCanvasPanel* ShipOwnerDisplay; 
	struct USizeBox* SizeBox_ParentInfo; 
	struct UTextBlock* TextBlock_TamedBy; 
	struct UTextBlock* TextBlock_TamedBy_Nobody; 
	struct UUMG_CharacterInfo_C* UMG_CharacterInfo; 
	struct UUMG_FillableProgressBar_C* UMG_FillableProgressBar; 
	struct UUMG_InteractionPrompt_C* UMG_InteractionPrompt; 
	struct UUMG_ModifierStateContainer_C* UMG_ModifierStateContainer; 
	struct UUMG_TameParent_C* UMG_TameParent; 
	struct UProgressBar* Water; 
	struct UOverlay* WaterOvelay; 
	struct UTextBlock* WaterPercent; 
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
	void ExecuteUbergraph_UMG_MountTooltip(int32_t EntryPoint); // (Final|UbergraphFunction)
};

