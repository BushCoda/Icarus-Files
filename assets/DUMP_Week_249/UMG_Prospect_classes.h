// WidgetBlueprintGeneratedClass UMG_Prospect.UMG_Prospect_C
struct UUMG_Prospect_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UOverlay* FactionMissonOverlay; 
	struct UUMG_ToggleButton_Favorites_C* FavoritesButton; 
	struct UImage* HardcoreIcon; 
	struct UTextBlock* HostName; 
	struct UBorder* Inactive; 
	struct UBorder* MainBorder; 
	struct UButton* MainButton; 
	struct UImage* PasswordRequired; 
	struct UTextBlock* PingText; 
	struct UTextBlock* PlayerCount; 
	struct USizeBox* Privacy; 
	struct UTextBlock* ProspectDifficulty; 
	struct UTextBlock* ProspectName; 
	struct UTextBlock* ProspectTime; 
	struct UUMG_ProspectPinFactionMission_C* UMG_ProspectPinFactionMission_2; 
	struct USizeBox* VersionBox; 
	struct UBorder* VersionMismatch; 
	struct UBorder* VersionRevision; 
	struct UTextBlock* VersionText; 
	enum class E_ProspectState Prospect State; 
	struct TMap<enum class E_ButtonState, struct FSlateColor> Prospect Pin State Text Colour; 
	struct FSlateColor DifficultyColour; 
	struct FSlateColor In Color and Opacity; 
	bool Active; 
	struct UIcarusSessionResult* SessionResult; 
	int32_t Ping; 

	void UpdateFavoriteState(bool Toggled); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdatePing(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetProspectDifficulty(enum class EMissionDifficulty Difficulty, struct FName& RowName); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateTooltip(struct FText ToolTipText); // (Public|BlueprintCallable|BlueprintEvent)
	void SetState(enum class E_ProspectState NewState); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FText GetTimeRemaining(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateProspectInfo(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature(); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnListItemObjectSet(struct UObject* ListItemObject); // (Event|Protected|BlueprintEvent)
	void UpdateTextColor(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_Prospect_UMG_ToggleButton_Favorites_361_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void BndEvt__UMG_Prospect_UMG_ToggleButton_Favorites_361_K2Node_ComponentBoundEvent_1_Untoggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_Prospect(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

