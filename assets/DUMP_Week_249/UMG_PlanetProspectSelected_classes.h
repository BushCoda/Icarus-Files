// WidgetBlueprintGeneratedClass UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C
struct UUMG_PlanetProspectSelected_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* ShowMain; 
	struct UWidgetAnimation* SwitchAnimation; 
	struct UWidgetAnimation* OpenAnimation; 
	struct UUMG_BasicButton_2_C* Button_CustomGameSettings; 
	struct UBorder* CannotJoinWarning; 
	struct UUMG_BasicButton_2_C* ClaimProspectButton; 
	struct UBorder* ColourCornerInsurance; 
	struct UImage* Corner; 
	struct UImage* Corner_2; 
	struct UImage* Corner_3; 
	struct UImage* Corner_4; 
	struct UBorder* CornerColourHardcore; 
	struct UHorizontalBox* Currency; 
	struct UTextBlock* Days_3; 
	struct UTextBlock* Days_4; 
	struct UTextBlock* Days_5; 
	struct UTextBlock* Days_6; 
	struct UTextBlock* DaysText; 
	struct UTextBlock* DescriptionText; 
	struct UTextBlock* DifficultyTitle; 
	struct UImage* divider; 
	struct UImage* divider_2; 
	struct UImage* divider1; 
	struct UImage* divider1_2; 
	struct UTextBlock* FlavourText; 
	struct UImage* Gradient; 
	struct UBorder* HardcoreBG; 
	struct UUMG_Checkbox_C* HardcoreCheck; 
	struct UTextBlock* HardcoreHelperText; 
	struct UOverlay* HardcoreMissionOverlay; 
	struct UTextBlock* HardcoreTitle; 
	struct UUMG_BasicButton_2_C* HostProspectButton; 
	struct UTextBlock* Hours; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_141; 
	struct UImage* Image_219; 
	struct UImage* Image_336; 
	struct UBorder* InsuranceBG; 
	struct UUMG_Checkbox_C* InsuranceCheck; 
	struct UTextBlock* InsuranceHelperText; 
	struct UTextBlock* InsuranceTitle; 
	struct UVerticalBox* JoinHostButtons; 
	struct UUMG_BasicButton_2_C* JoinProspectButton; 
	struct USizeBox* Loadout; 
	struct UBorder* LoadoutOverlay; 
	struct UBorder* LobbyBorder; 
	struct UImage* LowTimeWarningIcon; 
	struct UOverlay* Main; 
	struct USizeBox* MaxAssignedError; 
	struct USizeBox* MaxPlayersError; 
	struct UImage* menupattern; 
	struct UTextBlock* Minutes; 
	struct UVerticalBox* MissionDuration; 
	struct UVerticalBox* MissionSettings; 
	struct UTextBlock* MoreRewards_Hardcore; 
	struct UTextBlock* MoreRewards_Insurance; 
	struct UVerticalBox* PlayerList; 
	struct UTextBlock* ProspectName; 
	struct UImage* ProspectTexture; 
	struct UVerticalBox* Rewards; 
	struct UTextBlock* Seconds; 
	struct UOverlay* SettingsOverlay; 
	struct UUMG_LoadingIcon_C* SettleLoading; 
	struct UUMG_BasicButton_2_C* SettleProspectButton; 
	struct UBorder* TimeBorder; 
	struct UBorder* TimeColourBorder; 
	struct UImage* Trim1; 
	struct UImage* Trim2; 
	struct UUMG_DifficultySelect_C* UMG_DifficultySelect; 
	struct UUMG_LoadoutSelection_C* UMG_LoadoutSelection; 
	struct UUMG_MissionDifficulty_C* UMG_MissionDifficulty; 
	struct UUMG_MissionSpecialRewards_C* UMG_MissionSpecialRewards; 
	struct UUMG_PlayerListEntry_C* UMG_PlayerListEntry; 
	struct UUMG_PlayerListEntry_C* UMG_PlayerListEntry_2; 
	struct UUMG_PlayerListEntry_C* UMG_PlayerListEntry_3; 
	struct UUMG_PlayerListEntry_C* UMG_PlayerListEntry_4; 
	struct UUMG_PlayerListEntry_C* UMG_PlayerListEntry_5; 
	struct UUMG_PlayerListEntry_C* UMG_PlayerListEntry_6; 
	struct UUMG_PlayerListEntry_C* UMG_PlayerListEntry_7; 
	struct UUMG_PlayerListEntry_C* UMG_PlayerListEntry_8; 
	struct UUMG_ProspectObjectiveList_C* UMG_ProspectObjectiveList; 
	struct UUMG_WorkshopCostLarge_C* UMG_WorkshopCostLarge; 
	struct UUMG_WorkshopCostLarge_C* UMG_WorkshopCostLarge_2; 
	struct UVerticalBox* WorldStats; 
	struct FMulticastInlineDelegate StartSelectedProspect; 
	struct UUMG_ProspectPin_C* SelectedProspectPin; 
	bool Settled; 
	struct FFProspectServerInfo Prospect Info; 
	struct FMulticastInlineDelegate HostProspect; 
	struct FMulticastInlineDelegate ClaimProspect; 
	struct FMulticastInlineDelegate JoinProspect; 
	struct UUMG_CloseButton_2_C* Close Button; 
	struct FMulticastInlineDelegate SettleProspect; 
	bool Claim; 
	struct FMulticastInlineDelegate ShowCloseButton; 
	struct UFMODEvent* FMODEvent_AcceptClaimProspect; 
	bool HardcoreFlag; 
	enum class EMissionDifficulty CachedDifficulty; 
	enum class EMissionDifficulty LockedInDifficulty; 
	struct FPlayerLoadoutData PendingLoadout; 
	struct TArray<enum class EMissionDifficulty> ValidDifficulties; 
	struct UUMG_TerrainButtonPromptContents_C* DifficultyWarningPromptContents; 
	struct FAccountFlagsRowHandle LevelBoostAccountFlag; 
	int32_t LevelBoostTo; 
	struct FText DifficultyWarningPrompt; 
	struct TArray<struct FCustomGameSetting> CustomSettings; 

	void ValidateCustomGameSettings(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GrantLevelBoost(); // (Public|BlueprintCallable|BlueprintEvent)
	void ShouldShowWarningMessage(bool& Show); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ShouldShowLevelBoostPrompt(bool& Show); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ClearPendingLoadout(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetPendingLoadout(struct FPlayerLoadoutData& PendingLoadoutData); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetMultiplayerState(struct FFProspectServerInfo Prospect); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateRewards(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetSelectedProspectInfo(struct FFProspectServerInfo& Prospect Info); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateCompletionText(struct FFactionMissionsRowHandle RowHandle); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateWorldStats(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReadyCheck(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdatePlayerList(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Initialise(struct UUMG_CloseButton_2_C* CloseButton); // (Public|BlueprintCallable|BlueprintEvent)
	void SetTime(struct TArray<struct FString>& Time); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShowSelectedProspect(struct FFProspectServerInfo Prospect, bool Active, bool SkipAnimation); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnFailure_6A3406D34D6989803C8B84813F106342(struct FErrorCodesEnum Result, struct FString ExtraErrorInfo); // (BlueprintCallable|BlueprintEvent)
	void OnSuccess_6A3406D34D6989803C8B84813F106342(struct FErrorCodesEnum Result, struct FString ExtraErrorInfo); // (BlueprintCallable|BlueprintEvent)
	void OnFailure_39B8951B40750D4BA0F6A8BA5082E1DC(struct FErrorCodesEnum Result, struct FString ExtraErrorInfo); // (BlueprintCallable|BlueprintEvent)
	void OnSuccess_39B8951B40750D4BA0F6A8BA5082E1DC(struct FErrorCodesEnum Result, struct FString ExtraErrorInfo); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_PlanetProspectSelected_UMG_LoadoutSelection_K2Node_ComponentBoundEvent_4_ConfirmLoadout__DelegateSignature(struct FPlayerLoadoutData Loadout); // (BlueprintEvent)
	void AcceptClaim(); // (BlueprintCallable|BlueprintEvent)
	void RejectClaim(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_PlanetProspectSelected_UMG_LoadoutSelection_K2Node_ComponentBoundEvent_5_Back__DelegateSignature(); // (BlueprintEvent)
	void OnLobbyPrivacyChanged(); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void HardcoreCheckboxUpdated(bool Checked, bool WasForced); // (BlueprintCallable|BlueprintEvent)
	void InsuranceCheckboxUpdated(bool Checked, bool WasForced); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_PlanetProspectSelected_UMG_DifficultySelect_K2Node_ComponentBoundEvent_6_DifficultyUpdated__DelegateSignature(enum class EMissionDifficulty Difficulty); // (BlueprintEvent)
	void ManuallyUpdateDifficulty(enum class EMissionDifficulty CachedDifficulty); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__ClaimProspectButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__EndProspectButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__HostProspectButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SettleProspectResultHandler(bool Success, struct FProspectInfo& ProspectInfo); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateSettleButton(struct FProspectInfo ServerInfo); // (BlueprintCallable|BlueprintEvent)
	void CompleteJoinProspect(); // (BlueprintCallable|BlueprintEvent)
	void BoostButtonClicked(); // (BlueprintCallable|BlueprintEvent)
	void CancelWarningPrompt(); // (BlueprintCallable|BlueprintEvent)
	void ConfirmWarningPrompt(); // (BlueprintCallable|BlueprintEvent)
	void Join_TryShowDifficultyWarning(); // (BlueprintCallable|BlueprintEvent)
	void Join_ShowLoadoutSelection(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__JoinProspectButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_PlanetProspectSelected_Button_CustomGameSettings_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void OnCustomSettingsUpdated(struct TArray<struct FCustomGameSetting>& NewSettingValues); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_PlanetProspectSelected(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ShowCloseButton__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void SettleProspect__DelegateSignature(struct FFProspectServerInfo Prospect Info, bool Settle); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void JoinProspect__DelegateSignature(struct FFProspectServerInfo ProspectInfo); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void ClaimProspect__DelegateSignature(struct FFProspectServerInfo ProspectInfo); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void HostProspect__DelegateSignature(struct FFProspectServerInfo ProspectInfo); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void StartSelectedProspect__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

