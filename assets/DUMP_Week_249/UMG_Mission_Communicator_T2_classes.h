// WidgetBlueprintGeneratedClass UMG_Mission_Communicator_T2.UMG_Mission_Communicator_T2_C
struct UUMG_Mission_Communicator_T2_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* AnglePiece; 
	struct UHorizontalBox* AvailableQuests; 
	struct UOverlay* CannotRequestMission; 
	struct UTextBlock* CanRequest; 
	struct UOverlay* CanRequestMission; 
	struct UUMG_BasicButton_2_C* CloseButton; 
	struct UOverlay* CommunicatorUnsheltered; 
	struct UOverlay* DynamicMissionTimeout; 
	struct UOverlay* DynamicMissionUnavaible; 
	struct UOverlay* PriorityMissions; 
	struct UTextBlock* RecentlyCancelled; 
	struct UTextBlock* Requested; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; 
	struct UUMG_DynamicQuestOption_C* UMG_DynamicQuestOption; 
	struct UUMG_DynamicQuestOption_C* UMG_DynamicQuestOption_2; 
	struct UUMG_PriorityMissionOverlay_C* UMG_PriorityMissionOverlay; 
	struct FSessionFlagsRowHandle Session Flag; 
	bool IsOpenWorld; 
	struct FFactionMissionsRowHandle PROMission1; 
	struct FProspectListRowHandle PROProspect1; 
	bool CompletedP1; 
	bool CompletedP2; 
	struct FFactionMissionsRowHandle PROMission2; 
	struct FProspectListRowHandle PROProspect2; 
	bool Is Outpost Prospect; 

	void UpdateMissionStart(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetIcarusMap(struct FTalentArchetypesRowHandle& Archetype); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	int32_t GetQuestCancelDelay(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void SelectedQuest(struct FDynamicQuestsRowHandle Quest); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_Mission_Communicator_T2_UMG_BasicButton_2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void CancelQuest(); // (BlueprintCallable|BlueprintEvent)
	void Nothing(); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void RefreshAbandonedText(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_Mission_Communicator_T2_UMG_PriorityMissionOverlay_K2Node_ComponentBoundEvent_4_StartMission__DelegateSignature(struct FFactionMissionsRowHandle Mission, struct FProspectListRowHandle Prospect); // (BlueprintEvent)
	void BndEvt__UMG_Mission_Communicator_T2_UMG_PriorityMissionOverlay_K2Node_ComponentBoundEvent_5_DismissOverlay__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_Mission_Communicator_T2(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

