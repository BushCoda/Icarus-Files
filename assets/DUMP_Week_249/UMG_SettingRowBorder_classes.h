// WidgetBlueprintGeneratedClass UMG_SettingRowBorder.UMG_SettingRowBorder_C
struct UUMG_SettingRowBorder_C : USettingRowBorder {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* Border_84; 
	struct UImage* DarkTint; 
	struct UUMG_SettingTooltipHover_C* Help; 
	struct UButton* HoverButton; 
	struct UBorder* NameBorder; 
	struct USizeBox* OuterSizeBox; 
	struct UUMG_SettingTooltipRestart_C* Restart; 
	struct UNamedSlot* SettingsControlSlot; 
	struct UTextBlock* SettingText; 
	struct FText SettingOptionText; 
	struct FText SettingOptionDescription; 
	float SettingControlFill; 
	struct FMulticastInlineDelegate SettingOptionHovered; 
	struct FMulticastInlineDelegate SettingOptionUnhovered; 
	bool ManualMode; 

	void Set Requirements(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetFocusWidget(bool& bValid, struct UWidget*& Widget, bool& bThis); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Post Setup(); // (BlueprintCallable|BlueprintEvent)
	void Update Enabled State(); // (BlueprintCallable|BlueprintEvent)
	void HideName(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void Setup Restart Widget(); // (BlueprintCallable|BlueprintEvent)
	void On Restart Requested(struct FName SettingName); // (BlueprintCallable|BlueprintEvent)
	void Connect To Restart Events(); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_SettingRowBorder(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void SettingOptionUnhovered__DelegateSignature(struct UUMG_SettingRowBorder_C* SettingOption); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void SettingOptionHovered__DelegateSignature(struct UUMG_SettingRowBorder_C* SettingOption); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

