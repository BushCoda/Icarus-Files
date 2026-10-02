// WidgetBlueprintGeneratedClass UMG_ToggleButton_MenuHeader.UMG_ToggleButton_MenuHeader_C
struct UUMG_ToggleButton_MenuHeader_C : UUMG_ToggleButtonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* ButtonText; 
	struct UButton* ImageButton; 
	struct UOverlay* Overlay_1; 
	struct USizeBox* SizeBox; 
	struct FButtonStyle NormalStyle; 
	struct FSessionFlagsRowHandle HighlightFlag; 
	struct UUMG_QuestHelper_C* QuestHelper; 

	void FocusUpdated(bool bNewFocus); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetFocusWidget(bool& bValid, struct UWidget*& Widget, bool& bThis); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetImageButton(struct UButton*& ImageButton); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetButtonText(struct UTextBlock*& ButtonText); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ToggleButton_MenuHeader(int32_t EntryPoint); // (Final|UbergraphFunction)
};

