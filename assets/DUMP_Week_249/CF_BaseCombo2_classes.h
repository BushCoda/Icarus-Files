// WidgetBlueprintGeneratedClass CF_BaseCombo2.CF_BaseCombo2_C
struct UCF_BaseCombo2_C : UCF_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCustomComboBox* ComboBox1; 
	struct UCustomComboBox* ComboBox2; 
	struct UUMG_IconTextButton_C* UMG_IconTextButton; 

	void HandleArg(int32_t Index, struct FString Arg); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdatePreview(struct TArray<struct FString>& Args); // (Event|Public|HasOutParms|BlueprintEvent)
	void Execute(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void HandleExecute(struct UUserWidget* Widget1, struct UUserWidget* Widget2); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature(struct FString NameString, struct UUserWidget* Widget); // (BlueprintEvent)
	void Handle On Item Set(struct UUserWidget* Widget, bool Combo2); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__ComboBox2_K2Node_ComponentBoundEvent_2_OnItemSet__DelegateSignature(struct FString NameString, struct UUserWidget* Widget); // (BlueprintEvent)
	void BndEvt__UMG_IconTextButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_CF_BaseCombo2(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

