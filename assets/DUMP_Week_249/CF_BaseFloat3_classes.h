// WidgetBlueprintGeneratedClass CF_BaseFloat3.CF_BaseFloat3_C
struct UCF_BaseFloat3_C : UCF_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USpinBox* Integer; 
	struct USpinBox* Integer_2; 
	struct USpinBox* Integer_3; 
	struct UUMG_IconTextButton_C* UMG_IconTextButton_2; 
	struct FVector Vector; 

	void UpdatePreviewImpl(struct TArray<struct FString>& Array); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdatePreview(struct TArray<struct FString>& Args); // (Event|Public|HasOutParms|BlueprintEvent)
	void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__Integer_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // (BlueprintEvent)
	void BndEvt__Integer_1_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // (BlueprintEvent)
	void BndEvt__Integer_2_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // (BlueprintEvent)
	void ExecuteUbergraph_CF_BaseFloat3(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

