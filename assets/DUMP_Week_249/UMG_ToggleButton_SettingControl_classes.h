// WidgetBlueprintGeneratedClass UMG_ToggleButton_SettingControl.UMG_ToggleButton_SettingControl_C
struct UUMG_ToggleButton_SettingControl_C : UUMG_ToggleButtonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* ButtonText; 
	struct UButton* ImageButton; 
	struct USizeBox* SizeBox; 
	struct FButtonStyle NormalStyle; 

	void FocusUpdated(bool bNewFocus); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetFocusWidget(bool& bValid, struct UWidget*& Widget, bool& bThis); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetImageButton(struct UButton*& ImageButton); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetButtonText(struct UTextBlock*& ButtonText); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ToggleButton_SettingControl(int32_t EntryPoint); // (Final|UbergraphFunction)
};

