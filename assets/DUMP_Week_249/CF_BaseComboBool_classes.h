// WidgetBlueprintGeneratedClass CF_BaseComboBool.CF_BaseComboBool_C
struct UCF_BaseComboBool_C : UCF_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCheckBox* CheckBox; 
	struct UCustomComboBox* ComboBox; 
	struct UTextBlock* TextBlock_95; 
	struct UCheckBox* NewVar_1; 

	struct FText GetCheckboxText(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void HandleArg(int32_t Index, struct FString Arg); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdatePreview(struct TArray<struct FString>& Args); // (Event|Public|HasOutParms|BlueprintEvent)
	void BndEvt__CheckBox_218_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // (BlueprintEvent)
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature(struct FString NameString, struct UUserWidget* Widget); // (BlueprintEvent)
	void HandleOnItemSet(struct UUserWidget* Widget); // (BlueprintCallable|BlueprintEvent)
	void HandleOnCheckboxStateChanged(struct UUserWidget* SelectedWidget, bool IsChecked); // (BlueprintCallable|BlueprintEvent)
	void Execute(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_CF_BaseComboBool(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

