// WidgetBlueprintGeneratedClass UMG_CustomGameSettings.UMG_CustomGameSettings_C
struct UUMG_CustomGameSettings_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_BasicButton_2_C* ApplyButton; 
	struct UUMG_BasicButton_2_C* BackButton; 
	struct UButton* Button_MouseCapture; 
	struct UHorizontalBox* CategoryBox; 
	struct UVerticalBox* ContentVBox; 
	struct UImage* Gradient; 
	struct UUMG_BasicButton_2_C* ResetToDefaultsButton; 
	struct UTextBlock* SettingOptionDescription; 
	struct FMulticastInlineDelegate OnSettingsChanged; 
	struct TMap<struct FName, int32_t> CurrentSettings; 
	struct TMap<struct FName, int32_t> InitialSettings; 
	enum class ECustomGameStatChangeability Context; 
	struct TMap<enum class ECustomGameStatCategory, struct UUMG_CustomGameSettingsSection_C*> SectionLookup; 

	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void MakeCustomGameSettings(struct TArray<struct FCustomGameSetting>& CustomGameSettings); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetInitialValueOrDefault(struct FName RowName, int32_t& Default, int32_t& Value); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ResetValuesToDefault(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void HasUnsavedChanges(bool& HasUnsavedChanges); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	void DisplaySettings(enum class ECustomGameStatChangeability Context, struct TArray<struct FCustomGameSetting>& InitialSettings); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnSectionSettingChanged(struct FName SettingRowName, int32_t NewValue); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_CustomGameSettings_BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_CustomGameSettings_ResetToDefaultsButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_CustomGameSettings_ApplyButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnConfirmResetToDefaults(); // (BlueprintCallable|BlueprintEvent)
	void Nothing(); // (BlueprintCallable|BlueprintEvent)
	void ApplyCurrentSettings(); // (BlueprintCallable|BlueprintEvent)
	void OnConfirmGoBack(); // (BlueprintCallable|BlueprintEvent)
	void GoBack(); // (BlueprintCallable|BlueprintEvent)
	void OnSettingHovered(struct FText Text); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_CustomGameSettings(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnSettingsChanged__DelegateSignature(struct TArray<struct FCustomGameSetting>& NewSettingValues); // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent)
};

