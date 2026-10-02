// WidgetBlueprintGeneratedClass UMG_ButtonBase.UMG_ButtonBase_C
struct UUMG_ButtonBase_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FMulticastInlineDelegate Clicked; 
	struct UFont* TextFont; 
	int32_t Text_Size; 
	struct FText Text; 
	bool Bold; 
	bool Italic; 
	bool Uppercase; 
	struct FSlateColor Text_Normal; 
	struct FSlateColor Text_Hovered; 
	struct FSlateColor Text_Pressed; 
	struct FSlateColor Text_Disabled; 
	struct UMaterialInstance* Image_Normal; 
	struct UMaterialInstance* Image_Hovered; 
	struct UMaterialInstance* Image_Pressed; 
	struct UMaterialInstance* Image_Disabled; 
	bool Orange; 
	struct FSlateColor Text_Orange_Normal; 
	struct FSlateColor Text_Orange_Hovered; 
	struct FSlateColor Text_Orange_Pressed; 
	struct FSlateColor Text_Orange_Disabled; 
	struct UTextBlock* ButtonTextRef; 
	struct UButton* ImageButtonRef; 
	struct UFMODEvent* Sound_OnClick; 
	struct FLinearColor CachedTextColor; 

	void Update Visuals(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetImageButton(struct UButton*& ImageButton); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetButtonText(struct UTextBlock*& ButtonText); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnClicked(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnReleased(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetDisabledTextColour(struct FSlateColor& Colour); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetPressedTextColour(struct FSlateColor& Colour); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetHoveredTextColour(struct FSlateColor& Colour); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetNormalTextColour(struct FSlateColor& Colour); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnPressed(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnUnhover(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnHover(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateTextColour(); // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetTextColours(struct FSlateColor Normal, struct FSlateColor Hover, struct FSlateColor Pressed, struct FSlateColor Disabled); // (Public|BlueprintCallable|BlueprintEvent)
	void IsDisabled(bool& Disabled); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetDisabled(bool Disabled); // (Public|BlueprintCallable|BlueprintEvent)
	void SetTextStyle(bool Bold, bool Italic); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetButtonImages(struct UMaterialInstance* Normal, struct UMaterialInstance* Hovered, struct UMaterialInstance* Pressed, struct UMaterialInstance* Disabled); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetTextSize(int32_t TextSize); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetText(struct FText Text); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ButtonBase(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

