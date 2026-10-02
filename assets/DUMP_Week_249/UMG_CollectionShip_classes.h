// WidgetBlueprintGeneratedClass UMG_CollectionShip.UMG_CollectionShip_C
struct UUMG_CollectionShip_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* ShelterWarning; 
	struct UWidgetAnimation* OpenMenu; 
	struct UWidgetAnimation* DeviceWarningPulse; 
	struct UOverlay* ActivatePrompt; 
	struct UUMG_BasicButton_2_C* CloseButton; 
	struct UUMG_BasicButton_2_C* LaunchButton; 
	struct UUMG_DeviceInventory_C* UMG_DeviceInventory; 
	struct UUMG_PlayerInventory_C* UMG_PlayerInventory; 
	bool GeneratorState; 
	bool IsSheltered; 

	void UpdateLaunchButton(); // (Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__EnergyActivationButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnLinkedActorDestroyed(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (BlueprintCallable|BlueprintEvent)
	void CloseUI(); // (BlueprintCallable|BlueprintEvent)
	void OnInventoryChanged(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_CollectionShip(int32_t EntryPoint); // (Final|UbergraphFunction)
};

