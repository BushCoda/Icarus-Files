// WidgetBlueprintGeneratedClass UMG_Talent_Outpost_V2.UMG_Talent_Outpost_V2_C
struct UUMG_Talent_Outpost_V2_C : UUMG_Talent_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* ArtAnimation; 
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
	struct UImage* Dot; 
	struct UImage* Dropline; 
	struct UProgressBar* DurationBackground; 
	struct UHorizontalBox* FactionMission; 
	struct UTextBlock* FlavorText; 
	struct UTextBlock* Hours; 
	struct UImage* Image; 
	struct UImage* Image_115; 
	struct UImage* Image_145; 
	struct URetainerBox* ImageMasked; 
	struct UImage* LockedIcon; 
	struct UOverlay* LockedOverlay; 
	struct UOverlay* MainOverlay; 
	struct UTextBlock* Minutes; 
	struct UBorder* Mission_Faction; 
	struct UBorder* Mission_RegularType; 
	struct UImage* MissionIcon; 
	struct UImage* MissionIcon_2; 
	struct UProgressBar* NameBackgroundBar; 
	struct UHorizontalBox* New_2; 
	struct UBorder* NewBorder; 
	struct UImage* ProspectImage; 
	struct UTextBlock* ProspectName; 
	struct UBorder* SearchHighlight; 
	struct UTextBlock* Seconds; 
	struct UHorizontalBox* Time; 
	struct UUMG_TalentRequiredIcon_C* UMG_TalentRequiredIcon; 
	struct FMulticastInlineDelegate ProspectMissionClicked; 
	struct FSlateColor TextColor; 
	int64_t ExpireTime; 
	struct UFMODEvent* FMODEvent_Hovered; 
	struct UFMODEvent* FMODEvent_Clicked; 
	bool RequirementLock; 
	bool SearchHighlightFlag; 
	struct FString CachedSearchString; 
	bool IsHoverActive; 
	bool IsUnhoverActive; 

	void UpdateDLCLockIcon(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RefreshSearchHighlight(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FString GetStringForFilterSearch(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateLockedCondition(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetTime(struct TArray<struct FString>& Time); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Refresh Hover State(struct FTalentView& TalentView); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetOverlay(struct UOverlay*& Overlay); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void BndEvt__BaseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__BaseButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__BaseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void OnStateChanged(struct FTalentModelData NewState); // (BlueprintCallable|BlueprintEvent)
	void OnTalentSet(); // (Event|Public|BlueprintEvent)
	void Set Hover States(struct FSlateColor TextColor, struct FSlateColor IconColor); // (BlueprintCallable|BlueprintEvent)
	void Refresh Display(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__BaseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__BaseButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // (BlueprintEvent)
	void SetSearchHighlight(bool bHighlighted); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_Talent_Outpost_V2(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ProspectMissionClicked__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

