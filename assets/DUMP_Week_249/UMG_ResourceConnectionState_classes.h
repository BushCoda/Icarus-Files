// WidgetBlueprintGeneratedClass UMG_ResourceConnectionState.UMG_ResourceConnectionState_C
struct UUMG_ResourceConnectionState_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* NotActiveAnimation; 
	struct UWidgetAnimation* ProvidingAnimation; 
	struct UWidgetAnimation* RecievingAnimation; 
	struct UBorder* BaseBacking; 
	struct UBorder* CheckBacking; 
	struct UImage* CheckIcon; 
	struct UTextBlock* IsOptionalText; 
	struct UTextBlock* PriorityText; 
	struct UProgressBar* RecievingProgressBar; 
	struct UTextBlock* RequiresAmountText; 
	struct UImage* ResourceIcon; 
	struct FSlateColor Red; 
	struct FSlateColor WaterBlue; 
	struct UUMG_ResourceConnectionState_Tooltip_C* Tooltip; 
	struct AActor* Actor; 
	struct FIcarusResourcesEnum Type; 
	struct UTraitComponent* Trait; 
	struct UResourceNetworkComponent* ResourceNetworkComponent; 
	struct FSlateColor EnergyYellow; 
	struct FSlateColor FuelGreen; 
	struct FSlateColor OxygenWhite; 
	enum class EResourceConnectionUIState CurrentState; 
	struct UResourceComponent* ResourceComponent; 
	struct FSlateColor OptionalRed; 
	struct UMaterialInterface* RedBorderMat; 
	struct UMaterialInterface* RedOptionalBorderMat; 

	void GenerateConnectionLabelText(enum class EResourceNetworkFlowType FlowType, enum class EResourceConnectionUIState ConnectionState, bool IsFreshData, struct FText& ConnectionText); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FSlateColor GetResourceColour_Slate(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FLinearColor GetResourceColour_Linear(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetTypeName(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateTooltipText(struct FText ToolTipText); // (Public|BlueprintCallable|BlueprintEvent)
	void ResourceComponentUpdated(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ResourceComponentActiveStateChanged(bool IsActive); // (Public|BlueprintCallable|BlueprintEvent)
	void Setup(struct AActor* Actor, struct FIcarusResourcesEnum Type); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetHoverText(bool IsOutdoors, bool IsGreenHouse); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetStateStyle(bool Connected, float Multiplier); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void RefreshComponentData(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ResourceConnectionState(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

