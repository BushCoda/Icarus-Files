// WidgetBlueprintGeneratedClass UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C
struct UUMG_UserInterfaceSpace_C : UUMG_UserInterface_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UOverlay* ConfirmationOverlay; 
	struct USizeBox* ConfirmationSizeBox; 
	struct USizeBox* CursorItemSize; 
	struct UScaleBox* CursorScaleBox; 
	struct UOverlay* CustomPopupLayer; 
	struct UCanvasPanel* Debug; 
	struct UBorder* ErrorCodeBox; 
	struct UScaleBox* ErrorCodeScaleBox; 
	struct UScaleBox* FullScreenPopupScaleBox; 
	struct UNamedSlot* FullScreenPopupSlot; 
	struct UTextBlock* GameVersionNumber; 
	struct UUMG_ButtonIcon_C* HUDUnreadNotificationIcon; 
	struct UScaleBox* JoiningGameScaleBox; 
	struct UScaleBox* LoadingScreenScaleBox; 
	struct USizeBox* Loadout; 
	struct UScaleBox* LoadoutConfirmationBox; 
	struct UBorder* LoadoutOverlay; 
	struct UScaleBox* MainDisplayScaleBox; 
	struct UUMG_ButtonIcon_C* MenuNotificationButton; 
	struct UOverlay* Menus; 
	struct UWidgetSwitcher* ProspectSumarySwitcher; 
	struct UBorder* ProspectSummary; 
	struct UScaleBox* RadialScaleBox; 
	struct URetainerBox* RetainerBox_1; 
	struct UHorizontalBox* TABhint; 
	struct UImage* Target; 
	struct UBorder* TemporaryMouseWidget; 
	struct UUMG_CharacterInitialization_C* UMG_CharacterInitialization; 
	struct UUMG_Chatbox_C* UMG_Chatbox; 
	struct UUMG_ClientLogging_C* UMG_ClientLogging; 
	struct UUMG_ConfirmationPopup_C* UMG_ConfirmationPopup; 
	struct UUMG_CursorWidget_C* UMG_CursorWidget; 
	struct UUMG_ErrorCodeDisplay_C* UMG_ErrorCodeDisplay; 
	struct UUMG_EscapeMenu_C* UMG_EscapeMenu; 
	struct UUMG_InteractionPrompt_C* UMG_InteractionPrompt; 
	struct UUMG_IntroTips_Space_C* UMG_IntroTips_Space; 
	struct UUMG_Inventory_C* UMG_Inventory; 
	struct UUMG_JoiningGame_C* UMG_JoiningGame; 
	struct UUMG_LoadingScreen_C* UMG_LoadingScreen; 
	struct UUMG_LoadoutSelection_C* UMG_LoadoutSelection; 
	struct UUMG_MainMenu_Space_C* UMG_MainMenu_Space; 
	struct UUMG_Party_C* UMG_Party; 
	struct UUMG_Target_C* UMG_Target; 
	struct UW_ProjectionInterface_C* W_ProjectionInterface; 
	struct ABP_IcarusPlayerControllerSpace_C* PlayerController; 
	struct UUserWidget* CurrentDynamicWidget; 
	bool VerboseStatDebugging; 
	struct UMaterialInstanceDynamic* CurvedHudDynMat; 
	struct FRotator LastViewRot; 
	struct FVector DeltaRotation; 
	float ScreenWarpAmount; 
	struct UMaterialInstanceDynamic* SwayHudDynMat; 
	float ScreenSwayAmount; 
	float CADistance; 
	int32_t CASteps; 
	bool PendingProspectReward; 
	struct FResGetLastProspect ProspectReward; 
	struct UUMG_PasswordInput_C* PasswordInput; 
	struct FString InviteServerPassword; 
	struct UUserWidget* CurrentPopup; 

	void GetFullscreenPopupSlot(struct UNamedSlot*& NamedPopupSlot); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateFrameGeneration(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetIcarusLogWindow(struct UUMG_ClientLogging_C*& LogWindow); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void RemoveCustomPopup(struct UUserWidget* PopupWidget); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowCustomPopup(struct UUserWidget* PopupWidget); // (Public|BlueprintCallable|BlueprintEvent)
	void FocusDynamicWidget(struct UUserWidget* DynamicWidget); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ClearPendingLoadout(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetPendingLoadout(struct FPlayerLoadoutData Loadout); // (Public|BlueprintCallable|BlueprintEvent)
	void GetConfirmationOverlay(struct UOverlay*& Overlay); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CheckForProspectRewards(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateMissionSummaryVisibility(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnSessionInviteAccepted(struct FIcarusSession IcarusSession); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void HideProspectSummary(); // (Public|BlueprintCallable|BlueprintEvent)
	void ToggleEscapeMenu(); // (Public|BlueprintCallable|BlueprintEvent)
	void IsSpace?(bool& InSpace); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void HideLoadingScreen(); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowLoadingScreen(struct FText Optional Message, struct UWidget* OptionalWidget); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowErrorCode(struct FErrorCodesEnum ErrorCode, struct FString ErrorInfo); // (Public|BlueprintCallable|BlueprintEvent)
	void HideErrorCode(); // (Public|BlueprintCallable|BlueprintEvent)
	void EscapeKeyPressed(); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowMissionSummary(struct FNotification Notification, bool ShowCloseButton); // (Public|BlueprintCallable|BlueprintEvent)
	void OnCharacterSelected(); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowMailbox(); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowMainMenu(enum class ESpaceMainMenuOptions Option, bool& Success); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Toggle Inventory(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetCheatContext(enum class ECheatContext& Context); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct UW_ProjectionInterface_C* GetProjectionInterface(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetConfirmationWindow(struct UUMG_ConfirmationPopup_C*& ConfirmationWidget); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetCursorWidget(struct UUMG_CursorWidget_C*& CursorWidget); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void FocusStaticWidget(enum class EStaticUIWidgets Panel); // (Public|BlueprintCallable|BlueprintEvent)
	void HidePanelDisplay(); // (Public|BlueprintCallable|BlueprintEvent)
	void Reset(); // (Public|BlueprintCallable|BlueprintEvent)
	void IsMenuVisible_1(bool& Visible); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdatePlayerHighlighting(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void HideStaticWidgets(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShowTipsMenu(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetHUDVisibility(bool Visible); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowEscapeMenu(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Initialise(struct ABP_IcarusPlayerControllerSpace_C* Controller); // (Public|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void InitialiseHandInventory(); // (BlueprintCallable|BlueprintEvent)
	void OnItemAdded_Event_1(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void OnItemRemoved_Event_1(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void JoinSessionInvitedSession(); // (BlueprintCallable|BlueprintEvent)
	void DoNothing_Confirmation(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_UserInterfaceSpace_UMG_LoadoutSelection_K2Node_ComponentBoundEvent_0_ConfirmLoadout__DelegateSignature(struct FPlayerLoadoutData Loadout); // (BlueprintEvent)
	void BndEvt__UMG_UserInterfaceSpace_UMG_LoadoutSelection_K2Node_ComponentBoundEvent_1_Back__DelegateSignature(); // (BlueprintEvent)
	void OnConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void PasswordCheck(); // (BlueprintCallable|BlueprintEvent)
	void ConfirmPassword(); // (BlueprintCallable|BlueprintEvent)
	void CancelPassword(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_UserInterfaceSpace(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

