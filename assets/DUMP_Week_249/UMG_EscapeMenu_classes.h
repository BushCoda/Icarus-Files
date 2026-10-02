// WidgetBlueprintGeneratedClass UMG_EscapeMenu.UMG_EscapeMenu_C
struct UUMG_EscapeMenu_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* EscapeButtons; 
	struct UImage* Gradient; 
	struct UOverlay* PartyMembers; 
	struct UOverlay* Recommendations; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_Continue; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_CorpseUnstuck; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_Mission_Resupply; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_ProspectSettings; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_Quit; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_ReportIssue; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_ReturnToMM; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_Settings; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_Unstuck; 
	struct UUMG_ButtonIcon_C* UMG_ButtonIcon; 
	struct UUMG_ConnectionLost_C* UMG_ConnectionLost; 
	struct UUMG_DisconnectionPopup_C* UMG_DisconnectionPopup; 
	struct UUMG_MissionTimer_C* UMG_MissionTimer; 
	struct UUMG_NetworkDebugInfo_C* UMG_NetworkDebugInfo; 
	struct UUMG_Party_C* UMG_Party; 
	struct UUMG_ProspectInfoDebug_C* UMG_ProspectInfoDebug; 
	struct UUMG_RecommendedObjects_C* UMG_RecommendedObjects; 
	struct UUMG_RevisionNumber_C* UMG_RevisionNumber; 
	struct UUMG_SettingsMenu_C* UMG_SettingsMenu; 
	struct UUMG_SpaceMenuHeader_C* UMG_SpaceMenuHeader; 
	struct FSessionFlagsRowHandle ResupplyAvailable; 
	float ResupplyTime; 
	int32_t ResupplyCooldown; 
	struct FTimerHandle ResupplyTimer; 

	void UpdateProspectSettingsButton(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnCustomSettingsChanged(struct TArray<struct FCustomGameSetting>& NewSettingValues); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OpenCustomSettingsWindow(enum class ECustomGameStatChangeability CurrentContext, struct TArray<struct FCustomGameSetting>& CurrentSettings); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void AddExtraInfoForSentry(struct TMap<struct FString, struct FString> InTags, struct TMap<struct FString, struct FString>& OutTags); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsHostWithClients(bool& Result); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Initialize(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetFocusWidget(bool& bValid, struct UWidget*& Widget, bool& bThis); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnFailure_E44064B942B297EF26C3B1A920D3D5C3(); // (BlueprintCallable|BlueprintEvent)
	void OnSuccess_E44064B942B297EF26C3B1A920D3D5C3(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BasicButton_Return_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_BasicButton_Exit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void QuitGame(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BasicButton_ReturnToMM_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void LeaveToMainMenu(); // (BlueprintCallable|BlueprintEvent)
	void BackSettingsMenu(struct UUMG_ButtonBase_C* Button); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BasicButton_Settings_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void DoNothing(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BasicButton_Unstuck_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void On Visibility Changed(enum class ESlateVisibility InVisibility); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_EscapeMenu_UMG_BasicButton_ReportIssue_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void SendSentryReport(); // (BlueprintCallable|BlueprintEvent)
	void CloseDialog(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_EscapeMenu_UMG_BasicButton_Mission_Resupply_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void OnSessionFlagsUpdated(); // (BlueprintCallable|BlueprintEvent)
	void Timer(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_EscapeMenu_UMG_BasicButton_CorpseUnstuck_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void UpdateDLSSMode(bool Enabled); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_EscapeMenu_UMG_BasicButton_ReportIssue_1_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_EscapeMenu_UMG_ButtonIcon_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(); // (BlueprintEvent)
	void CloseEscapeMenu(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_EscapeMenu(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

