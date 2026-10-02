// WidgetBlueprintGeneratedClass UMG_ArrowSelectionWidget_Text.UMG_ArrowSelectionWidget_Text_C
struct UUMG_ArrowSelectionWidget_Text_C : UUMG_ArrowSelectionWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* divider_4; 
	struct UUMG_BasicButton_2_C* LeftButton; 
	struct UUMG_BasicButton_2_C* RightButton; 
	struct UTextBlock* Text; 
	struct UTextBlock* Text_SettingName; 

	void UpdateVisuals(); // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__RightButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ArrowSelectionWidget_Text(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

