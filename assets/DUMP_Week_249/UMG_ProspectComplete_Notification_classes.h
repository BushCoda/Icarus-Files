// WidgetBlueprintGeneratedClass UMG_ProspectComplete_Notification.UMG_ProspectComplete_Notification_C
struct UUMG_ProspectComplete_Notification_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* GlowPulse; 
	struct UImage* ButtonImage; 
	struct UBorder* GlowBorder; 
	struct UButton* MainButton; 
	struct UBorder* PromptBorder; 
	struct UTextBlock* PromptText; 
	struct UTextBlock* ProspectCompleteText; 
	struct FSlateColor Orange; 
	struct FSlateColor White; 
	struct FSlateColor Black; 
	bool Found; 
	struct FNotification Notification; 
	struct UFMODEvent* FMODEvent_Hovered; 

	void SetHoverStateVisuals(bool Hovered); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_ProspectComplete_Notification(int32_t EntryPoint); // (Final|UbergraphFunction)
};

