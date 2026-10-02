// WidgetBlueprintGeneratedClass UMG_ProspectPin.UMG_ProspectPin_C
struct UUMG_ProspectPin_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* HoverAnimation; 
	struct UTextBlock* ActiveInsessiontext; 
	struct UBorder* ActivePlayers; 
	struct UBorder* AssignedPlayers; 
	struct UTextBlock* AssignedPlayersText; 
	struct UBorder* BackgroundHostName; 
	struct UBorder* BackgroundProspectPin; 
	struct UBorder* BackgroundSlot; 
	struct UBorder* BackgroundSlot_2; 
	struct UButton* ButtonBase; 
	struct UImage* CoinIcon; 
	struct UOverlay* CostDetails; 
	struct UTextBlock* CostText; 
	struct UTextBlock* Days; 
	struct UTextBlock* Days_2; 
	struct UTextBlock* Days_3; 
	struct UTextBlock* Days_4; 
	struct UTextBlock* Days_5; 
	struct UVerticalBox* DifficultyExoticsVbox; 
	struct UHorizontalBox* DifficultyHbox; 
	struct UTextBlock* DifficultyText; 
	struct UImage* DifficutlyIcon; 
	struct UBorder* divider; 
	struct UImage* ExoticPlaceholder; 
	struct UHorizontalBox* ExoticsHbox; 
	struct UOverlay* FactionMission; 
	struct UBorder* FilledBorder; 
	struct UBorder* FrameProspectPin; 
	struct UImage* HostIcon; 
	struct UTextBlock* HostName; 
	struct UOverlay* HostNameOverlay; 
	struct UTextBlock* Hours; 
	struct UBorder* HoveredButtonBorder; 
	struct UTextBlock* HoveredButtonText; 
	struct UImage* HoveredLines; 
	struct UOverlay* HoverEffects; 
	struct UOverlay* HoverPrompt; 
	struct UTextBlock* Minutes; 
	struct UTextBlock* PersistantText; 
	struct UHorizontalBox* PlayerSlots; 
	struct UImage* Pointer; 
	struct UBorder* PointerBorder; 
	struct UBorder* PointerFrame; 
	struct UBorder* PromptBorder; 
	struct URichTextBlock* PromptText; 
	struct UTextBlock* ProspectName; 
	struct UBorder* ProspectTitleBackground; 
	struct UTextBlock* Seconds; 
	struct UImage* SlotsIcon; 
	struct UImage* SlotsIcon_2; 
	struct UTextBlock* SlotsTitle; 
	struct UTextBlock* SlotsTitle_2; 
	struct UHorizontalBox* Time; 
	struct UBorder* TimeBorder; 
	struct UUMG_ProspectPinFactionMission_C* UMG_ProspectPinFactionMission; 
	struct UOverlay* VersionMismatch; 
	struct UBorder* VersionNumber; 
	struct UTextBlock* VersionText; 
	struct FSlateColor TitleText_Hovered; 
	struct FSlateColor TitleText_Default; 
	struct FSlateColor DetailTitleText_Default; 
	struct FFProspectServerInfo ProspectInfo; 
	enum class E_ProspectState ProspectState; 
	struct FMulticastInlineDelegate ProspectSelected; 
	struct FSlateColor DifficultyText_Easy; 
	struct FSlateColor DifficultyText_Normal; 
	struct FSlateColor DifficultyText_Hard; 
	struct FSlateColor DifficultyText_Extreme; 
	struct FSlateColor DifficultyTextColor; 
	struct FSlateColor SlotsText_Hover; 
	bool Hovered; 
	bool Pressed; 
	struct FSlateColor TitleText_Pressed; 
	struct FLinearColor Frame_Default; 
	struct FLinearColor Frame_Hovered; 
	struct FLinearColor Frame_Pressed; 
	enum class E_PinState Pin State; 
	struct FLinearColor Title; 
	struct FLinearColor TitleBackground_Default; 
	struct FLinearColor TitleBackground_Hover; 
	struct FLinearColor TitleBackground_Pressed; 
	struct FLinearColor Background_Hovered; 
	struct FLinearColor Background_Pressed; 
	struct FLinearColor Background_Default; 
	struct FSlateColor Black; 
	struct FLinearColor Claimed_Default; 
	struct FLinearColor Claimed_Hover; 
	struct FLinearColor Claimed_Pressed; 
	struct FLinearColor Claimable_Default; 
	struct FLinearColor Claimable_Hover; 
	struct FLinearColor Claimable_Pressed; 
	struct FSlateColor Detail Title Text Default; 
	struct FLinearColor OpenDefault; 
	struct FLinearColor Open_Hover; 
	struct FLinearColor Open_Pressed; 
	struct FLinearColor Joined Default; 
	struct FLinearColor Joined_Hover; 
	struct FLinearColor Joined Pressed; 
	struct FLinearColor CalimableFrame Default; 
	struct FSlateColor ClaimableTitle; 
	struct TMap<enum class EIcarusProspectDifficulty, struct FColor> DifficultyColourMap; 
	struct FSlateColor CoinDefault; 
	struct FSlateColor CoinHovered; 
	struct FSlateColor CoinPressed; 
	struct FLinearColor Occupied Default; 
	struct FLinearColor Occupied Hovered; 
	struct FLinearColor Occupied Pressed; 
	bool Active; 
	struct FMulticastInlineDelegate ProspectExpired; 
	bool Is Persistent; 

	void SetHoverdPrompt(enum class E_ProspectState ProspectState); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetPromptText(enum class E_ProspectState ProspectState); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetHasClaimedProspect(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetTime(struct TArray<struct FString>& Time); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetState(enum class E_ProspectState NewState); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Update Pin Visuals(enum class E_PinState PinState); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetProspectInfo(struct FFProspectServerInfo Prospect); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_ProspectPin(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ProspectExpired__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void ProspectSelected__DelegateSignature(struct FFProspectServerInfo Prospect, bool Active); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

