// WidgetBlueprintGeneratedClass UMG_MainMenu.UMG_MainMenu_C
struct UUMG_MainMenu_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* OpenMenu; 
	struct UWidgetAnimation* AttributePointsGlow; 
	struct UWidgetAnimation* BlueprintPointGlow; 
	struct UWidgetAnimation* MenuGlowPulse; 
	struct UNamedSlot* AccoladeSlot; 
	struct UOverlay* APPointBox; 
	struct UImage* AttributeGlow; 
	struct UImage* Backglow; 
	struct UNamedSlot* BlueprintMenuSlot; 
	struct UTextBlock* BlueprintPoints; 
	struct UTextBlock* BlueprintPoints_2; 
	struct UImage* BPGlow; 
	struct UOverlay* BPPointBox; 
	struct UUMG_ToggleButton_MenuHeader_C* ButtonAccolades; 
	struct UUMG_ToggleButton_MenuHeader_C* ButtonCrafting; 
	struct UUMG_ToggleButton_MenuHeader_C* ButtonInventory; 
	struct UUMG_ToggleButton_MenuHeader_C* ButtonMap; 
	struct UUMG_ToggleButton_MenuHeader_C* ButtonTalents; 
	struct UUMG_ToggleButton_MenuHeader_C* ButtonTechtree; 
	struct UUMG_CloseButton_2_C* CloseButton; 
	struct UImage* EdgeLights; 
	struct UBorder* MainContentBorder; 
	struct UWidgetSwitcher* MenuSwitcher; 
	struct UImage* Noise; 
	struct UHorizontalBox* PointNotifiers; 
	struct UNamedSlot* SoloMenuSlot; 
	struct UNamedSlot* TalentMenuSlot; 
	struct UWidgetSwitcher* TalentSwitcher; 
	struct UUMG_CharacterInfo_C* UMG_CharacterInfo; 
	struct UUMG_Crafting_C* UMG_Crafting; 
	struct UUMG_MainInventory_C* UMG_MainInventory; 
	struct UUMG_MainMap_C* UMG_MainMap; 
	struct UInventory* Inventory; 
	struct UUMG_UserInterface_C* UserInterface; 
	bool TalentsInitialized; 
	struct FTimerHandle TimerHandle; 

	void CleanupTabs(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShowOption(enum class EMainMenuOptions Option); // (Public|BlueprintCallable|BlueprintEvent)
	void Get Shown Menu(enum class EMainMenuOptions& Menu); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Setup Player Crafting (struct UInventory* Inventory, struct UProcessingComponent* Processing); // (Public|BlueprintCallable|BlueprintEvent)
	void Toggle Menu(enum class EMainMenuOptions MenuOption); // (Public|BlueprintCallable|BlueprintEvent)
	void Setup Main Inventory(struct UInventory* Bound Inventory, struct UInventory* Envirosuit Inventory, struct UInventory* Equipment Inventory, struct UInventory* UpgradeInventory, struct UInventory* VisionInventory, struct UUMG_UserInterface_C* Parent); // (Public|BlueprintCallable|BlueprintEvent)
	void Initialise(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ResetContentSwitcher(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetContentState(enum class EMainMenuOptions State); // (Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__ButtonMap_K2Node_ComponentBoundEvent_7_Untoggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void BndEvt__ButtonTechtree_K2Node_ComponentBoundEvent_6_Untoggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void BndEvt__ButtonCrafting_K2Node_ComponentBoundEvent_5_Untoggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void BndEvt__ButtonInventory_K2Node_ComponentBoundEvent_4_Untoggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void BndEvt__ButtonCrafting_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void BndEvt__ButtonTalents_K2Node_ComponentBoundEvent_11_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void BndEvt__ButtonTalents_K2Node_ComponentBoundEvent_13_Untoggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void BndEvt__ButtonInventory_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void BndEvt__ButtonTechtree_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void BndEvt__ButtonMap_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateBlueprintIndicator(struct UTalentModelInterface_Const* Model); // (BlueprintCallable|BlueprintEvent)
	void UpdateTalentIndicator(struct UTalentModelInterface_Const* Model); // (BlueprintCallable|BlueprintEvent)
	void PlayerModelViewChanged(struct UTalentControllerComponent* Controller); // (BlueprintCallable|BlueprintEvent)
	void BlueprintModelViewChanged(struct UTalentControllerComponent* Controller); // (BlueprintCallable|BlueprintEvent)
	void Visbility_Changed(enum class ESlateVisibility InVisibility); // (BlueprintCallable|BlueprintEvent)
	void ConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnAliveStateChanged(struct UActorState* ActorState); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_MainMenu_ButtonAccolades_K2Node_ComponentBoundEvent_8_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void BndEvt__UMG_MainMenu_ButtonAccolades_K2Node_ComponentBoundEvent_9_Untoggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void OnSoloModelViewChanged(struct UTalentControllerComponent* Controller); // (BlueprintCallable|BlueprintEvent)
	void SwitchTalentView(bool Solo); // (BlueprintCallable|BlueprintEvent)
	void SwitchTalents(bool Solo); // (BlueprintCallable|BlueprintEvent)
	void UpdateDLSSMode(bool Enabled); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_MainMenu(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

