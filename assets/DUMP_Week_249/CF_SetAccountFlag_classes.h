// WidgetBlueprintGeneratedClass CF_SetAccountFlag.CF_SetAccountFlag_C
struct UCF_SetAccountFlag_C : UCF_BaseComboBoolExec_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void GetAllAccountFlagRowHandles(struct TArray<struct FAccountFlagsRowHandle>& Rows); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void HandleOnItemSet(struct UUserWidget* Widget); // (BlueprintCallable|BlueprintEvent)
	void Execute(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_CF_SetAccountFlag(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

