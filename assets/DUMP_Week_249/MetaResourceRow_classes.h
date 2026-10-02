// WidgetBlueprintGeneratedClass MetaResourceRow.MetaResourceRow_C
struct UMetaResourceRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Icon; 
	struct UTextBlock* TextBlock_57; 
	struct FText ResourceName; 
	enum class EIcarusResourceType ResourceType; 
	struct FMetaCurrencyRowHandle Currency Row; 

	void SetMetaResource(struct FMetaCurrencyRowHandle CurrencyRow); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_MetaResourceRow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

