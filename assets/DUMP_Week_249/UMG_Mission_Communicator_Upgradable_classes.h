// WidgetBlueprintGeneratedClass UMG_Mission_Communicator_Upgradable.UMG_Mission_Communicator_Upgradable_C
struct UUMG_Mission_Communicator_Upgradable_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_BasicButton_2_C* AbandonButton; 
	struct UHorizontalBox* AvailableQuests; 
	struct UUMG_ContactButton_C* Boss; 
	struct USizeBox* BossButton; 
	struct UOverlay* Bosses_Menu; 
	struct UBorder* BossLock; 
	struct UUMG_MissionCategorySelectButton_C* Campaigns; 
	struct UOverlay* CannotRequestMission; 
	struct UTextBlock* CanRequest; 
	struct UTextBlock* CanRequest_2; 
	struct UOverlay* CommunicatorUnavailable; 
	struct UOverlay* CommunicatorUnsheltered; 
	struct UOverlay* DynamicMissionTimeout; 
	struct UOverlay* ErrorOverlay; 
	struct UUMG_BasicButton_2_C* ErrorOverlayClose; 
	struct UOverlay* GreatHunts_Menu; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_67; 
	struct UImage* Image_73; 
	struct UImage* Image_95; 
	struct UImage* Image_122; 
	struct UImage* Image_138; 
	struct UUMG_BasicButton_2_C* MissionUnavailableButton; 
	struct USizeBox* NorexUpgrade; 
	struct UUMG_MissionCategorySelectButton_C* Operations; 
	struct UOverlay* Operations_Menu; 
	struct UUMG_MissionBoardProspectSelected_C* ProspectSelected; 
	struct UNamedSlot* ProspectViewSlot; 
	struct UWidgetSwitcher* ProspectViewSwitcher; 
	struct UTextBlock* RecentlyCancelled; 
	struct UTextBlock* Requested; 
	struct UUMG_ContactButton_C* Selection; 
	struct UOverlay* Selection_Menu; 
	struct UHorizontalBox* SelectionOptions; 
	struct UOverlay* SMPL3_Menu; 
	struct UUMG_MissionCategorySelectButton_C* SMPL3Quests; 
	struct UWidgetSwitcher* Switcher; 
	struct UUMG_CloseButton_2_C* UMG_CloseButton_3; 
	struct UUMG_DynamicQuestOption_C* UMG_DynamicQuestOption; 
	struct UUMG_DynamicQuestOption_C* UMG_DynamicQuestOption_92; 
	struct UUMG_GreatHunt_Boss_C* UMG_GreatHunt_Boss; 
	struct UUMG_GreatHunt_Interface_C* UMG_GreatHunt_Interface; 
	struct UUMG_Hotbar_C* UMG_Hotbar; 
	struct UUMG_MissionBoardProspectSelected_C* UMG_MissionBoardProspectSelected_415; 
	struct UUMG_PlayerInventory_C* UMG_PlayerInventory; 
	struct UTextBlock* Upgrade1Missing; 
	struct UUMG_InventoryItemSlow_C* Upgrade1Slot; 
	struct UTextBlock* Upgrade1Status; 
	struct UTextBlock* Upgrade1Unlock; 
	struct UTextBlock* Upgrade2Missing; 
	struct UUMG_InventoryItemSlow_C* Upgrade2Slot; 
	struct UTextBlock* Upgrade2Status; 
	struct UTextBlock* Upgrade2Unlock; 
	struct UUMG_InventoryItemSlow_C* Upgrade3Slot; 
	struct UTextBlock* Upgrade3Status; 
	struct UTextBlock* Upgrade3Unlock; 
	struct USizeBox* UpgradeInterface; 
	struct UUMG_ContactButton_C* Upgrades; 
	struct UOverlay* Upgrades_Menu; 
	struct FSessionFlagsRowHandle Session Flag; 
	bool IsOpenWorld; 
	struct UUMG_TalentView_Prospect_C* TalentViewProspect; 
	bool HasUpgrade1; 
	bool HasUpgrade2; 
	bool HasUpgrade3; 
	bool Is Outpost Prospect; 
	struct FCharacterFlagsRowHandle GreatHuntIntroDialogueFlag; 
	struct FDialogueRowHandle GreatHuntsIntroDialogue; 
	enum class EOnProspectAvailability CurrentEncryptionState; 

	void Make Prospect Server Info(struct FProspectInfo& ProspectInfo); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpgradeInventoryUpdatedHandler(struct UInventory* Inventory, int32_t Location); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ConfigureUpgrades(); // (Public|BlueprintCallable|BlueprintEvent)
	void PlayProspectAudio(struct FFProspectServerInfo Prospect); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void StopProspectAudio(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetArchetypeForCurrentProspectData(struct FTalentArchetypesRowHandle& Archetype); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateMissionStart(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetIcarusMap(struct FTalentArchetypesRowHandle& Archetype); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	int32_t GetQuestCancelDelay(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SelectedQuest(struct FDynamicQuestsRowHandle Quest); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_Mission_Communicator_T2_UMG_BasicButton_2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void CancelQuest(); // (BlueprintCallable|BlueprintEvent)
	void Nothing(); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void RefreshAbandonedText(); // (BlueprintCallable|BlueprintEvent)
	void TalentProspectSelected(struct FFProspectServerInfo ProspectInfo, struct FText Error); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_Mission_Communicator_Upgradable_Operations_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Mission_Communicator_Upgradable_SMPL3Quests_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(); // (BlueprintEvent)
	void OperationSelected(struct FFProspectServerInfo ProspectInfo); // (BlueprintCallable|BlueprintEvent)
	void OperationCancelled(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_Mission_Communicator_Upgradable_Campaigns_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Mission_Communicator_Upgradable_ErrorOverlayClose_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_Mission_Communicator_Upgradable_Selection_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Mission_Communicator_Upgradable_Boss_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Mission_Communicator_Upgradable_Upgrades_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Mission_Communicator_Upgradable_UMG_CloseButton_2_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Mission_Communicator_Upgradable_MissionUnavailableButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_Mission_Communicator_Upgradable(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

