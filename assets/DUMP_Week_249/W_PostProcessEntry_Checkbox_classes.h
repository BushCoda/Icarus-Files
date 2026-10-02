// WidgetBlueprintGeneratedClass W_PostProcessEntry_Checkbox.W_PostProcessEntry_Checkbox_C
struct UW_PostProcessEntry_Checkbox_C : UW_PostProcessEntry_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCheckBox* CheckBox_201; 
	struct UTextBlock* TextBlock_3; 
	struct FText Name; 
	int32_t FontSize; 
	float TextFill; 
	bool DefaultState; 

	void GetSaveGameValue(struct FFPostProcessSaveData& Value); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void InitFromSaveGameValue(struct FFPostProcessSaveData Value); // (Public|BlueprintCallable|BlueprintEvent)
	void InitFromDefaultValue(); // (Public|BlueprintCallable|BlueprintEvent)
	bool GetCheckboxState(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__CheckBox_200_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // (BlueprintEvent)
	void OnCheckedStatedUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_W_PostProcessEntry_Checkbox(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

