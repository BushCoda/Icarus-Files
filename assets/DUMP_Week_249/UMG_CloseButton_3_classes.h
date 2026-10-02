// WidgetBlueprintGeneratedClass UMG_CloseButton_3.UMG_CloseButton_2_C
struct UUMG_CloseButton_2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* CloseIcon; 
	struct UButton* ImageButton; 
	struct USizeBox* SizeBox; 
	struct FMulticastInlineDelegate Clicked; 
	struct UFont* TextFont; 
	struct FSlateColor Colour_Normal; 
	struct FSlateColor Colour_Hovered; 
	struct FSlateColor Colour_Disabled; 
	struct FSlateColor Colour_Pressed; 
	struct UMaterialInstance* Image_Normal; 
	struct UMaterialInstance* Image_Pressed; 
	struct UMaterialInstance* Image_Hovered; 
	struct UMaterialInstance* Image_Disabled; 
	bool bShouldHidePanelDisplay; 
	bool TooltipEnabled; 

	void SetDisabled(bool NewParam); // (Public|BlueprintCallable|BlueprintEvent)
	struct FSlateColor Get_ButtonText_ColorAndOpacity_1(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetTextStyle(bool Bold, bool Italic); // (Public|BlueprintCallable|BlueprintEvent)
	void SetButtonImages(struct UMaterialInstance* Normal, struct UMaterialInstance* Hovered, struct UMaterialInstance* Pressed, struct UMaterialInstance* Disabled); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateTextColour(struct FLinearColor Colour); // (Private|BlueprintCallable|BlueprintEvent)
	void SetTextSize(int32_t TextSize); // (Public|BlueprintCallable|BlueprintEvent)
	void SetText(struct FText Text); // (Public|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void CallOnClicked(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_CloseButton_3(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void Clicked__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

