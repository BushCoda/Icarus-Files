// WidgetBlueprintGeneratedClass UMG_Talent_Prospect_NEW.UMG_Talent_Prospect_NEW_C
struct UUMG_Talent_Prospect_NEW_C : UUMG_Talent_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Expand; 
	struct UBorder* Background_Expand; 
	struct UButton* BaseButton; 
	struct UBorder* Border_RewardsInfo; 
	struct UImage* CompletedTick; 
	struct UOverlay* corneroverlay; 
	struct UTextBlock* Days; 
	struct UTextBlock* Days_2; 
	struct UTextBlock* Days_3; 
	struct UTextBlock* Days_4; 
	struct UTextBlock* Days_5; 
	struct UImage* DLCImage; 
	struct UBorder* DLCInfo; 
	struct UTextBlock* Hours; 
	struct UImage* HoverGlow; 
	struct UImage* LockedIcon; 
	struct UBorder* LockedInfo; 
	struct UOverlay* MainOverlay; 
	struct UTextBlock* Minutes; 
	struct UImage* MissionDevice; 
	struct UVerticalBox* MissionTypes; 
	struct UBorder* OperationCompleteInfo; 
	struct UBorder* OutcomeBorder; 
	struct UVerticalBox* OutcomeList; 
	struct UBorder* Outline_Expand; 
	struct UImage* ProspectImage; 
	struct UTextBlock* ProspectName; 
	struct UImage* Scanline; 
	struct UOverlay* SearchCorners; 
	struct UImage* SearchGlow; 
	struct UTextBlock* Seconds; 
	struct UTextBlock* TierText; 
	struct UHorizontalBox* Time; 
	struct UBorder* TimeInfo; 
	struct UImage* TimeShortIcon; 
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
	bool bUnlockedReward; 
	enum class EOnProspectAvailability On Prospect Availability; 
	enum class EOnProspectAvailability LastStatus; 
	bool Is Open World; 
	struct UUMG_ProspectRewardDisplayVertical_C* RewardWidget; 
	bool NeedsStatusUpdate; 

	void InternalSetStatus(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetErrorText(struct FText& ErrorText); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateOutcomeText(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnProspectSelectedHandler(struct FTalentsRowHandle ProspectTalent); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Append(struct FText Text, struct FText ToAdd, struct FText& Out); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool IsLocked(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void RefreshButtonState(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetIsOpenWorld(bool IsOpenWorld); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetProspectColour(enum class ETalentProspectButtonState State); // (Public|BlueprintCallable|BlueprintEvent)
	void IsMissionCurrentlyTimeLocked(bool& IsTimeLocked); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Set Status(enum class EOnProspectAvailability Status); // (Public|BlueprintCallable|BlueprintEvent)
	void RefreshSearchHighlight(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FString GetStringForFilterSearch(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetTime(struct TArray<struct FString>& Time); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetOverlay(struct UOverlay*& Overlay); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Set Hover States(struct FSlateColor TextColor, struct FSlateColor IconColor); // (BlueprintCallable|BlueprintEvent)
	void Refresh Display(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__BaseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__BaseButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // (BlueprintEvent)
	void UpdateProspectSession(); // (BlueprintCallable|BlueprintEvent)
	void OnStateChanged(struct FTalentModelData NewState); // (BlueprintCallable|BlueprintEvent)
	void UpdateProspectTime(); // (BlueprintCallable|BlueprintEvent)
	void Set Zoom Level(int32_t Level, float Scale); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__BaseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void OnTalentSet(); // (Event|Public|BlueprintEvent)
	void SetSearchHighlight(bool bHighlighted); // (Event|Public|BlueprintEvent)
	void DoNothing(); // (BlueprintCallable|BlueprintEvent)
	void ShowEncryptedPrompt(); // (BlueprintCallable|BlueprintEvent)
	void ShowMissionLockedTimer(); // (BlueprintCallable|BlueprintEvent)
	void RemoveMissionLockedTimer(); // (BlueprintCallable|BlueprintEvent)
	void ResetTalentState(); // (BlueprintCallable|BlueprintEvent)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void UpdateSpecialRewards(); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_Talent_Prospect_NEW(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ProspectMissionClicked__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

