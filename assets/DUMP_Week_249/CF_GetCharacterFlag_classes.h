// WidgetBlueprintGeneratedClass CF_GetCharacterFlag.CF_GetCharacterFlag_C
struct UCF_GetCharacterFlag_C : UCF_BaseCombo_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void GetCharacterFlags(struct TArray<struct FCharacterFlagsRowHandle>& FlagRowHandles); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnConstruction(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Execute(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_CF_GetCharacterFlag(int32_t EntryPoint); // (Final|UbergraphFunction)
};

