// WidgetBlueprintGeneratedClass UMG_NotificationButton.UMG_NotificationButton_C
struct UUMG_NotificationButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UButton* MainButton; 
	struct UTextBlock* MessageTitle; 
	struct FNotification Notification; 
	struct FMulticastInlineDelegate ShowMail; 
	enum class E_MailState MailState; 
	int32_t Index; 

	void SetStyle(enum class E_MailState State); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__Button_29_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_NotificationButton(int32_t EntryPoint); // (Final|UbergraphFunction)
	void ShowMail__DelegateSignature(struct FNotification Notification, int32_t Index); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

