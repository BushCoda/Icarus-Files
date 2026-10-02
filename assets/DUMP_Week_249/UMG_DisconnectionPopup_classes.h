// WidgetBlueprintGeneratedClass UMG_DisconnectionPopup.UMG_DisconnectionPopup_C
struct UUMG_DisconnectionPopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* SlideIn; 
	struct UTextBlock* ContentText; 
	struct UImage* divider; 
	struct UImage* divider_2; 
	struct UImage* Gradient; 
	struct UImage* Icon; 
	struct UBorder* PromptBorder; 
	struct UTextBlock* RetryingTimer; 
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt; 
	struct FText In Text; 
	struct FTimerHandle TimerHandle; 
	bool bShowingWarning; 
	bool bShowEscapePrompt; 
	bool bShowRetryTimer; 
	struct FTimerHandle RetryTimerHandle; 

	void UpdateRetryTimer(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void HideWarningMessage(); // (Public|BlueprintCallable|BlueprintEvent)
	void ShowWarningMessage(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateWarningMessage(); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_DisconnectionPopup(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

