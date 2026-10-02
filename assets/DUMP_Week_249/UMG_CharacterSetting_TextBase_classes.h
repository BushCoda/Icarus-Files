// WidgetBlueprintGeneratedClass UMG_CharacterSetting_TextBase.UMG_CharacterSetting_TextBase_C
struct UUMG_CharacterSetting_TextBase_C : UUMG_CharacterSetting_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* divider_4; 
	struct UUMG_BasicButton_2_C* LeftButton; 
	struct UUMG_BasicButton_2_C* RightButton; 
	struct UTextBlock* Text; 
	struct UTextBlock* Text_SettingName; 
	struct FMulticastInlineDelegate SelectionUpdated_1; 

	void UpdateVisuals(); // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__RightButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_CharacterSetting_TextBase(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void SelectionUpdated_0__DelegateSignature(int32_t Index, struct FPreviewCameraSettingsEnum NewFocus); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

