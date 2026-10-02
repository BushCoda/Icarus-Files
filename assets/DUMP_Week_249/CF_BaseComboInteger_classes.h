// WidgetBlueprintGeneratedClass CF_BaseComboInteger.CF_BaseComboInteger_C
struct UCF_BaseComboInteger_C : UCF_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCustomComboBox* ComboBox; 
	struct USpinBox* Count; 
	struct UUMG_IconTextButton_C* UMG_IconTextButton; 
	int32_t Number; 
	int32_t MinCountValue; 
	int32_t MaxCountValue; 

	bool CanModifyNumber(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void HandleArg(int32_t Index, struct FString Arg); // (Public|BlueprintCallable|BlueprintEvent)
	float GetNumber(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdatePreview(struct TArray<struct FString>& Args); // (Event|Public|HasOutParms|BlueprintEvent)
	void BndEvt__Count_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // (BlueprintEvent)
	void Execute(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void Handle Execute(struct UUserWidget* Widget, int32_t Amount); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature(struct FString NameString, struct UUserWidget* Widget); // (BlueprintEvent)
	void Handle On Item Set(struct UUserWidget* Widget); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_IconTextButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_CF_BaseComboInteger(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

