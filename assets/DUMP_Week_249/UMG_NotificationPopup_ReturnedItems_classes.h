// WidgetBlueprintGeneratedClass UMG_NotificationPopup_ReturnedItems.UMG_NotificationPopup_ReturnedItems_C
struct UUMG_NotificationPopup_ReturnedItems_C : UUMG_NotificationPopup_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Fade_In; 
	struct UUMG_BasicButton_2_C* ClaimButton; 
	struct UUMG_ButtonIcon_C* CloseButton; 
	struct UUMG_BasicButton_2_C* DeleteButton; 
	struct USizeBox* DeleteSizeBox; 
	struct UImage* divider_3; 
	struct UImage* divider_4; 
	struct UImage* Gradient; 
	struct UImage* Image_120; 
	struct URetainerBox* Mask; 
	struct UTextBlock* NotificationDescription; 
	struct UTextBlock* NotificationName; 
	struct UVerticalBox* PlayerList; 
	struct UTextBlock* ProspectName; 
	struct UOverlay* RightSideOverlay; 
	struct UImage* Trim2; 
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer; 
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_2; 
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_3; 
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_4; 
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_5; 
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_6; 
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_7; 
	struct UUMG_NotificationAttachmentsReturnedItems_C* UMG_NotificationAttachmentsReturnedItems; 

	void UpdateAttachments(); // (Public|BlueprintCallable|BlueprintEvent)
	void Update(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__ClaimButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(); // (BlueprintEvent)
	void PlayShowEffects(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_NotificationPopup_ReturnedItems(int32_t EntryPoint); // (Final|UbergraphFunction)
};

