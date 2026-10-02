// WidgetBlueprintGeneratedClass UMG_ToggleButton_Image.UMG_ToggleButton_Image_C
struct UUMG_ToggleButton_Image_C : UUMG_ToggleButtonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UButton* ImageButton; 
	struct UImage* ImageIcon; 
	struct USizeBox* SizeBox; 
	struct FButtonStyle NormalStyle; 
	struct UTexture2D* ButtonIcon; 

	void FocusUpdated(bool bNewFocus); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetFocusWidget(bool& bValid, struct UWidget*& Widget, bool& bThis); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetImageButton(struct UButton*& ImageButton); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ToggleButton_Image(int32_t EntryPoint); // (Final|UbergraphFunction)
};

