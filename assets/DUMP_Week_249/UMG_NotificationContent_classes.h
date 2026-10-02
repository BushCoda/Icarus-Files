// WidgetBlueprintGeneratedClass UMG_NotificationContent.UMG_NotificationContent_C
struct UUMG_NotificationContent_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_BasicButton_2_C* CollectButton; 
	struct UUMG_BasicButton_2_C* DeleteButton; 
	struct USizeBox* OpenMail; 
	struct UHorizontalBox* ProspectInformation; 
	struct UUMG_BasicButton_2_C* ShowProspectInfoButton; 
	struct UTextBlock* Title; 
	struct UUMG_NotificationAttachments_C* UMG_NotificationAttachments; 
	int32_t Index; 
	struct FNotification Notification; 
	struct FMulticastInlineDelegate DeleteMailEvent; 
	struct FMulticastInlineDelegate CollectRewardsEvent; 

	void Update(struct FNotification Notification, int32_t Index); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__DeleteButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__CollectButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__ShowProspectInfoButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_NotificationContent(int32_t EntryPoint); // (Final|UbergraphFunction)
	void CollectRewardsEvent__DelegateSignature(struct FString ID); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void DeleteMailEvent__DelegateSignature(struct FString ID); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

