// WidgetBlueprintGeneratedClass UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C
struct UUMG_SpaceMenus_TopLevel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* OpenNewOptions; 
	struct UWidgetAnimation* InitialLoad; 
	struct UUMG_BasicButton_2_C* AccoladesButton; 
	struct UUMG_ButtonIcon_C* AccoladesIcon; 
	struct UUMG_BasicButton_2_C* BackButton; 
	struct UNamedSlot* BlueprintTalentSlot; 
	struct UUMG_BasicButton_2_C* Button_ReturnFromPlayerProgression; 
	struct UWidgetSwitcher* ButtonWidgetSwitcher; 
	struct UProgressBar* CharacterLevelProgressBar; 
	struct UUMG_ButtonIcon_C* CharacterSelectIcon; 
	struct UUMG_TopLevelButton_C* ContractButton; 
	struct USpacer* ContractSpacer; 
	struct USpacer* ContractSpacer_2; 
	struct USpacer* ContractSpacer_5; 
	struct USpacer* ContractSpacer_6; 
	struct UUMG_IconTextButton_C* CustomizeButton; 
	struct UUMG_ButtonIcon_C* CustomizeIcon; 
	struct UImage* divider; 
	struct UImage* divider_2; 
	struct UUMG_BasicButton_2_C* FieldGuideButton; 
	struct UUMG_ButtonIcon_C* FieldGuideIcon; 
	struct UNamedSlot* FieldGuideSlot; 
	struct UUMG_TopLevelButton_C* LeaveSessionButton; 
	struct UOverlay* MainOverlay; 
	struct UUMG_TopLevelButton_MainMenu_C* NewButton; 
	struct UUMG_TopLevelButton_NewGame_C* NewGame_Mission; 
	struct UUMG_TopLevelButton_NewGame_C* NewGame_OpenWorld; 
	struct UUMG_TopLevelButton_NewGame_C* NewGame_Outpost; 
	struct UHorizontalBox* NewGameButtonHorizontal; 
	struct UOverlay* NewGameOverlay; 
	struct UUMG_TopLevelButton_MainMenu_C* OpenProspectButton; 
	struct UUMG_TopLevelButton_C* OpenWorldHostButton; 
	struct UUMG_TopLevelButton_C* OutpostButton; 
	struct UOverlay* ParentOverlay; 
	struct UNamedSlot* PlayerTalentSlot; 
	struct UOverlay* ProgressionBorder; 
	struct UHorizontalBox* ProspectButtonsHorizontal; 
	struct UUMG_TopLevelButton_C* ProspectHostButton; 
	struct UUMG_TopLevelButton_MainMenu_C* ProspectJoinButton; 
	struct UUMG_TopLevelButton_ResumeLast_C* ResumeLastProspectButton; 
	struct UUMG_BasicButton_2_C* ReturnButton; 
	struct UNamedSlot* SoloTalentSlot; 
	struct UUMG_ButtonIcon_C* TalentButtonIcon; 
	struct UWidgetSwitcher* Talents; 
	struct UUMG_BasicButton_2_C* TalentsButton; 
	struct UUMG_BasicButton_2_C* TechTreeButton; 
	struct UUMG_ButtonIcon_C* TechTreeIcon; 
	struct UTextBlock* TextBlock_CharacterLevel; 
	struct UUMG_AccoladeScreen_C* UMG_AccoladeScreen_C_4; 
	struct UUMG_FieldGuide_C* UMG_FieldGuide; 
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt; 
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_2; 
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_3; 
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_4; 
	struct UUMG_MetaResourceDisplay_C* UMG_MetaResourceDisplay; 
	struct UUMG_ProspectHistoryList_C* UMG_ProspectHistoryList; 
	struct UUMG_ProspectTracker_C* UMG_ProspectTracker; 
	struct UUMG_SettledProspectTracker_C* UMG_SettledProspectTracker; 
	struct UWidgetSwitcher* WidgetSwitcher_PlayerProgression; 
	struct FOnlineProfileCharacter CachedActiveCharacter; 
	struct FCurrencyConversionsRowHandle ConverstionRow; 
	struct UUMG_ConfirmationPopup_C* ConfirmationPopup; 
	bool IsShowingNewOptions; 
	struct FAccountFlagsRowHandle NewGameTutorialAccountFlag; 

	void ShowFieldGuideItem(struct FFieldGuideCategoriesRowHandle Category, struct FItemsStaticRowHandle Item, bool ForceShowNone); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowFieldGuide(); // (Public|BlueprintCallable|BlueprintEvent)
	void ShouldShowNewGameTutorialPrompt(bool& ShouldShow); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void SwitchTalents(bool Solo); // (Public|BlueprintCallable|BlueprintEvent)
	void InitCharacterData(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ContractUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__LeaveSessionButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__TalentsButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__TechTreeButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__Button_ReturnFromPlayerProgression_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(); // (BlueprintEvent)
	void CustomisationComplete(bool Success, struct FOnlineProfileCharacter NewCharacterInfo); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_SpaceMenus_TopLevel_TechTreeButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_SpaceMenus_TopLevel_NewButton_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpaceMenus_TopLevel_NewButton_K2Node_ComponentBoundEvent_8_OnUnhovered__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpaceMenus_TopLevel_NewButton_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_SpaceMenus_TopLevel_FieldGuideButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void OnClose(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_SpaceMenus_TopLevel_TalentButtonIcon_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpaceMenus_TopLevel_AccoladesIcon_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpaceMenus_TopLevel_CharacterSelectIcon_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpaceMenus_TopLevel_FieldGuideIcon_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpaceMenus_TopLevel_TechTreeIcon_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_SpaceMenus_TopLevel_BackButton_K2Node_ComponentBoundEvent_15_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_SpaceMenus_TopLevel_CustomizeIcon_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_SpaceMenus_TopLevel(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

