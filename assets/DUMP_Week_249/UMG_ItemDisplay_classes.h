// WidgetBlueprintGeneratedClass UMG_ItemDisplay.UMG_ItemDisplay_C
struct UUMG_ItemDisplay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Icon; 
	struct FItemsStaticRowHandle Item; 

	void Setup(struct FItemsStaticRowHandle Item, struct FItemableRowHandle Itemable); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ItemDisplay(int32_t EntryPoint); // (Final|UbergraphFunction)
};

