// WidgetBlueprintGeneratedClass UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C
struct UUMG_CharacterSetting_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TArray<struct FRowHandle> CustomisationOptions; 
	int32_t SelectedOptionIndex; 
	struct FMulticastInlineDelegate SelectionUpdated; 
	bool HasNoneOption; 
	struct FPreviewCameraSettingsEnum SettingFocus; 
	struct FText SettingName; 
	struct TArray<enum class ECharacterCustomisationContext> CustomisationContextWhitelist; 

	void VerifySettingsValid(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetSelectionDisplayName(struct FText& DisplayName); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetSelectedOption(struct FRowHandle& SelectedRow); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateVisuals(); // (Protected|BlueprintCallable|BlueprintEvent)
	void ChangeSelection(int32_t Index); // (Public|BlueprintCallable|BlueprintEvent)
	void ClearOptions(bool ClearIndex); // (Public|BlueprintCallable|BlueprintEvent)
	void AddOption(struct FRowHandle Option, int32_t& Index); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_CharacterSetting_Base(int32_t EntryPoint); // (Final|UbergraphFunction)
	void SelectionUpdated__DelegateSignature(int32_t Index, struct FPreviewCameraSettingsEnum NewFocus); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

