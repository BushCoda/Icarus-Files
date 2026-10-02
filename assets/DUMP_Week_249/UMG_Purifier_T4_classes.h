// WidgetBlueprintGeneratedClass UMG_Purifier_T4.UMG_Purifier_T4_C
struct UUMG_Purifier_T4_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* ShelterWarning; 
	struct UWidgetAnimation* OpenMenu; 
	struct UWidgetAnimation* DeviceWarningPulse; 
	struct UUMG_BasicButton_2_C* CloseButton; 
	struct UUMG_DeployableModifiersList_C* UMG_DeployableModifiersList_C_2; 
	struct UUMG_DeviceInfo_C* UMG_DeviceInfo; 
	struct UUMG_DeviceInventory_C* UMG_DeviceInventory; 
	struct UUMG_PlayerInventory_C* UMG_PlayerInventory; 

	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void CloseUI(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_Purifier_T4(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

