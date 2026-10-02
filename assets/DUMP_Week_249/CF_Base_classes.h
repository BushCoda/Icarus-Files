// WidgetBlueprintGeneratedClass CF_Base.CF_Base_C
struct UCF_Base_C : UCheatFunctionBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TSoftObjectPtr<UUMG_CheatFunctionBorder_C> ParentBorder; 
	bool IsTopFunction; 

	void GetIcarusPlayerController(struct AIcarusPlayerController*& Controller); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FString GetName(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	void Set Top Function(bool IsTop); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_CF_Base(int32_t EntryPoint); // (Final|UbergraphFunction)
};

