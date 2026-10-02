// WidgetBlueprintGeneratedClass UMG_Talent_Player.UMG_Talent_Player_C
struct UUMG_Talent_Player_C : UUMG_Talent_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* CompleteAnimation; 
	struct UWidgetAnimation* UnlockedAnimation; 
	struct UWidgetAnimation* HoverAnimation; 
	struct UOverlay* ComingSoonOverlay; 
	struct UProgressBar* CompleteFrameBar; 
	struct UBorder* CountBorder; 
	struct UTextBlock* Denominator; 
	struct URetainerBox* Desaturator; 
	struct UImage* Glow; 
	struct UOverlay* HoverCorners; 
	struct UImage* Icon; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_49; 
	struct UOverlay* MainOverlay; 
	struct UImage* MissingRewards; 
	struct UTextBlock* Numerator; 
	struct URetainerBox* RankDesaturator; 
	struct UImage* RankIcon; 
	struct UOverlay* SearchHighlight; 
	struct UTextBlock* Separator; 
	struct USizeBox* TalentBox; 
	struct UButton* TalentButton; 
	struct UUMG_Talent_ComingSoon_C* UMG_Talent_ComingSoon; 
	struct UProgressBar* UnlockedBar; 
	struct UProgressBar* UnlockedCount; 
	struct FMulticastInlineDelegate OnTalentClicked; 
	struct FSlateColor TextColor; 
	struct FTalentRanksRowHandle Talent Rank; 
	bool SearchHighlightFlag; 
	struct FString CachedSearchString; 

	void RefreshSearchHighlight(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FString GetStringForFilterSearch(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetOverlay(struct UOverlay*& Overlay); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateDesaturationMaterial(); // (Public|BlueprintCallable|BlueprintEvent)
	void Set Icon(struct TSoftObjectPtr<UTexture2D> SoftTexture); // (Public|BlueprintCallable|BlueprintEvent)
	void Refresh Hover State(struct FTalentView& TalentView); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Finished_3C782BCA44885C4331A270B17A1E04E8(); // (BlueprintCallable|BlueprintEvent)
	void OnTalentSet(); // (Event|Public|BlueprintEvent)
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // (BlueprintEvent)
	void Refresh Display(); // (BlueprintCallable|BlueprintEvent)
	void Set Hover States(struct FSlateColor TextColor, struct FSlateColor IconColor); // (BlueprintCallable|BlueprintEvent)
	void OnStateChanged(struct FTalentModelData NewState); // (BlueprintCallable|BlueprintEvent)
	void Setup Talent Rank(); // (BlueprintCallable|BlueprintEvent)
	void RequestRefund(); // (BlueprintCallable|BlueprintEvent)
	void Nothing(); // (BlueprintCallable|BlueprintEvent)
	void Confirm(); // (BlueprintCallable|BlueprintEvent)
	void DoNothing(); // (BlueprintCallable|BlueprintEvent)
	void AlsoNothing(); // (BlueprintCallable|BlueprintEvent)
	void CustomEvent(); // (BlueprintCallable|BlueprintEvent)
	void SetSearchHighlight(bool bHighlighted); // (Event|Public|BlueprintEvent)
	void FillTooltip(struct UTalentTooltipWidget* NewTooltipWidget); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_UMG_Talent_Player(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnTalentClicked__DelegateSignature(struct FTalentsRowHandle Talent); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

