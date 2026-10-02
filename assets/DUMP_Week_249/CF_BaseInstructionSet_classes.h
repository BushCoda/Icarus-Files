// WidgetBlueprintGeneratedClass CF_BaseInstructionSet.CF_BaseInstructionSet_C
struct UCF_BaseInstructionSet_C : UCF_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* InstructionBox; 
	struct UUMG_IconTextButton_C* UMG_IconTextButton_2; 
	struct TArray<struct FString> Instructions; 
	struct UCheatOverlayBase* Overlay; 
	struct TArray<struct FString> RawInstructions; 

	void UpdateArgs(struct TArray<struct FString>& InArguments); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Set Instructions(struct TArray<struct FString>& Instructions); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void Execute(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // (BlueprintEvent)
	void UpdatePreview(struct TArray<struct FString>& Args); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_CF_BaseInstructionSet(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

