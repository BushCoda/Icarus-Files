// WidgetBlueprintGeneratedClass UMG_Talent_Prospect.UMG_Talent_Prospect_C
struct UUMG_Talent_Prospect_C : UUMG_Talent_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* NameHoverLight; 
	struct UWidgetAnimation* NewPulse; 
	struct UWidgetAnimation* NameHover; 
	struct UButton* BaseButton; 
	struct UBorder* CompletedIcon; 
	struct UTextBlock* Days; 
	struct UTextBlock* Days_2; 
	struct UTextBlock* Days_3; 
	struct UTextBlock* Days_4; 
	struct UTextBlock* Days_5; 
	struct UVerticalBox* DescriptionVertbox; 
	struct UImage* Detail; 
	struct UBorder* DLCBorder; 
	struct UImage* DLCImage; 
	struct UTextBlock* DLCName; 
	struct UImage* Dot; 
	struct UImage* Dropline; 
	struct UProgressBar* DurationBackground; 
	struct UImage* EncryptedIcon; 
	struct UBorder* Error; 
	struct UImage* ExoticsIcon; 
	struct UOverlay* ExoticsOverlay; 
	struct UTextBlock* FlavorText; 
	struct UImage* HardcoreIcon; 
	struct UOverlay* HardcoreOverlay; 
	struct UTextBlock* Hours; 
	struct UImage* Image_70; 
	struct URetainerBox* ImageMasked; 
	struct UImage* InnerShadow; 
	struct UImage* InsuranceIcon; 
	struct UOverlay* InsuranceOverlay; 
	struct UImage* LockImage; 
	struct UOverlay* MainOverlay; 
	struct UTextBlock* Minutes; 
	struct UBorder* MissionComplete; 
	struct UBorder* MissionCompleteColour; 
	struct UNamedSlot* MissionLockedTimerSlot; 
	struct UBorder* MissionUnavailable; 
	struct UBorder* MissionUnavailbaleColour; 
	struct UProgressBar* NameBackgroundBar; 
	struct UHorizontalBox* New; 
	struct UBorder* NewImage; 
	struct UImage* NewImageCap; 
	struct UHorizontalBox* Operation; 
	struct UImage* OperationCap; 
	struct UBorder* OperationImage; 
	struct UImage* ProspectImage; 
	struct UTextBlock* ProspectName; 
	struct UCanvasPanel* ProspectNameCanvas; 
	struct UOverlay* SearchHighlight; 
	struct UTextBlock* Seconds; 
	struct UImage* SpecialIcon; 
	struct UOverlay* SpecialOverlay; 
	struct UBorder* TechBorder; 
	struct UImage* TechImage; 
	struct UTextBlock* TechTierText; 
	struct UHorizontalBox* Time; 
	struct UBorder* TimeColourBorder; 
	struct UImage* TimeShortIcon; 
	struct UUMG_MissionDifficulty_C* UMG_MissionDifficulty; 
	struct UUMG_ProspectRewardDisplay_C* UMG_ProspectRewardDisplay; 
	struct UUMG_TalentRequiredIcon_C* UMG_TalentRequiredIcon; 
	struct UImage* UnavailableIcon; 
	struct UImage* UnlockIcon; 
	struct UOverlay* UnlockOverlay; 
	struct FMulticastInlineDelegate ProspectMissionClicked; 
	struct FSlateColor TextColor; 
	int64_t ExpireTime; 
	struct UFMODEvent* FMODEvent_Hovered; 
	struct UFMODEvent* FMODEvent_Clicked; 
	int32_t RemaingTime; 
	bool SearchHighlightFlag; 
	struct FString CachedSearchString; 
	bool bIsNotAvailable; 
	struct FFactionMissionsRowHandle Mission; 
	struct UFMODEvent* FMODEvent_ClickFailed; 
	struct FIcarusProspect Prospect List; 
	bool IsLockedOut; 
	bool OpenWorldLock; 

	void SetIsOpenWorld(bool IsOpenWorld); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetFlavourText(struct FText InText); // (Public|BlueprintCallable|BlueprintEvent)
	void SetProspectColour(enum class ETalentProspectButtonState State); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsMissionCurrentlyTimeLocked(bool& IsTimeLocked); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Set Status(enum class EOnProspectAvailability Status); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RefreshTalentRequirement(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RefreshSearchHighlight(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FString GetStringForFilterSearch(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetTime(struct TArray<struct FString>& Time); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Refresh Hover State(struct FTalentView& TalentView); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetOverlay(struct UOverlay*& Overlay); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Set Hover States(struct FSlateColor TextColor, struct FSlateColor IconColor); // (BlueprintCallable|BlueprintEvent)
	void Refresh Display(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__BaseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__BaseButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // (BlueprintEvent)
	void UpdateProspectSession(); // (BlueprintCallable|BlueprintEvent)
	void UpdateProspectTime(); // (BlueprintCallable|BlueprintEvent)
	void Set Zoom Level(int32_t Level, float Scale); // (BlueprintCallable|BlueprintEvent)
	void SetSearchHighlight(bool bHighlighted); // (Event|Public|BlueprintEvent)
	void DoNothing(); // (BlueprintCallable|BlueprintEvent)
	void ShowEncryptedPrompt(); // (BlueprintCallable|BlueprintEvent)
	void OnTalentSet(); // (Event|Public|BlueprintEvent)
	void ShowMissionLockedTimer(); // (BlueprintCallable|BlueprintEvent)
	void RemoveMissionLockedTimer(); // (BlueprintCallable|BlueprintEvent)
	void OnStateChanged(struct FTalentModelData NewState); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__BaseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__BaseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Talent_Prospect_BaseButton_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void ResetTalentState(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_Talent_Prospect(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ProspectMissionClicked__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

