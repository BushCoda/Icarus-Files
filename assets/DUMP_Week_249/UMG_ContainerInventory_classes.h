// WidgetBlueprintGeneratedClass UMG_ContainerInventory.UMG_ContainerInventory_C
struct UUMG_ContainerInventory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_Inventory_C* Inventory; 
	struct UOverlay* InventoryOverlay; 
	struct UOverlay* Overlay_Sort; 
	struct UUMG_IconTextButton_C* TakeAllButtonInput; 
	struct UUMG_DarkTitlebar_C* UMG_DarkTitlebar; 
	struct UUMG_Sort_C* UMG_Sort; 
	struct AActor* LinkedActor; 
	struct FInventoryIDEnum Inventory ID; 
	bool ShowTakeAll; 
	struct FMulticastInlineDelegate LootAll; 
	struct UInventory* ContainerInventory; 
	bool TakeAllShouldSkipBags; 
	bool ShowSort; 

	void Initialise(struct FItemData ItemData); // (BlueprintCallable|BlueprintEvent)
	void LootAllKeyPress(); // (BlueprintCallable|BlueprintEvent)
	void Destruct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_ContainerInventory_TakeAllButtonInput_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ContainerInventory(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void LootAll__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

