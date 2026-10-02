// WidgetBlueprintGeneratedClass UMG_ArrowSelectionWidget_Base.UMG_ArrowSelectionWidget_Base_C
struct UUMG_ArrowSelectionWidget_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TArray<struct FText> Options; 
	int32_t SelectedOptionIndex; 
	struct FMulticastInlineDelegate SelectionUpdated; 
	bool HasNoneOption; 
	struct FText SettingName; 
	struct TArray<enum class ECharacterCustomisationContext> CustomisationContextWhitelist; 

	void GetSelectedOption(struct FText& SelectedRow); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateVisuals(); // (Protected|BlueprintCallable|BlueprintEvent)
	void ChangeSelection(int32_t Index); // (Public|BlueprintCallable|BlueprintEvent)
	void ClearOptions(bool ClearIndex); // (Public|BlueprintCallable|BlueprintEvent)
	void AddOption(struct FText Option, int32_t& Index); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ArrowSelectionWidget_Base(int32_t EntryPoint); // (Final|UbergraphFunction)
	void SelectionUpdated__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

