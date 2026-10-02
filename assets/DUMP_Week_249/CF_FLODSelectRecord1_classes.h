// WidgetBlueprintGeneratedClass CF_FLODSelectRecord1.CF_FLODSelectRecord1_C
struct UCF_FLODSelectRecord1_C : UCF_BaseCombo_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void HandleArg(int32_t Index, struct FString Arg); // (Public|BlueprintCallable|BlueprintEvent)
	void OnHandleExecute(struct UFLODRecordRow_C* Row); // (Public|BlueprintCallable|BlueprintEvent)
	void GetSelectedRecord(struct UFLODRecord*& SelectedRecord); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void HandleExecute(struct UUserWidget* Widget, int32_t Amount); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void HandleArgsConstructLol(); // (BlueprintCallable|BlueprintEvent)
	void SelectedFLODTileChanged(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_CF_FLODSelectRecord1(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

