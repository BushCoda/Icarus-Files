// WidgetBlueprintGeneratedClass UMG_ProspectHistoryEntry.UMG_ProspectHistoryEntry_C
struct UUMG_ProspectHistoryEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* Inactive; 
	struct UBorder* MainBorder; 
	struct UButton* MainButton; 
	struct UTextBlock* ProspectDifficulty; 
	struct UTextBlock* ProspectName; 
	struct UTextBlock* ProspectTime; 
	struct UTextBlock* ProspectType; 
	enum class E_ProspectState Prospect State; 
	struct TMap<enum class E_ButtonState, struct FSlateColor> Prospect Pin State Text Colour; 
	struct FSlateColor DifficultyColour; 
	struct FSlateColor In Color and Opacity; 
	bool Active; 
	struct UProspectHistoryResult* ProspectEntry; 
	struct FProspectInfo ProspectInfo; 

	enum class ESlateVisibility Get_Inactive_Visibility_1(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetProspectDifficulty(enum class EMissionDifficulty Difficulty, struct FName& RowName); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateTooltip(struct FText ToolTipText); // (Public|BlueprintCallable|BlueprintEvent)
	void SetHasClaimedProspect(); // (Public|BlueprintCallable|BlueprintEvent)
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
	void ExecuteUbergraph_UMG_ProspectHistoryEntry(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

