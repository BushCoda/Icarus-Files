// WidgetBlueprintGeneratedClass UMG_MultiToggle.UMG_MultiToggle_C
struct UUMG_MultiToggle_C : UUMG_SettingControlBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UHorizontalBox* ToggleContainer; 
	struct TArray<struct FText> ToggleOptions; 
	struct TArray<struct FText> OptionToolTips; 
	int32_t DefaultToggleIndex; 
	struct UUMG_ToggleButtonBase_C* ToggleWidgetClass; 
	int32_t ActiveToggleIndex; 
	struct FMulticastInlineDelegate MultiToggleStateChanged; 
	struct FMulticastInlineDelegate ToggleClicked; 
	float WidthOverride; 

	void ChangeToggleName(struct FText Name, int32_t Index); // (Public|BlueprintCallable|BlueprintEvent)
	void GetFocusWidget(bool& bValid, struct UWidget*& Widget, bool& bThis); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetToggleOption(int32_t ToggleIndex); // (Public|BlueprintCallable|BlueprintEvent)
	void ConstructToggles(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ToggleButtonToggled(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintCallable|BlueprintEvent)
	void ToggleButtonClicked(struct UUMG_ButtonBase_C* Button); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_MultiToggle(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ToggleClicked__DelegateSignature(int32_t ToggleIndex, bool IsActive); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void MultiToggleStateChanged__DelegateSignature(int32_t PreviousToggleIndex, int32_t CurrentToggleIndex); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

