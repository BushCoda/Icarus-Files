// WidgetBlueprintGeneratedClass CF_DebugFlammable.CF_DebugFlammable_C
struct UCF_DebugFlammable_C : UCF_BaseComboBool_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void HandleOnCheckboxStateChanged(struct UUserWidget* SelectedWidget, bool IsChecked); // (BlueprintCallable|BlueprintEvent)
	void HandleOnItemSet(struct UUserWidget* Widget); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_CF_DebugFlammable(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

