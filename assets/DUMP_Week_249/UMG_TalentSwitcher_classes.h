// WidgetBlueprintGeneratedClass UMG_TalentSwitcher.UMG_TalentSwitcher_C
struct UUMG_TalentSwitcher_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UHorizontalBox* ButtonsHBox; 
	struct UImage* divider; 
	struct UImage* divider_2; 
	struct UUMG_TalentSwitcher_Notifier_C* Solo_Notifier; 
	struct UUMG_ToggleButton_MenuHeader_C* SoloButton; 
	struct UUMG_TalentSwitcher_Notifier_C* Talent_Notifier; 
	struct UUMG_ToggleButton_MenuHeader_C* TalentsButton; 
	struct FMulticastInlineDelegate SwitchTalents; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_TalentSwitcher_PlayerTalents_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void BndEvt__UMG_TalentSwitcher_SoloTalents_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_TalentSwitcher(int32_t EntryPoint); // (Final|UbergraphFunction)
	void SwitchTalents__DelegateSignature(bool Solo); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

