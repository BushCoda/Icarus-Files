// WidgetBlueprintGeneratedClass UMG_GreatHunt_MissionSelected.UMG_GreatHunt_MissionSelected_C
struct UUMG_GreatHunt_MissionSelected_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* ShowMain; 
	struct UWidgetAnimation* SwitchAnimation; 
	struct UWidgetAnimation* OpenAnimation; 
	struct UUMG_BasicButton_2_C* AbandonOperation; 
	struct UUMG_BasicButton_2_C* BeginOperation; 
	struct UWidgetSwitcher* ButtonSwitcher; 
	struct UHorizontalBox* Currency; 
	struct UTextBlock* DescriptionText; 
	struct UTextBlock* HuntDescription; 
	struct UImage* HuntImage; 
	struct UTextBlock* HuntName; 
	struct UOverlay* HuntOverview; 
	struct UImage* Image; 
	struct UImage* Image_111; 
	struct UOverlay* Main; 
	struct UOverlay* MissionOverview; 
	struct UVerticalBox* OutcomesBox; 
	struct UVerticalBox* OutcomesList; 
	struct UTextBlock* ProspectName; 
	struct UImage* ProspectTexture; 
	struct UHorizontalBox* Rewards; 
	struct UVerticalBox* StatusList; 
	struct UUMG_GreatHunt_ObjectiveList_C* UMG_GreatHunt_ObjectiveList; 
	struct UUMG_MissionDifficulty_C* UMG_MissionDifficulty; 
	struct UUMG_WorkshopCostLarge_C* UMG_WorkshopCostLarge; 
	struct FMulticastInlineDelegate OperationSelected; 
	struct FFProspectServerInfo Prospect Info; 
	struct UFMODEvent* FMODEvent_AcceptClaimProspect; 
	enum class EMissionDifficulty CachedDifficulty; 
	struct FMulticastInlineDelegate OperationClosed; 
	struct FText ChoiceProspects; 
	bool IncorrectProspect; 
	struct FString RequiredDLCText; 
	struct FTalentsRowHandle Talent; 
	struct FFactionMissionsRowHandle Faction Mission; 
	bool IsLocked; 

	void SetActiveButton(); // (Public|BlueprintCallable|BlueprintEvent)
	void IsCurrentMission(struct FTalentsRowHandle Talent, bool& IsCurrentMission); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RefreshSelectedButton(bool Disabled, struct FTalentsRowHandle Talent); // (Public|BlueprintCallable|BlueprintEvent)
	void Select Hover Text(struct FTalentsRowHandle Talent, bool IsLocked); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void HideBeginOperations(bool Hide); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateOutcomes(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ShowHuntOverview(bool bVisibility, struct FTalentArchetypesRowHandle Archetype); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateRewards(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetSelectedProspectInfo(struct FFProspectServerInfo& Prospect Info); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ShowSelectedProspect(struct FFProspectServerInfo Prospect, bool Active, bool IsLocked, struct FTalentsRowHandle Talent); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_MissionBoardProspectSelected_StartOperation_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void SelectProspect(); // (BlueprintCallable|BlueprintEvent)
	void CancelProspectSelect(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnFlagUpdated(); // (BlueprintCallable|BlueprintEvent)
	void CancelQuest(); // (BlueprintCallable|BlueprintEvent)
	void Nothing(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_GreatHunt_MissionSelected_AbandonOperation_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_GreatHunt_MissionSelected(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OperationClosed__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OperationSelected__DelegateSignature(struct FFProspectServerInfo ProspectInfo); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

