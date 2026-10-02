// WidgetBlueprintGeneratedClass UMG_Drill.UMG_Drill_C
struct UUMG_Drill_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* ShelterWarning; 
	struct UWidgetAnimation* OpenMenu; 
	struct UWidgetAnimation* DeviceWarningPulse; 
	struct UOverlay* ActivatePrompt; 
	struct UTextBlock* BenchName; 
	struct UUMG_BasicButton_2_C* CloseButton; 
	struct UUMG_BasicButton_2_C* EnergyActivationButton; 
	struct UTextBlock* InsufficientPowerWarning; 
	struct UTextBlock* ResourcesPerMin; 
	struct UTextBlock* ResourcesRemaining; 
	struct UUMG_DeviceInventory_C* UMG_DeviceInventory; 
	struct UUMG_ExtractionElement_C* UMG_ExtractionElement; 
	struct UUMG_FuelInventory_C* UMG_FuelInventory; 
	struct UUMG_PlayerInventory_C* UMG_PlayerInventory; 
	bool GeneratorState; 
	bool IsSheltered; 
	float CachedMiningTime; 
	float CachedExtractorEffectiveness; 
	bool UseDeviceOnOffToggle; 
	int32_t LastCachedBrownOutStrength; 
	struct UResourceComponent* ResourceComponent; 
	struct AResourceDeposit* ResourceDepositRef; 

	void UpdateDeviceMineSpeed(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ToggleDeviceOnOff(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateLocalState(bool State); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheckLocalState(bool ForceUpdate); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__EnergyActivationButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void CloseUI(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_Drill(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

