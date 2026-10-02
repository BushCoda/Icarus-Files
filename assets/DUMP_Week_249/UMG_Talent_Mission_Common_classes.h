// WidgetBlueprintGeneratedClass UMG_Talent_Mission_Common.UMG_Talent_Mission_Common_C
struct UUMG_Talent_Mission_Common_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Expand; 
	struct UBorder* Background_Expand; 
	struct UButton* BaseButton; 
	struct UBorder* Border_RewardsInfo; 
	struct UImage* CompletedTick; 
	struct UImage* DLCImage; 
	struct UBorder* DLCInfo; 
	struct UBorder* HuntLocked; 
	struct UImage* LockedIcon; 
	struct UBorder* LockedInfo; 
	struct UOverlay* MainOverlay; 
	struct UImage* MissionDevice; 
	struct UVerticalBox* MissionTypes; 
	struct UBorder* OperationCompleteInfo; 
	struct UBorder* OperationInProgressInfo; 
	struct UBorder* OperationResolveCurrent; 
	struct UBorder* OutcomeBorder; 
	struct UVerticalBox* OutcomeList; 
	struct UBorder* Outline_Expand; 
	struct UImage* ProspectImage; 
	struct UTextBlock* ProspectName; 
	struct UImage* Scanline; 
	struct UOverlay* SearchCorners; 
	struct UOverlay* TalentOverlay; 
	struct UTextBlock* TierText; 
	struct UBorder* Top_Border; 
	struct UUMG_MissionDifficulty_C* UMG_MissionDifficulty; 
	struct UUMG_MissionType_C* UMG_MissionType; 
	struct UImage* UnavailableIcon; 
	struct UBorder* UnavailableInOpenWorldInfo; 
	struct FMulticastInlineDelegate ProspectMissionClicked; 
	struct FSlateColor TextColor; 
	int64_t ExpireTime; 
	struct UFMODEvent* FMODEvent_Hovered; 
	struct UFMODEvent* FMODEvent_Clicked; 
	int32_t RemaingTime; 
	bool SearchHighlightFlag; 
	struct FString CachedSearchString; 
	bool bLock_InsufficientDeviceUpgrade; 
	struct FFactionMissionsRowHandle Mission; 
	struct UFMODEvent* FMODEvent_ClickFailed; 
	struct FIcarusProspect Prospect List; 
	bool bLock_CompletedInOW; 
	bool bLock_OW; 
	enum class ETalentState State; 
	bool bMainMission; 
	struct FGreatHuntsRowHandle GreatHunt; 
	bool bGreatHuntLock; 
	struct AIcarusPlayerState* PlayerState; 
	enum class EOnProspectAvailability LastStatus; 
	struct FTalentsRowHandle Talent; 
	enum class EOnProspectAvailability On Prospect Availability; 
	struct UUMG_ProspectRewardDisplayVertical_C* RewardWidget; 
	struct FDLCPackageDataRowHandle GH_DLC_Flag; 

	void GetErrorText(struct FText& Error); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void DoesGreatHuntTalentMatchTerrain(struct FTalentsRowHandle RowHandle, bool& Match, struct FText& Terrain Name); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnProspectSelectedHandler(struct FTalentsRowHandle TalentSelected); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Append(struct FText Text, struct FText ToAdd, bool NewLine, struct FText& Out); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateOutcomeText(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool IsLocked(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void RefreshButtonState(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetIsOpenWorld(bool IsOpenWorld); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetProspectColour(enum class ETalentProspectButtonState State); // (Public|BlueprintCallable|BlueprintEvent)
	void IsMissionCurrentlyTimeLocked(bool& IsTimeLocked); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Set Status(enum class EOnProspectAvailability Status); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RefreshSearchHighlight(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FString GetStringForFilterSearch(); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetOverlay(struct UOverlay*& Overlay); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BndEvt__BaseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void Set Hover States(struct FSlateColor TextColor, struct FSlateColor IconColor); // (BlueprintCallable|BlueprintEvent)
	void Refresh Display(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__BaseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__BaseButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // (BlueprintEvent)
	void DoNothing(); // (BlueprintCallable|BlueprintEvent)
	void ShowEncryptedPrompt(); // (BlueprintCallable|BlueprintEvent)
	void ShowMissionLockedTimer(); // (BlueprintCallable|BlueprintEvent)
	void RemoveMissionLockedTimer(); // (BlueprintCallable|BlueprintEvent)
	void ResetTalentState(); // (BlueprintCallable|BlueprintEvent)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void UpdateDependancies(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnFlagsUpdated(); // (BlueprintCallable|BlueprintEvent)
	void OnStateChanged_2(struct FTalentModelData NewState); // (BlueprintCallable|BlueprintEvent)
	void OnTalentSet_2(struct FTalentsRowHandle Talent); // (BlueprintCallable|BlueprintEvent)
	void Set Zoom Level_2(int32_t Level, float Scale); // (BlueprintCallable|BlueprintEvent)
	void SetSearchHighlight_2(bool bHighlighted); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_Talent_Mission_Common(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ProspectMissionClicked__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

