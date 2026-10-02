// WidgetBlueprintGeneratedClass CF_SetCharacterFlag.CF_SetCharacterFlag_C
struct UCF_SetCharacterFlag_C : UCF_BaseComboBoolExec_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void GetAllCharacterFlagRowHandles(struct TArray<struct FCharacterFlagsRowHandle>& Rows); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void HandleOnItemSet(struct UUserWidget* Widget); // (BlueprintCallable|BlueprintEvent)
	void Execute(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_CF_SetCharacterFlag(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

