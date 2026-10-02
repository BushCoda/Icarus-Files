// WidgetBlueprintGeneratedClass UMG_MainMenu_Space.UMG_MainMenu_Space_C
struct UUMG_MainMenu_Space_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* CharacterFadeIn; 
	struct UWidgetAnimation* MailNotification; 
	struct UUMG_BioLab_Space_C* Biolab; 
	struct UUMG_ToggleButton_MenuHeader_C* ButtonBioLab; 
	struct UUMG_ToggleButton_MenuHeader_C* ButtonDropships; 
	struct UUMG_ToggleButton_MenuHeader_C* ButtonInventory; 
	struct UUMG_ToggleButton_MenuHeader_C* ButtonLeaveSession; 
	struct UUMG_ToggleButton_MenuHeader_C* ButtonLoadout; 
	struct UUMG_ToggleButton_MenuHeader_C* ButtonOpenWorld; 
	struct UUMG_ToggleButton_MenuHeader_C* ButtonOrbitalTree; 
	struct UUMG_ToggleButton_MenuHeader_C* ButtonOutposts; 
	struct UUMG_ToggleButton_MenuHeader_C* ButtonProspects; 
	struct UUMG_ToggleButton_MenuHeader_C* ButtonReadyUp; 
	struct UHorizontalBox* Buttons; 
	struct UUMG_BasicButton_2_C* ExitButton; 
	struct UImage* Glow; 
	struct UImage* Gradient; 
	struct UBorder* Header_2; 
	struct UUMG_ToggleButton_MenuHeader_C* HomeButton; 
	struct UUMG_SpaceMenu_Cargo_ViewOnly_C* Loadout; 
	struct UUMG_ButtonIcon_C* MailboxButton; 
	struct UOverlay* MailboxOverlay; 
	struct UImage* MainBackground; 
	struct UUMG_MainInventory_Space_C* MainInventory; 
	struct UWidgetSwitcher* Menus; 
	struct UUMG_MetaItemShop_C* MetaShop; 
	struct UHorizontalBox* NewMail; 
	struct UImage* Notification; 
	struct UOverlay* NotificationOverlay; 
	struct UImage* Pattern; 
	struct UUMG_ReadyUp_C* ReadyUp; 
	struct UUMG_ButtonIcon_C* SettingsButton; 
	struct UUMG_HabitatTerminal_C* Terminal; 
	struct UUMG_SpaceMenus_TopLevel_C* TopLevel; 
	struct UUMG_CloseButton_2_C* UMG_CloseButton_3; 
	struct UUMG_Mailbox_C* UMG_Mailbox; 
	struct UUMG_SpacePlayerInfo_C* UMG_SpacePlayerInfo; 
	struct UImage* Vignette; 
	struct UNamedSlot* WorkshopTreeSlot; 
	struct UInventory* Inventory; 
	bool Initialised; 
	struct UUMG_UserInterfaceSpace_C* UserInterace_Space; 
	enum class ESpaceMainMenuOptions CurrentMenu; 
	enum class ESpaceMainMenuOptions LastMenu; 
	bool BackReturnsToLastMenu; 
	struct FText ChatKeyBind; 
	struct ABP_PlayerPreview_HAB_C* PlayerPreview; 

	void EscapePressed(bool& Handled); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void InitCharacterData(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void NotificationsUpdated(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ContractUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowOption(enum class ESpaceMainMenuOptions Option); // (Public|BlueprintCallable|BlueprintEvent)
	void SetContentState(enum class ESpaceMainMenuOptions State); // (Private|BlueprintCallable|BlueprintEvent)
	void SetBackReturnsToLastMenu(bool ShouldReturn); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Initialise(); // (Public|BlueprintCallable|BlueprintEvent)
	void ResetContentSwitcher(); // (Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_CloseButton_2_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ShowTopMenu(); // (BlueprintCallable|BlueprintEvent)
	void GoToHost(struct UUMG_ButtonBase_C* Button); // (BlueprintCallable|BlueprintEvent)
	void GoToContract(struct UUMG_ButtonBase_C* Button); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__ButtonLeaveSession_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void CreateDropship(struct UUMG_ButtonBase_C* Button); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__ExitButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__ButtonProspects_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void BndEvt__UMG_ButtonIcon_429_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__HomeButton_K2Node_ComponentBoundEvent_11_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void BndEvt__ButtonMetaShop_K2Node_ComponentBoundEvent_10_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(); // (BlueprintEvent)
	void LeaveToMainMenu(); // (BlueprintCallable|BlueprintEvent)
	void ReturnToCharacterSelect(struct UUMG_ButtonBase_C* Button); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__ButtonDropships_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__ButtonShop_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void BndEvt__ButtonInventory_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void CancelLeaveToMainMenu(); // (BlueprintCallable|BlueprintEvent)
	void OnConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void GoToJoin(struct UUMG_ButtonBase_C* Button); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_MainMenu_Space_ButtonOutposts_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void GoToOutpostScreen(struct UUMG_ButtonBase_C* Button); // (BlueprintCallable|BlueprintEvent)
	void GoBackToHome(); // (BlueprintCallable|BlueprintEvent)
	void GoToOpenWorldScreen(struct UUMG_ButtonBase_C* Button); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_MainMenu_Space_ButtonOpenWorld_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ResumeLastProspectClicked(struct UUMG_ButtonBase_C* Button); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void GoToOpenProspectScreen(struct UUMG_ButtonBase_C* Button); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_MainMenu_Space_ButtonLivingWeapons_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ReturnToCharacterSelectIcon(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_MainMenu_Space(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

