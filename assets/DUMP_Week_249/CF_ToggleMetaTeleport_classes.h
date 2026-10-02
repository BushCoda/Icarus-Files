// WidgetBlueprintGeneratedClass CF_ToggleMetaTeleport.CF_ToggleMetaTeleport_C
struct UCF_ToggleMetaTeleport_C : UCF_BaseButton_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool Spawn; 
	struct TSoftClassPtr<UObject> MetaDepositSoftClass; 

	void OnLoaded_5DC9A3934F59D45C92931986C319EDAB(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void Execute(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_CF_ToggleMetaTeleport(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

