// WidgetBlueprintGeneratedClass CF_BaseInteger.CF_BaseInteger_C
struct UCF_BaseInteger_C : UCF_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USpinBox* Integer; 
	struct UUMG_IconTextButton_C* UMG_IconTextButton_2; 
	int32_t Number; 
	bool Percentage; 

	float GetIntegerValue(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void BndEvt__Integer_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // (BlueprintEvent)
	void UpdatePreview(struct TArray<struct FString>& Args); // (Event|Public|HasOutParms|BlueprintEvent)
	void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_CF_BaseInteger(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

