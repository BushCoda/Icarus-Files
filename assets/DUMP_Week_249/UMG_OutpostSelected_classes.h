// WidgetBlueprintGeneratedClass UMG_OutpostSelected.UMG_OutpostSelected_C
struct UUMG_OutpostSelected_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* ShowMain; 
	struct UWidgetAnimation* SwitchAnimation; 
	struct UWidgetAnimation* OpenAnimation; 
	struct UUMG_BasicButton_2_C* Button_CustomGameSettings; 
	struct UBorder* ClaimedWarningPrompt; 
	struct UUMG_BasicButton_2_C* CreateNewOutpostButton; 
	struct UUMG_BasicButton_2_C* DeleteOutpostButton; 
	struct UTextBlock* DescriptionText; 
	struct UCanvasPanel* DropPoint_PointButtons; 
	struct UOverlay* DropPointImageOverlay; 
	struct UCanvasPanel* DropPointSelection; 
	struct UImage* EditIcon; 
	struct UTextBlock* FlavourText; 
	struct UTextBlock* InactiveText; 
	struct UUMG_BasicButton_2_C* LaunchExistingOutpostButton; 
	struct USizeBox* Loadout; 
	struct UBorder* LoadoutOverlay; 
	struct UOverlay* Main; 
	struct UImage* menupattern; 
	struct UBorder* Modifiers; 
	struct UTextBlock* NameInvalidWarning; 
	struct UImage* OutOfBoundsImage; 
	struct UVerticalBox* OutpostList; 
	struct UTextBlock* OutpostName; 
	struct UTextBlock* OutpostName_2; 
	struct UBorder* OutpostNameBorder; 
	struct UOverlay* Overlay_DropInformation; 
	struct UVerticalBox* PlayerList; 
	struct UTextBlock* PointSelectionTitle; 
	struct UTextBlock* ProspectClaimedPrompt; 
	struct UTextBlock* ProspectName; 
	struct UOverlay* ProspectNameOverlay; 
	struct UEditableTextBox* ProspectNameTextbox; 
	struct UImage* ProspectTexture; 
	struct UUMG_LoadingIcon_C* SettleLoading; 
	struct UTextBlock* Text_ProspectName; 
	struct UTextBlock* TextBlock_ListTitle; 
	struct UImage* Trim1; 
	struct UImage* Trim2; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_Back; 
	struct UUMG_DifficultySelect_C* UMG_DifficultySelect; 
	struct UUMG_LoadoutSelection_C* UMG_LoadoutSelection; 
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame; 
	struct UUniformGridPanel* UniformGridPanel_MapTiles; 
	struct UVerticalBox* WorldStats; 
	struct FMulticastInlineDelegate StartSelectedProspect; 
	bool Settled; 
	struct FFProspectServerInfo ServerInfo; 
	struct FMulticastInlineDelegate HostProspect; 
	struct FMulticastInlineDelegate ClaimProspect; 
	struct FMulticastInlineDelegate JoinProspect; 
	struct UUMG_CloseButton_2_C* Close Button; 
	struct FMulticastInlineDelegate SettleProspect; 
	struct FString SelectedProspectID; 
	struct UFMODEvent* FMODEvent_AcceptClaimProspect; 
	struct FText NewVar_1; 
	enum class EMissionDifficulty SelectedDifficulty; 
	struct TArray<struct FExistingOutpostData> ExistingOutpostInfo; 
	int32_t SelectedDropPoint; 
	bool RequireDropPointSelection; 
	bool DropPointSelectionSupported; 
	int32_t MapTileNum; 
	struct UUMG_DropPointInformation_C* CurrentlySelectedDropGroup; 
	struct TSet<struct FString> InUseProspectIds; 
	struct TArray<struct FCustomGameSetting> CustomSettings; 

	void ClearPendingLoadout(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetPendingLoadout(struct FPlayerLoadoutData& PendingLoadoutData); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void CleanupExistingDropGroupSelection(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ConfirmSelectedDropPoint(); // (Public|BlueprintCallable|BlueprintEvent)
	void WorldSpaceToMapCanvasSpace(struct FVector InWorldLocation, struct FVector2D& OutWidgetLocation); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void InitialiseDropPointUI(struct FTerrainsRowHandle Terrain); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnOutpostDropPointSelected(struct UUMG_ToggleButtonBase_C* ToggleButton); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetOutpostDropPoint(int32_t DropPoint); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateWorldStats(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FString OnNameChanged(struct FText& InText); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OutpostNameIsValid(bool& Valid); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RefreshExistingOutpostNames(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OutpostNameTextCommitted(struct FText& Text, enum class ETextCommit CommitMethod); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OutpostNameTextChanged(struct FText& Text); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateProspectInfoToSelection(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ExistingOutpostButtonClicked(struct UUMG_ButtonBase_C* Button); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void NewOutpostButtonClicked(struct UUMG_ButtonBase_C* Button); // (Public|BlueprintCallable|BlueprintEvent)
	void ResetSelectedOutpostButtons(); // (Public|BlueprintCallable|BlueprintEvent)
	void RefreshOutpostList(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReadyCheck(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdatePlayerList(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Initialise(struct UUMG_CloseButton_2_C* CloseButton); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowSelectedOutpostType(struct FFProspectServerInfo Prospect, bool Active); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__EndProspectButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_PlanetProspectSelected_UMG_LoadoutSelection_K2Node_ComponentBoundEvent_4_ConfirmLoadout__DelegateSignature(struct FPlayerLoadoutData Loadout); // (BlueprintEvent)
	void BndEvt__UMG_PlanetProspectSelected_UMG_LoadoutSelection_K2Node_ComponentBoundEvent_5_Back__DelegateSignature(); // (BlueprintEvent)
	void AcceptClaim(); // (BlueprintCallable|BlueprintEvent)
	void RejectClaim(); // (BlueprintCallable|BlueprintEvent)
	void OnLobbyPrivacyChanged(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__HostProspectButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__ClaimProspectButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ClaimAndLaunchProspect(); // (BlueprintCallable|BlueprintEvent)
	void ConfirmDeleteOutpost(); // (BlueprintCallable|BlueprintEvent)
	void CancelDeleteOutpost(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_OutpostSelected_UMG_DifficultySelect_K2Node_ComponentBoundEvent_0_DifficultyUpdated__DelegateSignature(enum class EMissionDifficulty Difficulty); // (BlueprintEvent)
	void ManuallyUpdateDifficulty(enum class EMissionDifficulty CachedDifficulty); // (BlueprintCallable|BlueprintEvent)
	void ConfirmOutpostClaim(); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_OutpostSelected_UMG_BasicButton_Back_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void OnReceiveProspects(struct TArray<struct FAssociatedProspectInfo>& ProspectList); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void RequestUpdateProspectsList(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_OutpostSelected_Button_CustomGameSettings_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void OnCustomSettingsUpdated(struct TArray<struct FCustomGameSetting>& NewSettingValues); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_OutpostSelected(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void SettleProspect__DelegateSignature(struct FFProspectServerInfo Prospect Info, bool Settle); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void JoinProspect__DelegateSignature(struct FFProspectServerInfo ProspectInfo); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void ClaimProspect__DelegateSignature(struct FFProspectServerInfo ProspectInfo); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void HostProspect__DelegateSignature(struct FFProspectServerInfo ProspectInfo); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void StartSelectedProspect__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

