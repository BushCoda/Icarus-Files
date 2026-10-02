// WidgetBlueprintGeneratedClass UMG_ToggleButtonBase.UMG_ToggleButtonBase_C
struct UUMG_ToggleButtonBase_C : UUMG_ButtonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool IsToggled; 
	struct FMulticastInlineDelegate Toggled; 
	bool IsRadioToggle; 
	bool CanUntoggleSelf; 
	struct FMulticastInlineDelegate Untoggled; 
	struct FSlateColor Toggled_Text_Normal; 
	struct FSlateColor Toggled_Text_Hovered; 
	struct FSlateColor Toggled_Text_Pressed; 
	struct FSlateColor Toggled_Text_Disabled; 
	struct UMaterialInstance* Toggled_Image_Normal; 
	struct UMaterialInstance* Toggled_Image_Hovered; 
	struct UMaterialInstance* Toggled_Image_Pressed; 
	struct UMaterialInstance* Toggled_Image_Disabled; 
	struct FButtonStyle CachedImageButtonStyle; 
	struct UPanelWidget* RadioParent; 
	float WidthOverride; 

	void VisuallyToggleButton(bool VisualToggledState); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetDisabledTextColour(struct FSlateColor& Colour); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetPressedTextColour(struct FSlateColor& Colour); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetHoveredTextColour(struct FSlateColor& Colour); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetNormalTextColour(struct FSlateColor& Colour); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UntoggleOthers(struct UPanelWidget* InRadioParent); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetToggled(bool Toggled); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnClickEvent(struct UUMG_ButtonBase_C* Button); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ToggleButtonBase(int32_t EntryPoint); // (Final|UbergraphFunction)
	void Untoggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

