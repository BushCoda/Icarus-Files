// WidgetBlueprintGeneratedClass UMG_MetaInventory.UMG_MetaInventory_C
struct UUMG_MetaInventory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_Inventory_C* MainInventory; 
	bool Initialised; 

	void Initialise(struct UInventory* Main); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_MetaInventory(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

