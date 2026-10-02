// WidgetBlueprintGeneratedClass UMG_UserInterface_Base.UMG_UserInterface_Base_C
struct UUMG_UserInterface_Base_C : UUserInterfaceBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TMap<struct FKey, struct FStaticWidget> StaticWidgets; 
	struct TMap<struct FKey, bool> ImportantKeys; 
	struct TMap<enum class EModifierKeys, struct FFModifierKeyValues> ModifierKeys; 
	struct UWidget* FocusedWidget; 
	struct UIcarusWidget* OldFocusedWidget; 
	struct UUMG_CheatOverlay_C* CheatOverlay; 
	bool CreatedCheatOverlay; 
	struct FMulticastInlineDelegate OnHidePanelDisplay; 
	struct FMulticastInlineDelegate OnMenuOpened; 
	bool HiddenByUser; 
	struct FMulticastInlineDelegate OnDynamicWidgetDisplayed; 
	struct FMulticastInlineDelegate OnEscapeMenuOpened; 

	void OnPlayerPostLogin(struct APlayerController* Player); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateGamePauseState(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetFullscreenPopupSlot(struct UNamedSlot*& NamedPopupSlot); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetMap(struct UIcarusMapScreenBase*& Radar); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void CollapseIcarusLogVisibilty(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetIcarusLogWindow(struct UUMG_ClientLogging_C*& LogWindow); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ToggleIcarusLogVisibility(); // (Public|BlueprintCallable|BlueprintEvent)
	void RemoveCustomPopup(struct UUserWidget* PopupWidget); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowCustomPopup(struct UUserWidget* PopupWidget); // (Public|BlueprintCallable|BlueprintEvent)
	void SetHiddenByUser(bool NewHiddenByUser); // (Public|BlueprintCallable|BlueprintEvent)
	void SetForceShowCrosshair(bool ForceShowCrosshair); // (Public|BlueprintCallable|BlueprintEvent)
	void GetConfirmationOverlay(struct UOverlay*& Overlay); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ToggleStatDebugger(); // (Public|BlueprintCallable|BlueprintEvent)
	void IsShowingRadialMenu(bool& ShowingRadialMenu); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void RemoveRadialMenu(struct UUserWidget* RadialMenu); // (Public|BlueprintCallable|BlueprintEvent)
	void AddRadialMenu(struct UUserWidget* RadialMenu); // (Public|BlueprintCallable|BlueprintEvent)
	void GetSize(struct FVector2D& Size); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct UConfirmationPopupBase* GetConfirmationPopup(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetMaxProjectionWidgets(int32_t& MaxProjectionWidgetCount); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetMaxProjectionWidgets(int32_t NewMaxWidgetCount); // (Public|BlueprintCallable|BlueprintEvent)
	void GetDialogue(struct UUMG_Dialogue_C*& Dialogue); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetCheatOverlay(struct UUMG_CheatOverlay_C*& Overlay); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Show Game Message(bool Error, struct FText Message, float LifeTimeOverride); // (Public|BlueprintCallable|BlueprintEvent)
	void WidgetFocusGained(struct UIcarusWidget* Widget); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void WidgetFocusLost(struct UIcarusWidget* Widget); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ToggleEscapeMenu(); // (Public|BlueprintCallable|BlueprintEvent)
	void IsSpace?(bool& InSpace); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void HideLoadingScreen(); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowLoadingScreen(struct FText Optional Message, struct UWidget* OptionalWidget); // (Public|BlueprintCallable|BlueprintEvent)
	void HideErrorCode(); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowErrorCode(struct FErrorCodesEnum ErrorCode, struct FString ErrorInfo); // (Public|BlueprintCallable|BlueprintEvent)
	void OpenEscapeMenu(); // (Public|BlueprintCallable|BlueprintEvent)
	void IsMenuVisible(bool& Visible); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void EscapeKeyPressed(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetCheatContext(enum class ECheatContext& Context); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ToggleCheatMenu(); // (Public|BlueprintCallable|BlueprintEvent)
	struct UW_ProjectionInterface_C* GetProjectionInterface(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetConfirmationWindow(struct UUMG_ConfirmationPopup_C*& ConfirmationWidget); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void FixFocus(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetFocusWidget(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetCursorWidget(struct UUMG_CursorWidget_C*& CursorWidget); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void FocusStaticWidget(enum class EStaticUIWidgets Panel); // (Public|BlueprintCallable|BlueprintEvent)
	void Reset(); // (Public|BlueprintCallable|BlueprintEvent)
	void HidePanelDisplay(); // (Public|BlueprintCallable|BlueprintEvent)
	void ClearModifierKeys(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsKeyDown(enum class EModifierKeys Key, bool& KeyHeld); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InputTypeApplied(enum class EInputTypeSetting Value); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnWindowReceivedFocus(); // (BlueprintCallable|BlueprintEvent)
	void ErrorRequested(struct FErrorCodesEnum ErrorCode); // (BlueprintCallable|BlueprintEvent)
	void CreateCheatOverlay(); // (BlueprintCallable|BlueprintEvent)
	void DisplayIcarusError(struct FErrorCodesEnum OutgoingError, struct FString ErrorInfo); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_UserInterface_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnEscapeMenuOpened__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnDynamicWidgetDisplayed__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnMenuOpened__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnHidePanelDisplay__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

