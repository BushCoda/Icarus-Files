// WidgetBlueprintGeneratedClass CF_BaseFloat.CF_BaseFloat_C
struct UCF_BaseFloat_C : UCF_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USpinBox* Integer; 
	struct UUMG_IconTextButton_C* UMG_IconTextButton_2; 
	float Number; 
	bool Percentage; 

	float GetFloatValue(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void BndEvt__Integer_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // (BlueprintEvent)
	void UpdatePreview(struct TArray<struct FString>& Args); // (Event|Public|HasOutParms|BlueprintEvent)
	void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_CF_BaseFloat(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

