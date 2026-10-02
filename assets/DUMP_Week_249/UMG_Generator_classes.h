// WidgetBlueprintGeneratedClass UMG_Generator.UMG_Generator_C
struct UUMG_Generator_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* ShelterWarning; 
	struct UWidgetAnimation* OpenMenu; 
	struct UWidgetAnimation* DeviceWarningPulse; 
	struct UBorder* ActivateFrame; 
	struct UOverlay* ActivatePrompt; 
	struct UUMG_BasicButton_2_C* CloseButton; 
	struct UUMG_BasicButton_2_C* EnergyActivationButton; 
	struct UUMG_BasicButton_2_C* RequiresShelterButton; 
	struct UBorder* RequiresShelterPrompt; 
	struct UUMG_DeployableModifiersList_C* UMG_DeployableModifiersList_C_2; 
	struct UUMG_DeviceInfo_C* UMG_DeviceInfo; 
	struct UUMG_DeviceInventory_C* UMG_DeviceInventory; 
	struct UUMG_FuelInventory_C* UMG_FuelInventory; 
	struct UUMG_PlayerInventory_C* UMG_PlayerInventory; 
	bool GeneratorState; 
	bool IsSheltered; 
	bool UseDeviceOnOffToggle; 

	void ToggleDeviceOnOff(); // (Public|BlueprintCallable|BlueprintEvent)
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
	void ExecuteUbergraph_UMG_Generator(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

