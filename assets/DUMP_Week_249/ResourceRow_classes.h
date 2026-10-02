// WidgetBlueprintGeneratedClass ResourceRow.ResourceRow_C
struct UResourceRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* TextBlock_57; 
	struct FText ResourceName; 
	struct FIcarusResourcesEnum ResourceType; 

	void SetResource(struct FIcarusResourcesEnum ResourceType); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_ResourceRow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

