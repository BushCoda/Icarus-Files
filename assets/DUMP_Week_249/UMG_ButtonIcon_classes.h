// WidgetBlueprintGeneratedClass UMG_ButtonIcon.UMG_ButtonIcon_C
struct UUMG_ButtonIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Icon; 
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
	struct UTexture2D* IconImage; 
	struct FText Tooltip Text Field; 
	struct FMulticastInlineDelegate Hover; 
	struct FMulticastInlineDelegate Unhovered; 

	void SetDisabled(bool Disabled); // (Public|BlueprintCallable|BlueprintEvent)
	struct FSlateColor Get_ButtonText_ColorAndOpacity_1(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetTextStyle(bool Bold, bool Italic); // (Public|BlueprintCallable|BlueprintEvent)
	void SetButtonImages(struct UMaterialInstance* Normal, struct UMaterialInstance* Hovered, struct UMaterialInstance* Pressed, struct UMaterialInstance* Disabled); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateTextColour(struct FLinearColor Colour); // (Private|BlueprintCallable|BlueprintEvent)
	void SetTextSize(int32_t TextSize); // (Public|BlueprintCallable|BlueprintEvent)
	void SetText(struct FText Text); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Reinitialise(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_ButtonIcon_ImageButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_ButtonIcon(int32_t EntryPoint); // (Final|UbergraphFunction)
	void Unhovered__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void Hover__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void Clicked__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

