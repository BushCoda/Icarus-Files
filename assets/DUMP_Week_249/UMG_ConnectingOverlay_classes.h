// WidgetBlueprintGeneratedClass UMG_ConnectingOverlay.UMG_ConnectingOverlay_C
struct UUMG_ConnectingOverlay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* ShowDLCBadges; 
	struct UWidgetAnimation* DoubleXPFadeIn; 
	struct UWidgetAnimation* ShowDHPurchaseButton; 
	struct UWidgetAnimation* ShowCompetitionPanel; 
	struct UWidgetAnimation* HideConnectingPrompt; 
	struct UWidgetAnimation* ShowSidePanel; 
	struct UWidgetAnimation* ShowAnnouncementPanel; 
	struct UWidgetAnimation* ShowMenuButtons; 
	struct UWidgetAnimation* FadeOut; 
	struct UImage* AnnouncementBlack; 
	struct UUMG_CloseButton_2_C* AnnouncementScreenCloseButton; 
	struct UButton* Button_PurchaseDH; 
	struct UUMG_BasicButton_2_C* ButtonCredits; 
	struct UUMG_BasicButton_2_C* ButtonDemo; 
	struct UUMG_BasicButton_2_C* ButtonExit; 
	struct UUMG_BasicButton_2_C* ButtonOffline; 
	struct UUMG_BasicButton_2_C* ButtonPlay; 
	struct UUMG_BasicButton_2_C* ButtonSettings; 
	struct UHorizontalBox* ConnectingHbox; 
	struct UBorder* ConnectingPromptBorder; 
	struct UHorizontalBox* ConnectingSteam; 
	struct UUMG_ExternalTitleButton_C* Discord; 
	struct UUMG_ExternalTitleButton_C* Feedback; 
	struct UCanvasPanel* FrontLayer; 
	struct UImage* Gradient; 
	struct UImage* Logo; 
	struct UImage* Logo_DH; 
	struct UVerticalBox* MainButtonVertBox; 
	struct UHorizontalBox* PakMeta; 
	struct UUMG_ButtonIcon_C* PakMetaCopy; 
	struct UUMG_InfoHover_C* PakMetaHover; 
	struct UImage* PakMetaImage; 
	struct UTextBlock* PakMetaMessage; 
	struct UUMG_ExternalTitleButton_C* PatchNotes; 
	struct UImage* person; 
	struct UUMG_BasicButton_2_C* ShowRoadmapButton; 
	struct UImage* Smoke; 
	struct UImage* SpaceFiller; 
	struct UHorizontalBox* SteamLocalAdmin; 
	struct UTextBlock* TextBlock_PurchaseDH; 
	struct UTextBlock* TextBlock_RetryStatus; 
	struct UTextBlock* TextBlock_Status; 
	struct UUMG_AnnouncementPanel_C* UMG_AnnouncementPanel; 
	struct UUMG_CreditsPage_C* UMG_CreditsPage_C_3; 
	struct UUMG_CriticalMassTrailer_Button_C* UMG_CriticalMassTrailer_Button; 
	struct UUMG_DLCBadgeContainer_C* UMG_DLCBadgeContainer; 
	struct UUMG_DoubleXPEvent_C* UMG_DoubleXPEvent; 
	struct UUMG_FatalSkyTrailerButton_C* UMG_FatalSkyTrailerButton; 
	struct UUMG_LatestPatchNotesButton_C* UMG_LatestPatchNotesButton; 
	struct UUMG_LoadingIcon_C* UMG_LoadingIcon; 
	struct UUMG_SeekerTrailerButton_C* UMG_SeekerTrailerButton; 
	struct UUMG_SettingsMenu_C* UMG_SettingsMenu; 
	struct UUMG_TitleScreenTrailerButton_C* UMG_TitleScreenTrailerButton; 
	struct UIcarusMessageListeners* IcarusMessageListener; 
	struct FText RetryStatusFormat; 
	bool ContentServerConnectionComplete; 
	struct UOfflineAccountMigrator* OfflineAccountMigratorTest; 
	struct UUMG_UserInterface_TitleScreen_C* UserInterfaceRef; 
	struct FString MigrationFailureMsg; 
	bool ForceDataMigration; 
	struct FPakMetaDetail PakMetaDetail; 

	void IsEscapeMenuDisabled(bool& Disabled); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Show Pak Meta Popup if Required(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetPakMetaShortMessage(struct FPakMetaDetail PakDetail, struct FText& OutMessage); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetPakMetaLongMessage(struct FPakMetaDetail PakDetail, struct FText& MessageOut); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheckPakMeta(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DoNothing(); // (Public|BlueprintCallable|BlueprintEvent)
	void Log(struct FString Description); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowCharacterSelectScreen(); // (Public|BlueprintCallable|BlueprintEvent)
	void Initialise(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Finished_E78F06674F46BAE2FA5469B944A0976A(); // (BlueprintCallable|BlueprintEvent)
	void OnFail_2E20AAC94911EA94788DB58E9DB4C4EF(struct FResGetUserProfile& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnSuccess_2E20AAC94911EA94788DB58E9DB4C4EF(struct FResGetUserProfile& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnFail_721D4B3242A6C8BE1C7381BDBF55A696(struct FResGetUserProfile& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnSuccess_721D4B3242A6C8BE1C7381BDBF55A696(struct FResGetUserProfile& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void MoveToCharacterSelection(); // (BlueprintCallable|BlueprintEvent)
	void QuitGame(); // (BlueprintCallable|BlueprintEvent)
	void EscapeKeyPressed(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__ButtonExit_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void OnContentServerConnectionSuccess(); // (BlueprintCallable|BlueprintEvent)
	void CheckIfConnectionFinished(); // (BlueprintCallable|BlueprintEvent)
	void UpdateConnectingProgress(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void OnConnectMessageEvent(bool bSuccess); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void CloseSettings(struct UUMG_ButtonBase_C* Button); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__ShowRoadmapButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_CloseButton_2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(); // (BlueprintEvent)
	void LoginFailed(enum class ELoginFailure ErrorCode); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__ButtonOffline_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_ConnectingOverlay_ButtonCredits_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void CloseCredits(struct UUMG_ButtonBase_C* Button); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_ConnectingOverlay_Discord_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_ConnectingOverlay_PatchNotes_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_ConnectingOverlay_Feedback_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature(); // (BlueprintEvent)
	void GetOwnedPackageIds(); // (BlueprintCallable|BlueprintEvent)
	void RetryFetchPackages(); // (BlueprintCallable|BlueprintEvent)
	void ShowMigrationError(); // (BlueprintCallable|BlueprintEvent)
	void DoNothing2(); // (BlueprintCallable|BlueprintEvent)
	void Visbility_Changed(enum class ESlateVisibility InVisibility); // (BlueprintCallable|BlueprintEvent)
	void FrameGenerationUpdated(bool Value); // (BlueprintCallable|BlueprintEvent)
	void UpdateDLSSMode(bool Enabled); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_ConnectingOverlay_PakMetaCopy_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_ConnectingOverlay_Button_PurchaseDH_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_ConnectingOverlay_Button_PurchaseDH_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_ConnectingOverlay_ButtonDemo_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_ConnectingOverlay(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

