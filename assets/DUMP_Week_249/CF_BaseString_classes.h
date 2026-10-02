// WidgetBlueprintGeneratedClass CF_BaseString.CF_BaseString_C
struct UCF_BaseString_C : UCF_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UEditableText* Text; 
	struct UUMG_IconTextButton_C* UMG_IconTextButton_2; 

	float GetFloatValue(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdatePreview(struct TArray<struct FString>& Args); // (Event|Public|HasOutParms|BlueprintEvent)
	void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_CF_BaseString(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

