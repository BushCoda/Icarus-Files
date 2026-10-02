// WidgetBlueprintGeneratedClass CF_SpawnExoticAtCursor.CF_SpawnExoticAtCursor_C
struct UCF_SpawnExoticAtCursor_C : UCF_BaseCombo_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TArray<struct TSoftClassPtr<UObject>> ValidClassesToSpawn; 

	void OnLoaded_C932FF1E4346885E4EA308A8CE89DD58(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void HandleExecute(struct UUserWidget* Widget, int32_t Amount); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_CF_SpawnExoticAtCursor(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

