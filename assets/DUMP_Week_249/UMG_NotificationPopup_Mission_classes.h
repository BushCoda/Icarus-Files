// WidgetBlueprintGeneratedClass UMG_NotificationPopup_Mission.UMG_NotificationPopup_Mission_C
struct UUMG_NotificationPopup_Mission_C : UUMG_NotificationPopup_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Fade_In; 
	struct UUMG_BasicButton_2_C* ClaimButton; 
	struct UUMG_ButtonIcon_C* CloseButton; 
	struct UUMG_BasicButton_2_C* DeleteButton; 
	struct UImage* Image_120; 
	struct UBorder* LoadingScreen; 
	struct URetainerBox* Mask; 
	struct UImage* ProspectImage; 
	struct UTextBlock* ProspectName; 
	struct UTextBlock* ProspectName_2; 
	struct URetainerBox* RetainerBox_1; 
	struct UImage* Trim2; 
	struct UUMG_LoadingIcon_C* UMG_LoadingIcon; 
	struct UUMG_MissionCompleteFaction_C* UMG_MissionCompleteFaction; 
	struct UUMG_NotificationAttachments_C* UMG_NotificationAttachments; 
	struct UUMG_ProspectObjectiveList_C* UMG_ProspectObjectiveList; 

	void UpdateAttachments(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateProspect(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetLoadingWidget(struct UWidget*& Loading); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Update(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__ClaimButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(); // (BlueprintEvent)
	void PlayShowEffects(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_NotificationPopup_Mission(int32_t EntryPoint); // (Final|UbergraphFunction)
};

