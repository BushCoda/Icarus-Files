// WidgetBlueprintGeneratedClass UMG_OpenProspectWindow.UMG_OpenProspectWindow_C
struct UUMG_OpenProspectWindow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* ShowMain; 
	struct UWidgetAnimation* SwitchAnimation; 
	struct UWidgetAnimation* OpenAnimation; 
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
	struct UUMG_BasicButton_2_C* DeleteProspectButton; 
	struct UTextBlock* DescriptionText; 
	struct UImage* divider1; 
	struct UImage* divider1_2; 
	struct UTextBlock* FlavourText; 
	struct UBorder* HardcoreBG; 
	struct UUMG_Checkbox_C* HardcoreCheck; 
	struct UTextBlock* HardcoreHelperText; 
	struct UOverlay* HardcoreMissionOverlay; 
	struct UTextBlock* HardcoreTitle; 
	struct UHorizontalBox* HostDetailsRow; 
	struct UCircularThrobber* HostDetailsThrobber; 
	struct UImage* HostIcon; 
	struct UBorder* HostInfoPanel; 
	struct UTextBlock* HostName; 
	struct UTextBlock* Hours; 
	struct UUMG_BasicButton_2_C* LaunchProspectButton; 
	struct USizeBox* Loadout; 
	struct UImage* LowTimeWarningIcon; 
	struct UOverlay* Main; 
	struct UImage* menupattern; 
	struct UTextBlock* Minutes; 
	struct UVerticalBox* MissionDuration; 
	struct UBorder* Modifiers; 
	struct UTextBlock* MoreRewards_Hardcore; 
	struct UButton* NoLoadout; 
	struct UTextBlock* NoMissionRewards; 
	struct UTextBlock* NoMissionTimer; 
	struct UVerticalBox* PlayerList; 
	struct UBorder* PlayerListContainer; 
	struct UVerticalBox* ProspectList; 
	struct UTextBlock* ProspectName; 
	struct UImage* ProspectTexture; 
	struct UVerticalBox* Rewards; 
	struct UTextBlock* SaveName; 
	struct UTextBlock* Seconds; 
	struct UUMG_LoadingIcon_C* SettleLoading; 
	struct UTextBlock* TextBlock_NotAssociated; 
	struct UHorizontalBox* Time; 
	struct UBorder* TimeAndRewards; 
	struct UBorder* TimeBorder; 
	struct UBorder* TimeColourBorder; 
	struct UImage* Trim1; 
	struct UImage* Trim2; 
	struct UUMG_DifficultySelect_C* UMG_DifficultySelect; 
	struct UUMG_ItemsOnDrop_C* UMG_ItemsOnDrop; 
	struct UUMG_LoadoutSelection_C* UMG_LoadoutSelection; 
	struct UUMG_WorkshopCostLarge_C* UMG_WorkshopCostLarge; 
	struct UUMG_WorkshopCostLarge_C* UMG_WorkshopCostLarge_2; 
	struct UVerticalBox* WorldStats; 
	struct FMulticastInlineDelegate StartSelectedProspect; 
	bool Settled; 
	struct FAssociatedProspectInfo Prospect Info; 
	struct FMulticastInlineDelegate HostProspect; 
	struct FMulticastInlineDelegate ClaimProspect; 
	struct FMulticastInlineDelegate JoinProspect; 
	struct UUMG_CloseButton_2_C* Close Button; 
	struct FMulticastInlineDelegate SettleProspect; 
	struct FString SelectedProspectID; 
	struct UFMODEvent* FMODEvent_AcceptClaimProspect; 
	struct FText NewVar_1; 
	struct TArray<struct FExistingOutpostData> ExistingOutpostInfo; 
	struct FMulticastInlineDelegate SelectLoadout; 
	struct TArray<struct FAssociatedProspectInfo> AllAssociatedProspects; 
	struct FString PendingGetHostId; 
	struct FString LoadingPlayersForProspectId; 
	struct FString CurrentLoadingPlayerProspectId; 
	struct FString PendingPlayerIds; 
	bool DidCreateLoadout; 
	struct FMulticastInlineDelegate ShowBackButton; 

	void CanDeleteProspects(bool& CanDelete); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void NeedsToCreateLoadout(struct FProspectInfo& ProspectInfo, bool& NeedsLoadout); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShowNoProspectsAvailable(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateRemainingTime(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateRewards(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SelectProspectInfo(struct FAssociatedProspectInfo NewProspect); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FillProspectList(struct TArray<struct FAssociatedProspectInfo>& Prospects); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateWorldStats(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ExistingProspectButtonClicked(struct UUMG_ButtonBase_C* Button); // (Public|BlueprintCallable|BlueprintEvent)
	void ResetState(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdatePlayerList(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Initialise(struct UUMG_CloseButton_2_C* CloseButton); // (Public|BlueprintCallable|BlueprintEvent)
	void OnFailure_569CEA364899DB2167FFA5AF2DFC2119(struct FGetIcarusPlayerPersonaResult Result); // (BlueprintCallable|BlueprintEvent)
	void OnSuccess_569CEA364899DB2167FFA5AF2DFC2119(struct FGetIcarusPlayerPersonaResult Result); // (BlueprintCallable|BlueprintEvent)
	void ConfirmDelete(); // (BlueprintCallable|BlueprintEvent)
	void ManuallyUpdateDifficulty(enum class EMissionDifficulty CachedDifficulty); // (BlueprintCallable|BlueprintEvent)
	void UpdateProspectList(); // (BlueprintCallable|BlueprintEvent)
	void DoDeleteProspect(); // (BlueprintCallable|BlueprintEvent)
	void CancelDelete(); // (BlueprintCallable|BlueprintEvent)
	void CancelDeleteStep2(); // (BlueprintCallable|BlueprintEvent)
	void OnReceiveProspects(struct TArray<struct FAssociatedProspectInfo>& ProspectList); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnServerProspectListUpdated(); // (BlueprintCallable|BlueprintEvent)
	void OnLoadoutSelected(); // (BlueprintCallable|BlueprintEvent)
	void OnWindowOpened(); // (BlueprintCallable|BlueprintEvent)
	void ShowTryDeleteRemoteProspectPopup(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__HostProspectButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void CancelRemoteDelete(); // (BlueprintCallable|BlueprintEvent)
	void LoadHostDetails(struct FString HostID); // (BlueprintCallable|BlueprintEvent)
	void ClearHostDetails(); // (BlueprintCallable|BlueprintEvent)
	void ShowLoadedHostDetails(struct FText PlayerName, struct UTexture2D* Avatar); // (BlueprintCallable|BlueprintEvent)
	void ShowLoadoutPanel(); // (BlueprintCallable|BlueprintEvent)
	void LaunchProspect(); // (BlueprintCallable|BlueprintEvent)
	void CloseLoadoutPanel(); // (BlueprintCallable|BlueprintEvent)
	void OnLoadoutConfirmed(struct FPlayerLoadoutData Loadout); // (BlueprintCallable|BlueprintEvent)
	void OnLoadoutBackClicked(); // (BlueprintCallable|BlueprintEvent)
	void AcceptClaim(); // (BlueprintCallable|BlueprintEvent)
	void RejectClaim(); // (BlueprintCallable|BlueprintEvent)
	void OnLobbyPrivacyChanged(); // (BlueprintCallable|BlueprintEvent)
	void ShowPrivacySelect(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__EndProspectButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_OpenProspectWindow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ShowBackButton__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void SelectLoadout__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void SettleProspect__DelegateSignature(struct FFProspectServerInfo Prospect Info, bool Settle); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void JoinProspect__DelegateSignature(struct FFProspectServerInfo ProspectInfo); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void ClaimProspect__DelegateSignature(struct FFProspectServerInfo ProspectInfo); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void HostProspect__DelegateSignature(struct FFProspectServerInfo ProspectInfo); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void StartSelectedProspect__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

