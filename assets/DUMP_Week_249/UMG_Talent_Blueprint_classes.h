// WidgetBlueprintGeneratedClass UMG_Talent_Blueprint.UMG_Talent_Blueprint_C
struct UUMG_Talent_Blueprint_C : UUMG_Talent_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* UnlockedAnimation; 
	struct UWidgetAnimation* HoverAnimation; 
	struct UBorder* CountBorder; 
	struct URetainerBox* Desaturator; 
	struct UImage* Glow_2; 
	struct UOverlay* Hoverframe; 
	struct UImage* Icon; 
	struct UOverlay* MainOverlay; 
	struct UTextBlock* Numerator; 
	struct UOverlay* RecipeCount; 
	struct UTextBlock* ReqLevelNumber; 
	struct UBorder* ReqTextBorder; 
	struct UOverlay* RequiredLevel; 
	struct UImage* requiredlevelbase; 
	struct UOverlay* SearchHighlight; 
	struct USizeBox* TalentBox; 
	struct UButton* TalentButton; 
	struct UBorder* TextBorder; 
	struct UTextBlock* TextName; 
	struct UUMG_FeatureLevelIcon_C* UMG_FeatureLevelIcon; 
	struct UUMG_BlueprintTalent_RecipeCount_C* UMG_RecipeCount; 
	struct UUMG_TalentRequiredIcon_C* UMG_TalentRequiredIcon; 
	struct FMulticastInlineDelegate OnTalentClicked; 
	struct FSlateColor TextColor; 
	struct FSlateColor ButtonStateColour; 
	struct FText NodeName; 
	struct UUMG_TalentTooltip_Blueprint_C* TalentTooltip; 
	struct UFMODEvent* Fmod_HoveredToolTip; 
	struct FFMODEventInstance FMOD_HoveredToolTip_Ref; 
	struct UUMG_TalentTooltip_Group_C* TooltipGroup; 
	bool SearchHighlightFlag; 
	struct FString CachedSearchString; 
	int32_t Count; 
	struct TArray<struct FName> Out Row Names; 
	int32_t CurrentIndex; 

	struct FString GetStringForFilterSearch(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void RefreshSearchHighlight(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateTooltipAndComingSoon(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateTooltip(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateRequiredTalent(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Update Required Level(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateDesaturationMaterial(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetOverlay(struct UOverlay*& Overlay); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Set Icon(struct TSoftObjectPtr<UTexture2D> Texture); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetSize(struct FVector2D InVec); // (Public|BlueprintCallable|BlueprintEvent)
	void Refresh Hover State(struct FTalentView& TalentView); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Finished_A81076484900AC102F0EE58623931564(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // (BlueprintEvent)
	void Refresh Display(); // (BlueprintCallable|BlueprintEvent)
	void Set Hover States(struct FSlateColor TextColor, struct FSlateColor IconColor); // (BlueprintCallable|BlueprintEvent)
	void OnStateChanged(struct FTalentModelData NewState); // (BlueprintCallable|BlueprintEvent)
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void SetSearchHighlight(bool bHighlighted); // (Event|Public|BlueprintEvent)
	void OnTalentSet(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_Talent_Blueprint(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnTalentClicked__DelegateSignature(struct FTalentsRowHandle Talent); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

