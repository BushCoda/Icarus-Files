// WidgetBlueprintGeneratedClass UMG_ArmourStand.UMG_ArmourStand_C
struct UUMG_ArmourStand_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* OpenMenu; 
	struct UVerticalBox* InventoryVertBox; 
	struct UBorder* MainBorder; 
	struct UUMG_BasicButton_2_C* SwapButton; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; 
	struct UUMG_CharacterSetting_TextBase_C* UMG_CharacterSetting_TextBase; 
	struct UUMG_InventoryPaperDoll_C* UMG_InventoryPaperDoll; 
	struct UUMG_PlayerInventory_C* UMG_PlayerInventory; 
	struct UUMG_ToggleButton_TextSettingOption_C* UMG_ToggleButton_TextSettingOption_BackpackSwap; 
	struct UInventory* Inventory; 
	bool ShowStoreAll; 
	bool ShowTakeAll; 

	void InitialisePoseSelector(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void QuickShiftInventoryHandler(int32_t CurrentLocation, struct UInventory* Inventory); // (Public|BlueprintCallable|BlueprintEvent)
	void LinkedActorDestroyed(struct AActor* DestroyedActor); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupObjectInventory(struct UInventory* ContainerInventory); // (Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnPoseSelectionUpdated(int32_t Index, struct FPreviewCameraSettingsEnum NewFocus); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_ArmourStand_SwapButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_ArmourStand_UMG_ToggleButton_TextSettingOption_BackpackSwap_K2Node_ComponentBoundEvent_7_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void BndEvt__UMG_ArmourStand_UMG_ToggleButton_TextSettingOption_BackpackSwap_K2Node_ComponentBoundEvent_8_Untoggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void BndEvt__UMG_ArmourStand_UMG_ToggleButton_TextSettingOption_BackpackSwap_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_ArmourStand(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

