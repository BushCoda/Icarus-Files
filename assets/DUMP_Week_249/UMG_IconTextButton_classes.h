// WidgetBlueprintGeneratedClass UMG_IconTextButton.UMG_IconTextButton_C
struct UUMG_IconTextButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* ButtonText; 
	struct UImage* Icon; 
	struct UButton* ImageButton; 
	struct USizeBox* SizeBox; 
	struct USpacer* Spacer_187; 
	struct FMulticastInlineDelegate Clicked; 
	struct UFont* TextFont; 
	int32_t Text_Size; 
	struct FText Text; 
	bool Bold; 
	bool Italic; 
	bool Uppercase; 
	struct FSlateColor Text_Normal; 
	struct FSlateColor Text_Hovered; 
	struct FSlateColor Text_Disabled; 
	struct FSlateColor Text_Pressed; 
	struct UMaterialInstance* Image_Normal; 
	struct UMaterialInstance* Image_Pressed; 
	struct UMaterialInstance* Image_Hovered; 
	struct UMaterialInstance* Image_Disabled; 
	bool Orange; 
	struct FSlateColor Text_Orange_Disabled; 
	struct FSlateColor Text_Orange_Pressed; 
	struct FSlateColor Text_Orange_Normal; 
	struct FSlateColor Text_Orange_Hovered; 
	struct UTexture2D* Button Icon; 
	struct UFMODEvent* Sound_OnClicked; 
	struct UFMODEvent* Sound_Hover; 
	struct FVector2D ButtonSize; 

	void SetDisabled(bool NewParam); // (Public|BlueprintCallable|BlueprintEvent)
	struct FSlateColor Get_ButtonText_ColorAndOpacity_1(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetTextStyle(bool Bold, bool Italic); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetButtonImages(struct UMaterialInstance* Normal, struct UMaterialInstance* Hovered, struct UMaterialInstance* Pressed, struct UMaterialInstance* Disabled); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateTextColour(struct FLinearColor Colour); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetTextSize(int32_t TextSize); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetText(struct FText Text); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateSpacer(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_IconTextButton(int32_t EntryPoint); // (Final|UbergraphFunction)
	void Clicked__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

