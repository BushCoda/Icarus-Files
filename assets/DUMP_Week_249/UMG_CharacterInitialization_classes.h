// WidgetBlueprintGeneratedClass UMG_CharacterInitialization.UMG_CharacterInitialization_C
struct UUMG_CharacterInitialization_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* TransitionFade; 
	struct UWidgetAnimation* FadeOut; 
	struct UWidgetAnimation* AmbientBackground; 
	struct UWidgetAnimation* FadeIn; 
	struct UUMG_BasicButton_2_C* BackButton; 
	struct UOverlay* BackendLoadingScreen; 
	struct UUMG_LoadingProgress_C* CharacterProgress; 
	struct UWidgetSwitcher* ContentSwitcher; 
	struct UUMG_LoadingProgress_C* ProfileProgress; 
	struct UUMG_LoadingProgress_C* ProspectProgress; 
	struct UUMG_BasicButton_2_C* QuitToDesktopButton; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_Settings; 
	struct UUMG_CharacterCreation_C* UMG_CharacterCreation; 
	struct UUMG_CharacterSelection_C* UMG_CharacterSelection; 
	struct UUMG_RevisionNumber_C* UMG_RevisionNumber; 
	struct UUMG_SettingsMenu_C* UMG_SettingsMenu; 
	struct UImage* Vignette; 
	enum class ECharacterCreationMenus CurrentState; 
	struct ABP_PlayerPreviewManager_C* PlayerPreviewManager; 
	struct TArray<struct FOnlineProfileCharacter> RetrievedCharacterList; 
	struct FIcarusProfile RetrievedUserProfile; 
	bool UserProfileRetrieved; 
	bool ActiveProspectsRetrieved; 
	bool CharactersRetrieved; 
	bool IsComplete; 
	struct FProspectListRowHandle JoinProspectRow; 
	struct FMulticastInlineDelegate OnCharacterChanged; 
	struct TSoftObjectPtr<UWorld> Diorama_Prospect_Conifer; 
	struct TSoftObjectPtr<UWorld> Diorama_Prospect_Cave; 
	struct TSoftObjectPtr<UWorld> Diorama_Prospect_Arctic; 
	struct TSoftObjectPtr<UWorld> Diorama_Hab; 
	struct TSoftObjectPtr<UWorld> Diorama_Abandoned; 
	bool CanRetryConnection; 
	struct FTimerHandle ConnectionTimeoutTimerHandle; 
	struct TArray<struct FProspectInfo> RetrievedProspects; 
	struct TSoftObjectPtr<UWorld> Diorama_Prospect_Desert; 
	struct TSoftObjectPtr<UWorld> Diorama_Prospect_Grasslands; 
	struct TSoftObjectPtr<UWorld> Diorama_Prospect_Volcanic; 
	struct TSoftObjectPtr<UWorld> Diorama_Prospect_Swamp; 

	void DeletePlayerTrackerSave(int32_t Slot, bool AfterCreate); // (Public|BlueprintCallable|BlueprintEvent)
	void ResumeCurrentActiveProspect(struct FProspectInfo ProspectInfo); // (Public|BlueprintCallable|BlueprintEvent)
	void Initialise(); // (Public|BlueprintCallable|BlueprintEvent)
	void CharacterCosmeticsUpdate(bool Success, struct FOnlineProfileCharacter UpdatedCharacter); // (Public|BlueprintCallable|BlueprintEvent)
	void CharacterCreationResult(bool Success); // (Public|BlueprintCallable|BlueprintEvent)
	void GetChacterSlots(struct TArray<int32_t>& ChrSlots, bool& HasCharacter); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct TSoftObjectPtr<UWorld> GetDioramaForCurrentCharacter(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnCharacterSelected(struct FOnlineProfileCharacter Character); // (Public|BlueprintCallable|BlueprintEvent)
	void SelectCharacter(struct FOnlineProfileCharacter SelectedCharacter); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateCharacterPreview(struct FCharacterCosmetics CosmeticData); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void NewCharacterSelected(struct FOnlineProfileCharacter SelectedCharacter); // (Public|BlueprintCallable|BlueprintEvent)
	void HideSettings(); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowSettings(); // (Public|BlueprintCallable|BlueprintEvent)
	void BackButtonPressed(); // (Public|BlueprintCallable|BlueprintEvent)
	void GenerateCharacterSelectList(bool CreateCharacterIfEmpty); // (Public|BlueprintCallable|BlueprintEvent)
	void ResetContentState(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetContentState(enum class ECharacterCreationMenus State); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnFail_AA2196B04AC3B92C0431BDB2754010AC(struct FResGetCharacters& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnSuccess_AA2196B04AC3B92C0431BDB2754010AC(struct FResGetCharacters& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnFail_16D5FF39449681E05656E5AEB0E4B6EC(struct FResCreateCharacter& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnSuccess_16D5FF39449681E05656E5AEB0E4B6EC(struct FResCreateCharacter& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnFail_8DEB61DF48DB1B1A9300A098DF26F53D(struct FResDeleteCharacter& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnSuccess_8DEB61DF48DB1B1A9300A098DF26F53D(struct FResDeleteCharacter& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnFail_49458CA04D20AEFC814952AE4F767256(struct FResGetCharacters& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnSuccess_49458CA04D20AEFC814952AE4F767256(struct FResGetCharacters& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnFail_A199ABC24AC7A7F27C5A65A9B3F9E898(struct FResGetAllProspects& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnSuccess_A199ABC24AC7A7F27C5A65A9B3F9E898(struct FResGetAllProspects& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnFail_F77B8CB74F4AF05825B964AC18481892(struct FResUpdateCosmetics& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnSuccess_F77B8CB74F4AF05825B964AC18481892(struct FResUpdateCosmetics& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnFail_BEC856464A75D4A166FC988B8C7226EC(struct FResGetUserProfile& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnSuccess_BEC856464A75D4A166FC988B8C7226EC(struct FResGetUserProfile& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnFail_5EFAF01E48E09C992CF2528296819869(struct FResAbandonProspect& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnSuccess_5EFAF01E48E09C992CF2528296819869(struct FResAbandonProspect& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BackSettings(struct UUMG_ButtonBase_C* Button); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Destruct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void QuitGame(); // (BlueprintCallable|BlueprintEvent)
	void RetrieveUserProfile(); // (BlueprintCallable|BlueprintEvent)
	void RetrieveCharacters(); // (BlueprintCallable|BlueprintEvent)
	void OnCreateCharacterRequest(struct FReqCreateCharacter CharacterName, int32_t NumRetries, bool SelectNewCharacter); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__QuitToDesktopButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void OnCharacterDeletionRequest(struct FOnlineProfileCharacter Character); // (BlueprintCallable|BlueprintEvent)
	void RefreshCharacterList(); // (BlueprintCallable|BlueprintEvent)
	void CheckIfAccountRetrieved(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BasicButton_Settings_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void RetrieveActiveProspects(); // (BlueprintCallable|BlueprintEvent)
	void MoveToHAB(); // (BlueprintCallable|BlueprintEvent)
	void SwapToCharacterCreate(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateConnectingProgress(); // (BlueprintCallable|BlueprintEvent)
	void OnCosmeticUpdateRequest(struct FReqUpdateCosmetics Request, int32_t Retries); // (BlueprintCallable|BlueprintEvent)
	void QuitToDesktopCancelled(); // (BlueprintCallable|BlueprintEvent)
	void OnConnectMessageEvent(bool Success); // (BlueprintCallable|BlueprintEvent)
	void ConnectionTimeout(); // (BlueprintCallable|BlueprintEvent)
	void OnAbandonProspectRequest(struct FOnlineProfileCharacter Character, struct FString ProspectID, bool WillDelete); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_CharacterInitialization(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnCharacterChanged__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

