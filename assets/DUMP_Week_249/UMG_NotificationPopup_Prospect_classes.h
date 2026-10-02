// WidgetBlueprintGeneratedClass UMG_NotificationPopup_Prospect.UMG_NotificationPopup_Prospect_C
struct UUMG_NotificationPopup_Prospect_C : UUMG_NotificationPopup_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Fade_In; 
	struct UUMG_BasicButton_2_C* ClaimButton; 
	struct UUMG_ButtonIcon_C* CloseButton; 
	struct UTextBlock* DaysText; 
	struct UUMG_BasicButton_2_C* DeleteButton; 
	struct USizeBox* DeleteSizeBox; 
	struct UImage* divider_3; 
	struct UImage* divider_4; 
	struct UTextBlock* FlavourText; 
	struct UImage* Gradient; 
	struct UTextBlock* HoursText; 
	struct UImage* Image_120; 
	struct UBorder* LoadingScreen; 
	struct URetainerBox* Mask; 
	struct UTextBlock* MinutesText; 
	struct UVerticalBox* PlayerList; 
	struct UTextBlock* ProspectDescription; 
	struct UTextBlock* ProspectName; 
	struct UTextBlock* ProspectName_2; 
	struct UVerticalBox* ProspectRewards; 
	struct URetainerBox* RetainerBox_1; 
	struct UOverlay* RightSideOverlay; 
	struct UImage* Trim2; 
	struct UUMG_LoadingIcon_C* UMG_LoadingIcon; 
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer; 
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_2; 
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_3; 
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_4; 
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_5; 
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_6; 
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_7; 
	struct UUMG_NotificationAttachmentsProspect_C* UMG_NotificationAttachmentsProspect; 
	struct UUMG_ProspectRewards_C* UMG_ProspectRewards; 
	struct UUMG_ProspectRewards_C* UMG_ProspectRewards_130; 

	void UpdateAttachments(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateProspect(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetLoadingWidget(struct UWidget*& Loading); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Update(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__ClaimButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(); // (BlueprintEvent)
	void PlayFadeIn(); // (BlueprintCallable|BlueprintEvent)
	void PlayShowEffects(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_NotificationPopup_Prospect(int32_t EntryPoint); // (Final|UbergraphFunction)
};

