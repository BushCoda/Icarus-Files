// WidgetBlueprintGeneratedClass CF_BaseCombo.CF_BaseCombo_C
struct UCF_BaseCombo_C : UCF_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCustomComboBox* ComboBox; 
	struct UUMG_IconTextButton_C* UMG_IconTextButton_2; 

	void HandleArg(int32_t Index, struct FString Arg); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdatePreview(struct TArray<struct FString>& Args); // (Event|Public|HasOutParms|BlueprintEvent)
	void Execute(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void HandleExecute(struct UUserWidget* Widget, int32_t Amount); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature(struct FString NameString, struct UUserWidget* Widget); // (BlueprintEvent)
	void Handle On Item Set(struct UUserWidget* Widget); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_CF_BaseCombo(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

