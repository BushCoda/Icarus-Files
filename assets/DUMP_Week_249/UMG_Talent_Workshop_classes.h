// WidgetBlueprintGeneratedClass UMG_Talent_Workshop.UMG_Talent_Workshop_C
struct UUMG_Talent_Workshop_C : UUMG_Talent_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* UnlockedAnimation; 
	struct UWidgetAnimation* HoverAnimation; 
	struct UImage* Corner; 
	struct UBorder* CountBorder; 
	struct UBorder* Frame; 
	struct UImage* Glow; 
	struct UImage* Glow_2; 
	struct UOverlay* Hoverframe; 
	struct UImage* Icon; 
	struct UBorder* IconBorder; 
	struct URetainerBox* IconDesaturator; 
	struct UOverlay* LockOverlay; 
	struct UTextBlock* Numerator; 
	struct UBorder* RequiredMission; 
	struct USizeBox* SearchHighlight; 
	struct USizeBox* TalentBox; 
	struct UButton* TalentButton; 
	struct UUMG_FeatureLevelIcon_C* UMG_FeatureLevelIcon; 
	struct UUMG_TalentRequiredIcon_C* UMG_TalentRequiredIcon; 
	struct UImage* UnlockBottom; 
	struct UProgressBar* UnlockedBar; 
	struct USizeBox* UnlockRequirement; 
	struct UTextBlock* UnlockText; 
	struct UImage* UnlockTop; 
	struct UUMG_TalentTooltip_Workshop_C* TalentTooltip; 
	struct FMulticastInlineDelegate OnTalentClicked; 
	struct FSlateColor TextColor; 
	struct FSlateColor ButtonStateColour; 
	struct FWorkshopItem Workshop Item; 
	struct FTalent Talents; 
	struct FText Display Name; 
	struct FFMODEventInstance FMOD_ProgressAnim_Instance; 
	struct UFMODEvent* FMODEvent_Clicked; 
	struct UFMODEvent* FMODEvent_HoveredTooltip; 
	struct UFMODEvent* FMODEvent_Purchased; 
	bool RequirementLock; 
	bool SearchHighlightFlag; 
	struct FString CachedSearchString; 
	bool FirstTimeSetup; 

	void RefreshSearchHighlight(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FString GetStringForFilterSearch(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateUnlockCondition(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateRequiredTalent(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateDesaturationMaterial(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CanAffordItem(struct TArray<struct FWorkshopCost>& Array, bool& CanAffordItem); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetItemReplicationCost(struct FText& Cost); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetItemResearchCost(struct FText& Cost); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Setup(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Set Icon(struct TSoftObjectPtr<UTexture2D> SoftTexture); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Refresh Hover State(struct FTalentView& TalentView); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Finished_0A1DEBFE487603FCE6C501A4EFEFFB8F(); // (BlueprintCallable|BlueprintEvent)
	void OnTalentSet(); // (Event|Public|BlueprintEvent)
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // (BlueprintEvent)
	void Refresh Display(); // (BlueprintCallable|BlueprintEvent)
	void Set Hover States(struct FSlateColor TextColor, struct FSlateColor IconColor); // (BlueprintCallable|BlueprintEvent)
	void OnStateChanged(struct FTalentModelData NewState); // (BlueprintCallable|BlueprintEvent)
	void ResearchItem(); // (BlueprintCallable|BlueprintEvent)
	void ReplicateItem(); // (BlueprintCallable|BlueprintEvent)
	void Research(); // (BlueprintCallable|BlueprintEvent)
	void Cancel(); // (BlueprintCallable|BlueprintEvent)
	void Replicate(); // (BlueprintCallable|BlueprintEvent)
	void Cancel2(); // (BlueprintCallable|BlueprintEvent)
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void Nothing(); // (BlueprintCallable|BlueprintEvent)
	void ShowCannotAfford(); // (BlueprintCallable|BlueprintEvent)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void SetSearchHighlight(bool bHighlighted); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_Talent_Workshop(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnTalentClicked__DelegateSignature(struct FTalentsRowHandle Talent); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

