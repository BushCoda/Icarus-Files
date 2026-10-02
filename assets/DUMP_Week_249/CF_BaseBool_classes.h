// WidgetBlueprintGeneratedClass CF_BaseBool.CF_BaseBool_C
struct UCF_BaseBool_C : UCF_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* TextBlock_108; 
	struct UUMG_IconTextButton_C* UMG_IconTextButton_3; 
	bool Checked; 

	bool GetCheckboxState(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetTitleText(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetCheckboxText(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Execute(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnCheckboxStateChanged(bool NewState); // (BlueprintCallable|BlueprintEvent)
	void Toggle(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Trigger CheckBoxStateChanged(bool NewState); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_IconTextButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_CF_BaseBool(int32_t EntryPoint); // (Final|UbergraphFunction)
};

