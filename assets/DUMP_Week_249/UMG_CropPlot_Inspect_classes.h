// WidgetBlueprintGeneratedClass UMG_CropPlot_Inspect.UMG_CropPlot_Inspect_C
struct UUMG_CropPlot_Inspect_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* Alterations; 
	struct UImage* AlterationsDivider; 
	struct UUMG_IconTextButton_C* ConfirmButton; 
	struct UVerticalBox* Connections; 
	struct UProgressBar* CropDurability; 
	struct UTextBlock* CropDurabilityPercent; 
	struct UOverlay* CropOverlay; 
	struct USizeBox* CropTierBox; 
	struct UVerticalBox* CultivationList; 
	struct UUMG_DeployableModifiers_C* DeployableModifiers; 
	struct UUMG_ResourceConnectionState_C* Electricity; 
	struct UUMG_ResourceConnectionState_C* Fuel; 
	struct UHorizontalBox* ItemAlterations; 
	struct UHorizontalBox* ItemAlterations_2; 
	struct UTextBlock* TotalSpeedText; 
	struct UUMG_CropPlotTier_C* UMG_CropPlotTier; 
	struct UUMG_DarkTitlebar_C* UMG_DarkTitlebar_Seed; 
	struct UUMG_ResourceConnectionState_C* Water; 
	bool HasContent; 
	int32_t CropPlotTier; 

	void UpdateGrowthSpeed(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateCultivations(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_CropPlot_Inspect_ConfirmButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnLinkedActorDestroyed(struct AActor* DestroyedActor); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_CropPlot_Inspect(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

