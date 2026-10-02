// WidgetBlueprintGeneratedClass UMG_HabitatTerminal.UMG_HabitatTerminal_C
struct UUMG_HabitatTerminal_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_BasicButton_2_C* BackButton; 
	struct UWidgetSwitcher* BrowserSwitcher; 
	struct UUMG_BasicButton_2_C* Cancel; 
	struct UUMG_HostProspectsList_C* DedicatedServerBrowser; 
	struct UBorder* Loading; 
	struct UUMG_CloseButton_2_C* OpenProspectCloseButton; 
	struct UBorder* OpenProspectOverlay; 
	struct UUMG_OpenProspectWindow_C* OpenProspectScreen; 
	struct UNamedSlot* OutpostMenuSlot; 
	struct UBorder* PlanetImageBG; 
	struct UBorder* PlanetView; 
	struct UUMG_BasicButton_2_C* PlanetViewButton; 
	struct UNamedSlot* ProspectMenuSlot; 
	struct UBorder* ProspectServerBrowser; 
	struct UWidgetSwitcher* ProspectTypeSwitcher; 
	struct UHorizontalBox* ProviderBox; 
	struct UHorizontalBox* ProviderBox2; 
	struct UUMG_BasicButton_2_C* Refresh; 
	struct UUMG_CloseButton_2_C* SelectedOutpostCloseButton; 
	struct UBorder* SelectedOutpostOverlay; 
	struct UUMG_OutpostSelected_C* SelectedOutpostScreen; 
	struct UUMG_CloseButton_2_C* SelectedProspectCloseButton; 
	struct UBorder* SelectedProspectOverlay; 
	struct UUMG_PlanetProspectSelected_C* SelectedProspectScreen; 
	struct UUMG_HostProspectsList_C* ServerBrowser; 
	struct UUMG_BasicButton_2_C* ServerBrowserButton; 
	struct UWidgetSwitcher* Switcher; 
	struct UCircularThrobber* ThrobberRefresh; 
	struct UUMG_LoadingIcon_C* UMG_LoadingIcon; 
	struct UUMG_MultiToggle_C* UMG_MultiToggle; 
	struct UUMG_PlanetProspectView_C* UMG_PlanetProspectView; 
	struct UUMG_RevisionNumber_C* UMG_RevisionNumber; 
	struct FMulticastInlineDelegate ProspectsUpdated; 
	struct FFProspectServerInfo Working Prospect Info; 
	struct TArray<struct UFMODEvent*> BriefingAudio; 
	struct FFMODEventInstance BriefingAudioEvent; 
	struct FMulticastInlineDelegate CloseTerminal; 
	struct UUMG_OpenProspectWindow_C* OpenProspectWindow; 
	struct UUMG_PasswordInput_C* PasswordInput; 
	struct UUMG_OpenWorldSelection_C* OpenWorldSelectionWindow; 
	struct FString GPortalLink; 
	struct FString NitradoLink; 
	struct FString SurvivalLink; 
	struct FString StreamlineLink; 
	struct TArray<struct FString> ProviderLinks; 
	struct TArray<struct UTexture2D*> ProviderImages; 
	struct TArray<enum class EStretch> In Stretch; 

	void UpdateMatchmakingState(int32_t Index); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateRefreshButtonState(); // (Public|BlueprintCallable|BlueprintEvent)
	void ServerProviderSetup(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OpenWorldProspectSelected(struct FProspectListRowHandle Prospect); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SwitchToHostOpenWorld(); // (Public|BlueprintCallable|BlueprintEvent)
	struct TArray<struct FFProspectServerInfo> ConvertDedicatedServerSessions(struct TArray<struct FBlueprintSessionResult>& Sessions); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SwitchToResumeProspect(); // (Public|BlueprintCallable|BlueprintEvent)
	bool ResetProspectView(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SwitchToHostOutpost(); // (Public|BlueprintCallable|BlueprintEvent)
	void SwitchToJoin(); // (Public|BlueprintCallable|BlueprintEvent)
	void SwitchToHost(); // (Public|BlueprintCallable|BlueprintEvent)
	void Log(struct FString Description); // (Public|BlueprintCallable|BlueprintEvent)
	void OnOpened(); // (Public|BlueprintCallable|BlueprintEvent)
	void ProspectSelected(struct FFProspectServerInfo Prospect, bool Active); // (BlueprintCallable|BlueprintEvent)
	void ProspectClosed(); // (BlueprintCallable|BlueprintEvent)
	void ClaimAndLaunchProspect(struct FFProspectServerInfo Prospect Info); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__Refresh_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void JoinProspect(struct FFProspectServerInfo ProspectInfo); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__ServerBrowserButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ProspectModelViewChanged(struct UTalentControllerComponent* Controller); // (BlueprintCallable|BlueprintEvent)
	void TalentProspectSelected(struct FFProspectServerInfo ProspectInfo, struct FText Error); // (BlueprintCallable|BlueprintEvent)
	void SetupProspectTalentScreen(); // (BlueprintCallable|BlueprintEvent)
	void HideCloseButton(struct UUMG_ButtonBase_C* Button); // (BlueprintCallable|BlueprintEvent)
	void OutpostModelViewChanged(struct UTalentControllerComponent* Controller); // (BlueprintCallable|BlueprintEvent)
	void TalentOutpostSelected(struct FFProspectServerInfo ProspectInfo); // (BlueprintCallable|BlueprintEvent)
	void OutpostSelected(struct FFProspectServerInfo Prospect, bool Active); // (BlueprintCallable|BlueprintEvent)
	void OutpostClosed(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__PlanetViewButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ShowCloseButton_Event_1(); // (BlueprintCallable|BlueprintEvent)
	void ShowOutpostCloseButton(struct UUMG_ButtonBase_C* Button); // (BlueprintCallable|BlueprintEvent)
	void Opened(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_HabitatTerminal_BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_HabitatTerminal_UMG_MultiToggle_K2Node_ComponentBoundEvent_3_MultiToggleStateChanged__DelegateSignature(int32_t PreviousToggleIndex, int32_t CurrentToggleIndex); // (BlueprintEvent)
	void OptionAClicked(); // (BlueprintCallable|BlueprintEvent)
	void OptionBClicked_Event(); // (BlueprintCallable|BlueprintEvent)
	void PasswordCheck(); // (BlueprintCallable|BlueprintEvent)
	void ConfirmPassword(); // (BlueprintCallable|BlueprintEvent)
	void CancelPassword(); // (BlueprintCallable|BlueprintEvent)
	void ReturnToTopLevel(); // (BlueprintCallable|BlueprintEvent)
	void CloseResumeProspect(); // (BlueprintCallable|BlueprintEvent)
	void ResetOpenProspectOverlay(); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_HabitatTerminal_Cancel_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BackButtonClicked(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_HabitatTerminal(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void CloseTerminal__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void ProspectsUpdated__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

