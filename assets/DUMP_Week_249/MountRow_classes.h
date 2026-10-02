// WidgetBlueprintGeneratedClass MountRow.MountRow_C
struct UMountRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* TextBlock_57; 
	struct FText SetupName; 
	struct FMountsRowHandle Mount; 

	void AddMount(struct FText RowName); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_MountRow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

