// WidgetBlueprintGeneratedClass UMG_WorkshopCostLarge.UMG_WorkshopCostLarge_C
struct UUMG_WorkshopCostLarge_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Icon; 
	struct UTextBlock* Number; 
	struct FMetaCurrencyRowHandle Currency; 
	int32_t Amount; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateValue(int32_t Amount); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_WorkshopCostLarge(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

