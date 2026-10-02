// WidgetBlueprintGeneratedClass CF_SpawnAISpawner.CF_SpawnAISpawner_C
struct UCF_SpawnAISpawner_C : UCF_BaseCombo_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TArray<struct TSoftClassPtr<UObject>> ValidClassesToSpawn; 

	void OnLoaded_D056738D40FAA1661B99B2AC219087E4(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void HandleExecute(struct UUserWidget* Widget, int32_t Amount); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_CF_SpawnAISpawner(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

