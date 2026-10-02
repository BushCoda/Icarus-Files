// WidgetBlueprintGeneratedClass CF_BaseString2.CF_BaseString2_C
struct UCF_BaseString2_C : UCF_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UEditableText* Key; 
	struct UUMG_IconTextButton_C* UMG_IconTextButton_2; 
	struct UEditableText* Value; 

	float GetFloatValue(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdatePreview(struct TArray<struct FString>& Args); // (Event|Public|HasOutParms|BlueprintEvent)
	void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_CF_BaseString2(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

