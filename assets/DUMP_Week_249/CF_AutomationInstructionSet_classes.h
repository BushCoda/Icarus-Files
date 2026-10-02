// WidgetBlueprintGeneratedClass CF_AutomationInstructionSet.CF_AutomationInstructionSet_C
struct UCF_AutomationInstructionSet_C : UCF_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* InstructionBox; 
	struct UUMG_IconTextButton_C* UMG_IconTextButton_2; 
	struct TArray<struct FString> Instructions; 
	struct UCheatOverlayBase* Overlay; 
	struct TSoftObjectPtr<UUMG_CheatFunctionBorder_C> ParentBorder_1; 
	struct FName ScriptName; 

	void Set Instructions(struct TArray<struct FString>& Instructions); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // (BlueprintEvent)
	void Execute(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_CF_AutomationInstructionSet(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

