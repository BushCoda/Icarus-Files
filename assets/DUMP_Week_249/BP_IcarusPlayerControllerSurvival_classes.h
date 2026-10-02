// BlueprintGeneratedClass BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C
struct ABP_IcarusPlayerControllerSurvival_C : AIcarusPlayerControllerSurvival {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_SurvivalMetaController_C* BP_SurvivalMetaController; 
	struct UBP_NetworkProxyComponentSurvival_C* BP_NetworkProxyComponent; 
	struct UBP_HuntingManager_C* BP_HuntingManager; 
	struct UBP_CriticalHitComponent_C* BP_CriticalHitComponent; 
	struct UUMG_UserInterface_C* UserInterface; 
	struct UInventory* EnvirosuitInventoryReference; 
	struct UInventory* BackpackInventoryReference; 
	struct UInventory* QuickbarInventoryReference; 
	bool FocusedOnObject; 
	struct UInventory* EquipmentInventoryReference; 
	int32_t CurrentSessionEndTime; 
	struct FMulticastInlineDelegate ChatMessageArrived; 
	struct FMulticastInlineDelegate LocalMessageArrived; 
	float CharacterProgressionUpdateDelay; 
	struct UInventory* UpgradeInventoryRef; 
	struct UInventory* VisionInventoryRef; 
	struct ABP_SpectatorActor_C* SpectatorActor; 
	float DBNOHoldLength; 
	float DBNOHoldTimestamp; 
	struct FCharacterLoadout LastLoadout; 
	struct FVector LastCameraLocation; 
	bool DebugCameraLocationChanges; 
	struct FMulticastInlineDelegate OnRevived; 
	float OutOfBoundsTimestamp; 
	float OutOfBoundsMaxTime; 
	struct FTimerHandle OutOfBoundsTimerHandle; 
	bool IsRunningUnStuckEQS; 
	struct FTimerHandle HeatmapBoundsTimer; 
	struct FMulticastInlineDelegate ServerMessage; 
	struct FModifierStatesRowHandle SoloRespawnModifier; 
	float SoloRespawnBuffLength; 
	int32_t SoloRespawnBuffUID; 
	struct FTimerHandle InventoryFullMessageCooldown; 
	struct ABP_PhotoCamera_C* PhotoCamera; 
	int32_t DelayedTargetFocusedSlot; 
	struct FTimerHandle DelayedFocusSlotTimer; 
	bool DelayedForceFocusSlot; 
	bool CanDoDBNOInput; 
	bool WasThirdPersonBeforePhotoMode; 
	struct FMulticastInlineDelegate OnLootAll; 
	struct TSet<struct FChallengesRowHandle> InitialChallengeNotificationsShown; 
	struct FMulticastInlineDelegate OnHotbarPressed; 
	int32_t SlotToSelect; 

	void CanSupportNewTetheredAI(bool& CanSupport); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetUserInterface(struct UUMG_UserInterface_Base_C*& UserInterface); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void ProcessSendPlayerToBedOrDropShip(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ProcessUnstuckAtShip(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void MovePlayerIfGravestoneIsInInstanced(struct ABP_Gravestone_C* Gravestone); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CanRespawn(bool& CanRespawn); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShouldShowChallengePopup(struct FItemData Item, int32_t ProgressAmount, bool& ShouldShow); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct TArray<struct UInventory*> GetDynamicWidgetInventories(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Corpse Unstuck(bool DoMove, bool& CorpseAvailable); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TryToggleThirdPerson(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct UIcarusLinkedActorPanelBase* DisplayDynamicWidget(struct UIcarusLinkedActorPanelBase* WidgetClass, struct AActor* LinkedActorForWidget); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	void DelayedHotbarSelect(); // (Public|BlueprintCallable|BlueprintEvent)
	void ActivateHotbarSlot(int32_t NewSelection, bool bForce, bool bQuickCraft, bool bDelayedActivate); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FIcarusPlayerChatMessage ProcessChatMessage(struct AIcarusPlayerState* FromPlayer, struct FString Message); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct UNetworkProxyComponent* GetNetworkProxyComponent(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct UIcarusCriticalHitComponent* GetCriticalHitComponent(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct UUserInterfaceBase* GetUserInterfaceInternal(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	bool IsTryingToUnstuck(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void EndPhotoMode(); // (Public|BlueprintCallable|BlueprintEvent)
	void StartPhotoMode(); // (Public|BlueprintCallable|BlueprintEvent)
	bool IsThirdPersonToggleDisabled(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnSessionFlagsUpdated(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RemoveSoloRespawnModifier(); // (Public|BlueprintCallable|BlueprintEvent)
	void AddSoloRespawnModifier(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CreateOverflowBag(struct AActor* Actor); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GatherMetaItems(struct TArray<struct FItemData>& OutMetaItems, struct TArray<struct FMetaResource>& OutMetaResources); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetRespawnPodLocations(bool FilterBiome, struct TArray<struct ABP_IcarusRespawnShipSpawn_C*>& AvailableSpawns, struct TArray<struct ABP_IcarusRespawnShipSpawn_C*>& OtherSpawns, struct TArray<struct ABP_IcarusRespawnShipSpawn_C*>& AllSpawns); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	enum class ERespawnType GetRespawnType(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	float GetRespawnDistance(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SpawnGravestone(bool DBNO); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OutOfBoundsTimeElapsed(); // (Public|BlueprintCallable|BlueprintEvent)
	float GetOutOfBoundsRemainingTime(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool IsOutOfBounds(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnRep_OutOfBoundsTimestamp(); // (BlueprintCallable|BlueprintEvent)
	void OutOfBoundsUpdated(struct AIcarusPlayerCharacter* Player, bool OutOfBounds); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FString GetPlayerUID(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool HasAvailableBed(struct ABP_BedBase_C*& AvailableBed); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetUserID(struct FString& UserID); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct ABP_IcarusRespawnShipSpawn_C* GetAvailableRespawnPod(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnPlayerRespawn(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void EmptyHands(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateHotbar(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void QuickCraft(struct FProcessorRecipesRowHandle Recipe); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool External_CanPerformInputAction(bool bBlockedByUI, bool bIgnoreAnimLock); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct UCheatOverlayBase* GetCheatOverlay(struct UObject* WorldContextObject); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void CanFocusSlot(int32_t SlotToFocus, bool& CanFocus); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void ToggleUIVisibility(); // (Public|BlueprintCallable|BlueprintEvent)
	bool GetIsThirdPerson(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetItem(int32_t InventoryID, int32_t InventorySlot, struct FItemData& Item); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Calculate Quick Item Move(struct UInventory* Inventory, int32_t Slot); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnPlayerRevive(float HealthRestoredPercent); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct ABP_IcarusPlayerCharacterSurvival_C* GetIcarusPlayerCharacterBP(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void DevTeleport(struct FVector Location, struct FRotator Rotation); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool OnPlayerDeath(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InpActEvt_F10_K2Node_InputKeyEvent_1(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Interact_K2Node_InputActionEvent_34(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Interact_K2Node_InputActionEvent_33(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Fire_K2Node_InputActionEvent_32(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_AltFire_K2Node_InputActionEvent_31(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Hotbar1_K2Node_InputActionEvent_30(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Hotbar0_K2Node_InputActionEvent_29(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Hotbar2_K2Node_InputActionEvent_28(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Hotbar3_K2Node_InputActionEvent_27(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Hotbar4_K2Node_InputActionEvent_26(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Hotbar5_K2Node_InputActionEvent_25(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Hotbar6_K2Node_InputActionEvent_24(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Hotbar7_K2Node_InputActionEvent_23(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Hotbar8_K2Node_InputActionEvent_22(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Hotbar9_K2Node_InputActionEvent_21(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_HideUI_K2Node_InputActionEvent_20(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Screenshot_K2Node_InputActionEvent_19(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Inventory_K2Node_InputActionEvent_18(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Crafting_K2Node_InputActionEvent_17(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Tech_K2Node_InputActionEvent_16(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Map_K2Node_InputActionEvent_15(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Escape_K2Node_InputActionEvent_14(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_HotbarBack_K2Node_InputActionEvent_13(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Hands_K2Node_InputActionEvent_12(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_ToggleMenus_K2Node_InputActionEvent_11(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_HotbarForward_K2Node_InputActionEvent_10(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_HotbarBackSlot_K2Node_InputActionEvent_9(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_TextChat_K2Node_InputActionEvent_8(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_HideQuestUI_K2Node_InputActionEvent_7(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_OpenBestiary_K2Node_InputActionEvent_6(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_OpenBestiaryIndex_K2Node_InputActionEvent_5(struct FKey Key); // (BlueprintEvent)
	void OnFailure_6B795656432A1EEE40E31586F8BAF647(); // (BlueprintCallable|BlueprintEvent)
	void OnSuccess_6B795656432A1EEE40E31586F8BAF647(); // (BlueprintCallable|BlueprintEvent)
	void InpActEvt_TogglePhotoMode_K2Node_InputActionEvent_4(struct FKey Key); // (BlueprintEvent)
	void OnFailure_B0AA2EB344D9F6EDFC53F7B071532FE2(); // (BlueprintCallable|BlueprintEvent)
	void OnSuccess_B0AA2EB344D9F6EDFC53F7B071532FE2(); // (BlueprintCallable|BlueprintEvent)
	void InpActEvt_IcarusLogWindow_K2Node_InputActionEvent_3(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Escape_K2Node_InputActionEvent_2(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_LootAll_K2Node_InputActionEvent_1(struct FKey Key); // (BlueprintEvent)
	void CheckPlayerViewDelta(bool Init); // (BlueprintCallable|BlueprintEvent)
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_1(float AxisValue); // (BlueprintEvent)
	void InpAxisEvt_LookRight_K2Node_InputAxisEvent_2(float AxisValue); // (BlueprintEvent)
	void Server_AttemptRespawn(struct ABP_Gravestone_C* Gravestone); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Respawn(struct ABP_Gravestone_C* Target); // (BlueprintCallable|BlueprintEvent)
	void DBNO_OptionAClicked(); // (BlueprintCallable|BlueprintEvent)
	void DBNO_OptionBClicked_Event(); // (BlueprintCallable|BlueprintEvent)
	void AClicked(); // (BlueprintCallable|BlueprintEvent)
	void BClicked(); // (BlueprintCallable|BlueprintEvent)
	void SERVER_ReviveFailsafe(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void BP_ServerAttemptRevive_Implementation(struct AGravestoneBase* Gravestone); // (Event|Public|BlueprintEvent)
	void OnDeath(); // (BlueprintCallable|BlueprintEvent)
	void Server_SendPlayerToBedOrDropship(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void AddItemToInventory(struct FItemTemplateRowHandle ItemTemplate); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void OnServer_SetFocusedSlot(int32_t NewFocused, bool Force); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void UIBeginPlay(); // (BlueprintCallable|BlueprintEvent)
	void UITick(); // (BlueprintCallable|BlueprintEvent)
	void OnClient_DeathCleanup(); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void OnClient_RespawnCleanup(); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void OnGainedItem(struct FItemData Item, int32_t TotalCount); // (BlueprintCallable|BlueprintEvent)
	void OnClient_ItemGained(struct FItemData Item, int32_t Count); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void Server_SetAmmo(struct UInventory* Inventory, int32_t Slot, bool Unload); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Server_SetBuildingVariation(int32_t Variation); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void OnClient_UpdateHotBarSelection(int32_t NewSelection, bool Force); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void OnHotbarItemAdded(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void OwningClient_ForceSlotHighlight(int32_t NewSlot); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void StartQuickCraft(struct FProcessorRecipesRowHandle Recipe); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void CheckQuickCraft(int32_t Index); // (BlueprintCallable|BlueprintEvent)
	void WantsPlayerDeadUI(bool IsDead); // (BlueprintCallable|BlueprintEvent)
	void Client_Revived(); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void BP_ClientOpenContainer(struct UInventory* Inventory, bool bShowStoreAll, bool bShowTakeAll); // (Event|Public|BlueprintEvent)
	void OpenFieldGuideAt(struct FFieldGuideCategoriesRowHandle Category, struct FItemsStaticRowHandle Item, bool ForceOpenNoItem); // (BlueprintCallable|BlueprintEvent)
	void ShowPourInto(struct UInventory* PourFromInventory, int32_t PourFromSlot); // (BlueprintCallable|BlueprintEvent)
	void OwningClientDisplayDynamicWidgetNoteItem_Inner(struct UIcarusLinkedActorPanelBase* WidgetClass, struct AActor* LinkedActorForWidget, struct FItemData& NoteItem); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void OnServer_ReturnFocus(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void OnServer_GiveFocusToObject(struct AActor* Object); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void OnDevTeleport(struct FVector Location, struct FRotator Rotation); // (BlueprintCallable|BlueprintEvent)
	void ServerDevTeleport(struct FVector Location, struct FRotator Rotation); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Client_Build(struct AIcarusRocket* Rocket); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void SetUIVisibility(bool bHide, bool bHideDebug); // (Event|Protected|BlueprintCallable|BlueprintEvent)
	void EQSFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void UnstuckAtRespawnShipYes(); // (BlueprintCallable|BlueprintEvent)
	void UnstuckAtRespawnShipNo(); // (BlueprintCallable|BlueprintEvent)
	void Client_NoUnstuckFound(); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void Server_UnstuckAtRespawnShip(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ResetUnstuck(); // (BlueprintCallable|BlueprintEvent)
	void On Mouse Sensitivity Changed(); // (BlueprintCallable|BlueprintEvent)
	void OnConnectedPlayerInitialised(); // (Event|Protected|BlueprintEvent)
	void OnPawnLeavingGame(); // (Event|Protected|BlueprintEvent)
	void CustomEvent(); // (BlueprintCallable|BlueprintEvent)
	void CheckOutOfBounds(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void MapTravelBackToHab(); // (Event|Protected|BlueprintCallable|BlueprintEvent)
	void OnItemBounced_Event(struct FItemData& ItemData); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void InventoryFullMessageCooldownComplete(); // (BlueprintCallable|BlueprintEvent)
	void OnLeaveProspectSessionCompleteImpl(); // (Event|Protected|BlueprintEvent)
	void ServerPossessCamera(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ServerStopPossessingCamera(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void BP_Server_Unstuck_Implementation(); // (Event|Protected|BlueprintEvent)
	void DelayedShowSavingDialog(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ServerPushClientDynamicWidget(struct UIcarusLinkedActorPanelBase* WidgetClass, struct AActor* LinkedActor, bool bFocusCameraOnActor); // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent)
	void TriggerLoadShip(struct AIcarusRocket* Rocket); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void NotifyExoticsBanked(int32_t Amount, struct FMetaCurrencyRowHandle Type); // (Event|Protected|BlueprintEvent)
	void NotifyQuestCompleted(struct AQuest* Quest, struct FFactionMissionsRowHandle& MissionRowHandle, bool bIsCurrentQuest, struct TArray<struct FMetaResource>& ReceivedResources); // (Event|Protected|HasOutParms|BlueprintEvent)
	void NotifyItemsReturned(struct TArray<struct FItemData>& Items); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BP_ServerCorpseUnstuck_Implementation(); // (Event|Protected|BlueprintEvent)
	void NotifyDynamicQuestCompleted(int32_t NumCredits, int32_t NumExperience); // (Event|Protected|BlueprintEvent)
	void OpenBagWidgetUI(struct FItemData& SourceItem); // (Event|Protected|HasOutParms|BlueprintEvent)
	void HandleLivingItemChallengeCompleted(struct FItemData& ItemData); // (Event|Protected|HasOutParms|BlueprintEvent)
	void HandleLivingItemChallengeProgressUpdated(struct FItemData& ItemData, int32_t ProgressAmount); // (Event|Protected|HasOutParms|BlueprintEvent)
	void OpenFieldGuideToItem(struct FFieldGuideCategoriesRowHandle Category, struct FItemsStaticRowHandle Item); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void SendPlayerToBedOrDropShip(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_IcarusPlayerControllerSurvival(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnHotbarPressed__DelegateSignature(int32_t Slots); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnLootAll__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void ServerMessage__DelegateSignature(struct FString Message); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnRevived__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void LocalMessageArrived__DelegateSignature(struct FString Message); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void ChatMessageArrived__DelegateSignature(struct FTChatMessage Message); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

