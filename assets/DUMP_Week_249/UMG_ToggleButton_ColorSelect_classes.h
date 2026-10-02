// WidgetBlueprintGeneratedClass UMG_ToggleButton_ColorSelect.UMG_ToggleButton_ColorSelect_C
struct UUMG_ToggleButton_ColorSelect_C : UUMG_ToggleButtonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UHorizontalBox* HorizontalBox_ColourContainer; 
	struct UButton* ImageButton; 
	struct USizeBox* SizeBox; 
	struct FButtonStyle NormalStyle; 
	struct FCharacterCreationDataRowHandle CharacterCustomisationRow; 
	struct FPreviewCameraSettingsEnum CameraFocus; 
	bool RotateColourDisplay; 
	struct FLinearColor OverrideColor; 

	void FocusUpdated(bool bNewFocus); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetFocusWidget(bool& bValid, struct UWidget*& Widget, bool& bThis); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetImageButton(struct UButton*& ImageButton); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void AddColorSegment(struct FLinearColor Colour); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ToggleButton_ColorSelect(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

