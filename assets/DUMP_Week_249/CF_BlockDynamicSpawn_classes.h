// WidgetBlueprintGeneratedClass CF_BlockDynamicSpawn.CF_BlockDynamicSpawn_C
struct UCF_BlockDynamicSpawn_C : UCF_BaseComboBool_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void HandleOnCheckboxStateChanged(struct UUserWidget* SelectedWidget, bool IsChecked); // (BlueprintCallable|BlueprintEvent)
	void HandleOnItemSet(struct UUserWidget* Widget); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_CF_BlockDynamicSpawn(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

