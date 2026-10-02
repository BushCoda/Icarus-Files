// WidgetBlueprintGeneratedClass UMG_ToggleButton_IconSwap.UMG_ToggleButton_IconSwap_C
struct UUMG_ToggleButton_IconSwap_C : UUMG_ToggleButtonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* ToggleAnimation; 
	struct UImage* Icon; 
	struct UImage* Image_ToggleConfirm; 
	struct UButton* ImageButton; 
	struct USizeBox* SizeBox; 
	struct USizeBox* SizeBox_ButtonText; 
	struct UTextBlock* TextBlock_ButtonText; 
	struct FButtonStyle NormalStyle; 
	struct UTexture2D* ButtonIcon; 
	struct UTexture2D* ToggledButtonIcon; 
	bool ShowText; 
	struct FText ToggleText; 
	struct FText NonToggleText; 

	void FocusUpdated(bool bNewFocus); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetFocusWidget(bool& bValid, struct UWidget*& Widget, bool& bThis); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetImageButton(struct UButton*& ImageButton); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void VisuallyToggleButton(bool VisualToggledState); // (Public|BlueprintCallable|BlueprintEvent)
	void OnClickEvent(struct UUMG_ButtonBase_C* Button); // (BlueprintCallable|BlueprintEvent)
	void UpdateToggleText(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ToggleButton_IconSwap(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

