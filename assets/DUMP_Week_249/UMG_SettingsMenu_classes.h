// WidgetBlueprintGeneratedClass UMG_SettingsMenu.UMG_SettingsMenu_C
struct UUMG_SettingsMenu_C : USettingsMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_BasicButton_2_C* BackButton; 
	struct UHorizontalBox* CategoryBox; 
	struct UNamedSlot* ConfirmationSlot; 
	struct UImage* Gradient; 
	struct UUMG_BasicButton_2_C* ResetButton; 
	struct UTextBlock* SettingOptionDescription; 
	struct UWidgetSwitcher* Switcher; 
	struct UUMG_BasicButton_2_C* TuneButton; 
	struct FMulticastInlineDelegate SettingsBack; 
	bool IsDirty; 
	bool RestartRequested; 
	bool ShowRestartPopup; 
	bool HasInited; 
	bool ShowRTXWarning; 

	void ShowHideTuneButton(enum class ESettingsCategory Category); // (Public|BlueprintCallable|BlueprintEvent)
	void Setup(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetFocusWidget(bool& bValid, struct UWidget*& Widget, bool& bThis); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ResetSwitcherContent(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetContentState(enum class ESettingsCategory State); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Initialise(); // (Public|BlueprintCallable|BlueprintEvent)
	void Setting Hovered(struct UUMG_SettingRowBorder_C* Setting Object); // (BlueprintCallable|BlueprintEvent)
	void Setting Unhovered(struct UUMG_SettingRowBorder_C* Setting Object); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Category Toggled(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintCallable|BlueprintEvent)
	void On View Refresh(struct UUMG_SettingsView_C* View); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Dirty(); // (BlueprintCallable|BlueprintEvent)
	void On Visibility Changed(enum class ESlateVisibility InVisibility); // (BlueprintCallable|BlueprintEvent)
	void Save(bool bForce); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void On Restart Requested(struct FName SettingName); // (BlueprintCallable|BlueprintEvent)
	void Nothing(); // (BlueprintCallable|BlueprintEvent)
	void OnConfirmReset(); // (BlueprintCallable|BlueprintEvent)
	void OnCancelReset(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_SettingsMenu_TuneButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void OnConfirmTune(); // (BlueprintCallable|BlueprintEvent)
	void OnCancelTune(); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnRTXEnabledStateUpdated(bool Value); // (BlueprintCallable|BlueprintEvent)
	void ConfirmRTXEnabled(); // (BlueprintCallable|BlueprintEvent)
	void DisableRTX(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_SettingsMenu(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void SettingsBack__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

