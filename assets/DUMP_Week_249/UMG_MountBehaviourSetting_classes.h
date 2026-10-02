// WidgetBlueprintGeneratedClass UMG_MountBehaviourSetting.UMG_MountBehaviourSetting_C
struct UUMG_MountBehaviourSetting_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Image_CurrentBehaviour; 
	struct UTextBlock* TitleText; 
	struct UVerticalBox* VerticalBox_ButtonList; 
	struct FText SettingName; 
	struct FMulticastInlineDelegate OnOptionSelected; 
	struct TArray<struct FSwapButtonOption> Options; 

	void SetSelectedOption(int32_t OptionIndex); // (Public|BlueprintCallable|BlueprintEvent)
	void OnButtonToggled(struct UUMG_ToggleButtonBase_C* ToggleButton); // (Public|BlueprintCallable|BlueprintEvent)
	void SetOptions(struct TArray<struct FSwapButtonOption>& Options); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_MountBehaviourSetting(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnOptionSelected__DelegateSignature(int32_t OptionIndex, struct FSwapButtonOption OptionData); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

