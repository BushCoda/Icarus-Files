// WidgetBlueprintGeneratedClass UMG_MetaInventory_ViewOnly.UMG_MetaInventory_ViewOnly_C
struct UUMG_MetaInventory_ViewOnly_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_Inventory_C* MainInventory; 
	bool Initialised; 

	void Initialise(struct UInventory* Main); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_MetaInventory_ViewOnly(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

