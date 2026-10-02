// WidgetBlueprintGeneratedClass CF_GetAccountFlag.CF_GetAccountFlag_C
struct UCF_GetAccountFlag_C : UCF_BaseCombo_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void GetAccountFlags(struct TArray<struct FAccountFlagsRowHandle>& FlagRowHandles); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnConstruction(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Execute(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_CF_GetAccountFlag(int32_t EntryPoint); // (Final|UbergraphFunction)
};

