// WidgetBlueprintGeneratedClass UMG_PartyMemberSpace.UMG_PartyMemberSpace_C
struct UUMG_PartyMemberSpace_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UButton* Button_89; 
	struct UBorder* ColourBorder; 
	struct UUMG_BasicButton_2_C* KickButton; 
	struct UBorder* PlayerBorder; 
	struct UBorder* PlayerIcon; 
	struct UTextBlock* PlayerIndex; 
	struct UTextBlock* PlayerLevel; 
	struct UTextBlock* PlayerNameText; 
	struct UBorder* ReadyBox; 
	struct UBorder* ShareBorder; 
	struct USlider* SharesSlider; 
	struct UTextBlock* SharesText; 
	struct APlayerState* PlayerState; 
	struct FSlateColor EmptyPlayerColour; 
	struct FSlateColor ValidPlayerColour; 
	struct FMulticastInlineDelegate SharesSliderChanged; 
	struct FSlateBrush NotReady; 
	struct FSlateBrush Ready; 
	struct FLinearColor ValidBorderColour; 
	struct FLinearColor InvalidBorderColour; 
	struct FText PlayerName; 

	void UpdateKickButton(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateReadyState(bool Ready); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateSharesValue(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateMemberColour(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetPlayerState(struct APlayerState* PlayerState); // (Public|BlueprintCallable|BlueprintEvent)
	void GetColorAndOpacity(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdatePlayerName(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdatePlayerLevel(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdatePlayerIcon(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SliderValueChange(float Value); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__KickButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_PartyMemberSpace(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void SharesSliderChanged__DelegateSignature(struct UUMG_PartyMemberSpace_C* PartyMember, float SliderValueChange); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

