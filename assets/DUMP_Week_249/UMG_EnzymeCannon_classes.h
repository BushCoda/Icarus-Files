// WidgetBlueprintGeneratedClass UMG_EnzymeCannon.UMG_EnzymeCannon_C
struct UUMG_EnzymeCannon_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* ShelterWarning; 
	struct UWidgetAnimation* OpenMenu; 
	struct UWidgetAnimation* DeviceWarningPulse; 
	struct UBorder* ActivateFrame; 
	struct UOverlay* ActivatePrompt; 
	struct UUMG_BasicButton_2_C* ChargeButton; 
	struct UUMG_BasicButton_2_C* CloseButton; 
	struct UTextBlock* ExtractorResourcesPerMin; 
	struct UTextBlock* Name; 
	struct UProgressBar* Progress; 
	struct UTextBlock* ProgressText; 
	struct UUMG_BasicButton_2_C* TriggerButton; 
	struct UUMG_DeployableModifiersList_C* UMG_DeployableModifiersList_C_2; 
	struct UUMG_DeviceInfo_C* UMG_DeviceInfo; 
	struct UUMG_FuelInventory_C* UMG_FuelInventory; 
	struct UUMG_PlayerInventory_C* UMG_PlayerInventory; 
	bool GeneratorState; 
	bool IsSheltered; 
	bool UseDeviceOnOffToggle; 

	void Toggle Device on Off(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateLocalState(bool State); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckLocalState(bool ForceUpdate); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckShelteredIndicator(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShowShelterWarningStyle(bool Sheltered); // (Public|BlueprintCallable|BlueprintEvent)
	enum class ESlateVisibility ShowShelteredIndicator(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__EnergyActivationButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void CloseUI(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_EnzymeCannon_TriggerButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_EnzymeCannon(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

