// WidgetBlueprintGeneratedClass UMG_CharacterSelection.UMG_CharacterSelection_C
struct UUMG_CharacterSelection_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* CharacterAbandonedText; 
	struct UUniformGridPanel* CharacterContainer; 
	struct UVerticalBox* CharacterSelectionBox; 
	struct UUMG_BasicButton_2_C* DeleteButton; 
	struct UImage* Dividers; 
	struct UImage* Dividers_2; 
	struct UTextBlock* DurationTime; 
	struct UTextBlock* Insurance; 
	struct UTextBlock* NoRespawns; 
	struct UUMG_BasicButton_2_C* PlayButton; 
	struct UVerticalBox* PlayerList; 
	struct UBorder* PlayFrame; 
	struct UTextBlock* ProspectDifficulty; 
	struct UVerticalBox* ProspectInfoBox; 
	struct UTextBlock* ProspectName; 
	struct UTextBlock* ProspectName_2; 
	struct UUMG_BasicButton_2_C* ResetCharacter; 
	struct USizeBox* SelectedCharacterInfo; 
	struct UImage* Shadow; 
	struct UImage* SuitImage; 
	struct UUMG_CreateNewCharacterButton_C* UMG_CreateNewCharacterButton; 
	struct FMulticastInlineDelegate OnRequestCharacterSelect; 
	int32_t SelectedCharacterIndex; 
	struct FMulticastInlineDelegate OnRequestCharacterDelete; 
	int32_t NumColumns; 
	struct FMulticastInlineDelegate CreateCharacter; 
	int32_t MaxNumCharacters; 
	struct FOnlineProfileCharacter SelectedCharacter; 
	bool HasSelectedCharacter; 
	bool SelectedCharacterLockedToProspect; 
	struct FMulticastInlineDelegate SelectedCharacterUpdated; 
	struct ABP_PlayerPreview_HAB_Selection_C* PlayerPreview; 
	struct FPreviewCameraSettingsEnum CurrentCameraFocus; 
	int32_t ProspectEndTime; 
	struct FString JoinLobbyName; 
	struct FFProspectServerInfo ProspectInfo; 
	struct UUMG_DeleteCharacterName_C* DeleteCharacterInputField; 
	int32_t RemainingTime; 
	struct UUMG_DeleteCharacterName_C* AbandonProspectInputField; 
	struct FMulticastInlineDelegate OnRequestAbandonProspect; 

	void GetCameraFocus(struct FPreviewCameraSettingsEnum& CameraFocus); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetCosmeticData(struct FCharacterCosmetics& CosmeticData); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateLobby(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FindActiveProspectForCharacter(struct FOnlineProfileCharacter OnlineCharacterProfile, struct TArray<struct FProspectInfo>& ProspectArray, struct FProspectInfo& ProspectInfo); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText Get_DurationTime_Text(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetCharacterVoiceParam(struct FCharacterVoicesRowHandle Voice); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ClearSelectedCharacter(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetCreationRowFromItem(struct FMetaItem Item, struct FCharacterCreationDataRowHandle& Row); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CharacterPlay(); // (Public|BlueprintCallable|BlueprintEvent)
	void CalculatePlayerLevelFromExp(int32_t Experience, int32_t& Level); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetButtonRowIndex(struct UWidget* Button, int32_t& RowIndex, bool& Found); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void DeleteSelectedCharacter(); // (Public|BlueprintCallable|BlueprintEvent)
	void CharacterSelected(struct UUMG_CharacterProfileSlot_C* Button); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GenerateCharacterSelectList(struct TArray<struct FOnlineProfileCharacter>& CharacterArray, struct TArray<struct FProspectInfo>& ActiveProspectArray); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnFailure_C114BFB749A23B1B26FC30A1C3BB6795(struct FErrorCodesEnum Result, struct FString ExtraErrorInfo); // (BlueprintCallable|BlueprintEvent)
	void OnSuccess_C114BFB749A23B1B26FC30A1C3BB6795(struct FErrorCodesEnum Result, struct FString ExtraErrorInfo); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void CancelDeleteCharacter(); // (BlueprintCallable|BlueprintEvent)
	void TogglePlayButtonEnabled(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__ResetCharacter_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Cancel Reset Character(); // (BlueprintCallable|BlueprintEvent)
	void RemoveCharacterFromProspects(); // (BlueprintCallable|BlueprintEvent)
	void ConfirmDeleteSelectedCharacter(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_CreateNewCharacterButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature(struct UUMG_CreateNewCharacterButton_C* Input); // (BlueprintEvent)
	void UpdateDeleteCharacterPrompt(); // (BlueprintCallable|BlueprintEvent)
	void OnAbandonProspectClicked(struct UUMG_CharacterProfileSlot_C* Button); // (BlueprintCallable|BlueprintEvent)
	void PrepareAbandonProspectPopup(); // (BlueprintCallable|BlueprintEvent)
	void CancelAbandonProspect(); // (BlueprintCallable|BlueprintEvent)
	void UpdateAbandonProspectPrompt(); // (BlueprintCallable|BlueprintEvent)
	void ConfirmAbandonProspect(); // (BlueprintCallable|BlueprintEvent)
	void OnDeleteCharacterTextMatched(); // (BlueprintCallable|BlueprintEvent)
	void OnDeleteCharacterTextUnmatched(); // (BlueprintCallable|BlueprintEvent)
	void OnAbandonProspectTextMatched(); // (BlueprintCallable|BlueprintEvent)
	void OnAbandonProspectTextUnmatched(); // (BlueprintCallable|BlueprintEvent)
	void OnDeleteCharacterPressedEnter(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_CharacterSelection(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnRequestAbandonProspect__DelegateSignature(struct FOnlineProfileCharacter Character, struct FString ProspectID, bool WillDelete); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void SelectedCharacterUpdated__DelegateSignature(struct FOnlineProfileCharacter SelectedCharacter); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void CreateCharacter__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnRequestCharacterDelete__DelegateSignature(struct FOnlineProfileCharacter Character); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnRequestCharacterSelect__DelegateSignature(struct FOnlineProfileCharacter Character); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

