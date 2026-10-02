// WidgetBlueprintGeneratedClass UMG_SettingsSection.UMG_SettingsSection_C
struct UUMG_SettingsSection_C : USettingsSection {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UHorizontalBox* ApplyBox; 
	struct UUMG_BasicButton_2_C* ApplyButton; 
	struct UUMG_SettingTooltipHover_C* Help; 
	struct UUMG_BasicButton_2_C* ResetButton; 
	struct UVerticalBox* SettingArea; 
	struct UVerticalBox* SettingBox; 
	struct UTextBlock* Title; 
	struct FMulticastInlineDelegate SettingOptionHovered; 
	struct FMulticastInlineDelegate SettingOptionUnhovered; 
	bool Odd; 
	struct UNamedSlot* ConfirmationSlot; 

	void Set Requirements(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct UUMG_SettingRowBorder_C* CreateOptionBorder(struct APlayerController* OwningPlayer); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void AddNewWidget(struct USettingWidget* SettingWidget); // (Public|BlueprintCallable|BlueprintEvent)
	void SetDisplayName(struct FText& DisplayName); // (Event|Public|HasOutParms|BlueprintEvent)
	void PostSetup(); // (Event|Public|BlueprintEvent)
	void Setting Option Hovered(struct UUMG_SettingRowBorder_C* Setting Option); // (BlueprintCallable|BlueprintEvent)
	void Setting Option Unhovered(struct UUMG_SettingRowBorder_C* Setting Option); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void DirtySection(); // (Event|Public|BlueprintEvent)
	void OnRefresh(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void On Settings Updated(); // (BlueprintCallable|BlueprintEvent)
	void ApplySettings(); // (Event|Public|BlueprintEvent)
	void On Confirmation Result(bool Result); // (BlueprintCallable|BlueprintEvent)
	void RevertSettings(); // (Event|Public|BlueprintEvent)
	void AddWidgetToSection(struct USettingWidget* Widget); // (Event|Protected|BlueprintEvent)
	void ConfirmSettings(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_SettingsSection(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void SettingOptionUnhovered__DelegateSignature(struct UUMG_SettingRowBorder_C* Setting Option); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void SettingOptionHovered__DelegateSignature(struct UUMG_SettingRowBorder_C* Setting Option); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

