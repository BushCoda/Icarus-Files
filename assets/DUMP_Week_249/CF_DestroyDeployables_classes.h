// WidgetBlueprintGeneratedClass CF_DestroyDeployables.CF_DestroyDeployables_C
struct UCF_DestroyDeployables_C : UCF_BaseCombo_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	int32_t ActorCount; 

	void OnConstruction(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void HandleExecute(struct UUserWidget* Widget, int32_t Amount); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_CF_DestroyDeployables(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

