// BlueprintGeneratedClass BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C
struct ABP_IcarusPlayerControllerSpace_C : AIcarusPlayerControllerSpace {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float MoveToOperable_NewTrack_0_AE7BB1BA4A6ECAA53003F08A62920011; 
	enum class ETimelineDirection MoveToOperable__Direction_AE7BB1BA4A6ECAA53003F08A62920011; 
	struct UTimelineComponent* MoveToOperable; 
	struct UUMG_UserInterfaceSpace_C* UserInterface; 
	bool FocusedOnObject; 
	struct FFProspectServerInfo ProspectInfo; 
	bool Requested_Prospect_Info; 
	struct UBP_InputCaptureComponent_C* InputCapture; 
	struct AIcarusPlayerCharacter* PlayerCharacterClass; 
	bool bTransitioningPossession; 
	struct ABP_IcarusCharacterDummy_C* DefaultCharacterDummy; 
	struct ABP_IcarusCameraPawn_C* CharacterSelectionCamera; 
	struct TMap<enum class ESpaceMenuScene, struct ABP_SpaceMenuCamera_C*> MenuScreenCameras; 
	struct FOnlineProfileCharacter SelectedCharacter; 
	struct AExponentialHeightFog* FxInteriorFogComponent; 
	struct FCharacterLoadout Retrieved Character Loadout; 
	bool bLoadoutTutorialShown; 
	bool RequiresBackendInitialisation; 
	struct TArray<struct FMetaItem> Meta Inventory; 
	struct TArray<struct FMetaItem> Loadout Inventory; 
	struct FIcarusSession SessionInvite; 
	struct FAccountFlagsRowHandle Account Flag; 
	struct FMetaCurrencyRowHandle PassiveRefundRow; 

	void GetUserInterface(struct UUMG_UserInterface_Base_C*& UserInterface); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void CharacterFlagToAccountFlagConversion(struct AIcarusPlayerState* PlayerState); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void JoinSession_Confirmation(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DoNothing_Confirmation(); // (Public|BlueprintCallable|BlueprintEvent)
	void AcceptSessionInvite(struct FIcarusSession SessionToJoin); // (Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct UIcarusLinkedActorPanelBase* DisplayDynamicWidget(struct UIcarusLinkedActorPanelBase* WidgetClass, struct AActor* LinkedActorForWidget); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct UUserInterfaceBase* GetUserInterfaceInternal(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void Return to Character Select(); // (Public|BlueprintCallable|BlueprintEvent)
	void BackendConnection_PostInitialise(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct UCheatOverlayBase* GetCheatOverlay(struct UObject* WorldContextObject); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool GetIsThirdPerson(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void HasActiveSelectedCharacter(bool& HasSelectedCharacter); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetProspectInfo(struct FFProspectServerInfo& ProspectServerInfo); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnRep_ProspectInfo(); // (BlueprintCallable|BlueprintEvent)
	void MoveToOperable__FinishedFunc(); // (BlueprintEvent)
	void MoveToOperable__UpdateFunc(); // (BlueprintEvent)
	void InpActEvt_Escape_K2Node_InputKeyEvent_1(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Fire_K2Node_InputActionEvent_11(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Fire_K2Node_InputActionEvent_10(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_AltFire_K2Node_InputActionEvent_9(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_AltFire_K2Node_InputActionEvent_8(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Interact_K2Node_InputActionEvent_7(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Jump_K2Node_InputActionEvent_6(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Jump_K2Node_InputActionEvent_5(struct FKey Key); // (BlueprintEvent)
	void OnFailure_153E3E574849CADDC230B4BDF276D6E3(struct FErrorCodesEnum Result, struct FString ExtraErrorInfo); // (BlueprintCallable|BlueprintEvent)
	void OnSuccess_153E3E574849CADDC230B4BDF276D6E3(struct FErrorCodesEnum Result, struct FString ExtraErrorInfo); // (BlueprintCallable|BlueprintEvent)
	void OnFailure_C61F5EF443F6FA83FE9C9EBEFD43DCD9(struct FErrorCodesEnum Result, struct FString ExtraErrorInfo); // (BlueprintCallable|BlueprintEvent)
	void OnSuccess_C61F5EF443F6FA83FE9C9EBEFD43DCD9(struct FErrorCodesEnum Result, struct FString ExtraErrorInfo); // (BlueprintCallable|BlueprintEvent)
	void OnFailure_5F9E1E7C4E38E77D32A72DAA4B267722(struct FErrorCodesEnum Result, struct FString ExtraErrorInfo); // (BlueprintCallable|BlueprintEvent)
	void OnSuccess_5F9E1E7C4E38E77D32A72DAA4B267722(struct FErrorCodesEnum Result, struct FString ExtraErrorInfo); // (BlueprintCallable|BlueprintEvent)
	void InpActEvt_IcarusLogWindow_K2Node_InputActionEvent_4(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Escape_K2Node_InputActionEvent_3(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_OpenBestiary_K2Node_InputActionEvent_2(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_OpenBestiaryIndex_K2Node_InputActionEvent_1(struct FKey Key); // (BlueprintEvent)
	void OnConnectedPlayerInitialised(); // (Event|Protected|BlueprintEvent)
	void OnActiveCharacterSet(); // (Event|Protected|BlueprintEvent)
	void Homestead_PassiveFlagCheck(); // (BlueprintCallable|BlueprintEvent)
	void ServerPushClientDynamicWidget(struct UUMG_IcarusLinkedActorPanel_C* WidgetClass, struct AActor* LinkedActorForWidget); // (BlueprintCallable|BlueprintEvent)
	void CreateUI(); // (BlueprintCallable|BlueprintEvent)
	void OnServer_ReturnFocus(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void OnServer_GiveFocusToObject(struct AActor* Object); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Open Drop Screen(); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void CloseUI(); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_5(float AxisValue); // (BlueprintEvent)
	void BeginInputCapture(struct UBP_InputCaptureComponent_C* InputCaptureComponent, struct AActor* CapturedActor); // (BlueprintCallable|BlueprintEvent)
	void EndInputCapture(); // (BlueprintCallable|BlueprintEvent)
	void LerpToInputCaptureLocation(struct AActor* Target); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3(float AxisValue); // (BlueprintEvent)
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2(float AxisValue); // (BlueprintEvent)
	void SetCharacterUI(); // (BlueprintCallable|BlueprintEvent)
	void ClientUpdateSelectedCharacter(); // (BlueprintCallable|BlueprintEvent)
	void Get End Of Drop Screen Info(); // (BlueprintCallable|BlueprintEvent)
	void MailRequest(); // (BlueprintCallable|BlueprintEvent)
	void BackendConnection_SetCharacter(struct FOnlineProfileCharacter SelectedCharacter); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void SetCharacterInitialisationUI(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void RequestSessionSettings(); // (Net|NetServer|BlueprintCallable|BlueprintEvent)
	void UpdateSessionSettings(struct FFProspectServerInfo ProspectInfo); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void NotifyOfCheater(struct FString CharacterName); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void Client_CheaterAlert(struct FString Name); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void UpdateCharacterPossession(); // (BlueprintCallable|BlueprintEvent)
	void ReceivePossess(struct APawn* PossessedPawn); // (Event|Protected|BlueprintEvent)
	void ClientOnPossess(); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void ShowLoadingScreen_Event(bool Show); // (BlueprintCallable|BlueprintEvent)
	void OnClient_SetReadyState(bool Ready); // (BlueprintCallable|BlueprintEvent)
	void OnServer_SetReadyState(bool Ready); // (Net|NetServer|BlueprintCallable|BlueprintEvent)
	void RefreshSessionSettings(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Kick(); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void LeaveSession(); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void On Mouse Sensitivity Changed(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteClaimLaunchProspect(struct FProspectInfo Prospect Info, struct FOnlineProfileCharacter OnlineProfileCharacter); // (BlueprintCallable|BlueprintEvent)
	void ExecuteJoinProspect(struct FIcarusSession IcarusSession, struct FOnlineProfileCharacter OnlineProfileCharacter, struct FString ExtraSettings); // (BlueprintCallable|BlueprintEvent)
	void ExecuteResumeProspect(struct FAssociatedProspectInfo AssociatedProspectInfo, struct FOnlineProfileCharacter OnlineProfileCharacter); // (BlueprintCallable|BlueprintEvent)
	void ReturnToCharacterSelect(); // (Event|Protected|BlueprintCallable|BlueprintEvent)
	void AcceptInvite(struct FIcarusSession SessionToJoin); // (BlueprintEvent)
	void BndEvt__BP_IcarusPlayerControllerSpace_PlayerDataComponent_K2Node_ComponentBoundEvent_0_OnMetaInventoryChanged__DelegateSignature(); // (BlueprintEvent)
	void OpenFieldGuideToItem(struct FFieldGuideCategoriesRowHandle Category, struct FItemsStaticRowHandle Item, bool ForceShowNone); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_IcarusPlayerControllerSpace(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

