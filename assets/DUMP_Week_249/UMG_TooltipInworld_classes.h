// WidgetBlueprintGeneratedClass UMG_TooltipInworld.UMG_TooltipInworld_C
struct UUMG_TooltipInworld_C : UW_ProjectionWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* TooltipFadeIn; 
	struct UBorder* BulkyBorder; 
	struct UImage* BulkyImage; 
	struct UOverlay* BulkyOverlay; 
	struct UTextBlock* BulkyText; 
	struct UOverlay* DecayOverlay; 
	struct UTextBlock* DecayPercent; 
	struct UProgressBar* DecayProgress; 
	struct UTextBlock* Description; 
	struct UTextBlock* DropshipOwner; 
	struct UProgressBar* Durability; 
	struct UOverlay* DurabilityOverlay; 
	struct UTextBlock* DurabilityPercent; 
	struct UUMG_FillableProgressBar_C* Fillable; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_4; 
	struct UImage* Image_77; 
	struct UImage* Image_130; 
	struct UImage* Image_193; 
	struct UOverlay* MainOverlay; 
	struct UTextBlock* Name; 
	struct UBorder* NotOwner; 
	struct UBorder* OutsideBorder; 
	struct UImage* OutsideImage; 
	struct UOverlay* OutsideOverlay; 
	struct UBorder* Owner; 
	struct UImage* Pointer; 
	struct UBorder* ShelterBorder; 
	struct UImage* ShelterImage; 
	struct UOverlay* ShelterOverlay; 
	struct UCanvasPanel* ShipOwnerDisplay; 
	struct UTextBlock* Stack; 
	struct UBorder* StackBorder; 
	struct UTextBlock* TextBlock_Capacity; 
	struct UUMG_InteractionPrompt_C* UMG_InteractionPrompt; 
	struct TArray<struct FInteractableRowHandle> InteractablesToShowStatic; 
	bool ShowShelteredIcon; 
	bool ShowElectricIcon; 
	bool ShowWaterIcon; 
	bool ShowOutsideIcon; 
	struct FTagQueriesRowHandle Query_Bulky; 
	struct FTagQueriesRowHandle Query_Shield; 

	void FindPlayerName(struct FPlayerCharacterID PlayerCharacterID, struct FString& Name); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetCapacityText(struct FIcarusResourcesEnum ResourceType, float Amount, struct FText& Text); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ProjectionItemChanged(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetProjectionActor(struct UBP_UIProjectionComponent_C* ProjectionActor); // (Public|BlueprintCallable|BlueprintEvent)
	bool ShouldUseOverride(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetOverridePlacement(struct FVector2D& Location, float& ScaleAlpha, struct FVector2D& Alignment, bool& UseOpacity); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateVisuals(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FLinearColor Get_Durability_FillColor(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateTooltip(struct AActor* InputItem); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TickWidget(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_TooltipInworld(int32_t EntryPoint); // (Final|UbergraphFunction)
};

