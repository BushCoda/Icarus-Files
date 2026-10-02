// WidgetBlueprintGeneratedClass UMG_EquipmentSlots.UMG_EquipmentSlots_C
struct UUMG_EquipmentSlots_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_InventoryItemSlow_C* Equipment; 
	struct UTextBlock* EquipmentSlot; 
	struct FText SlotText; 

	void UpdateInventoryItem(); // (Public|BlueprintCallable|BlueprintEvent)
	void Initialize(struct UInventory* Inventory, int32_t Location); // (Public|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_EquipmentSlots(int32_t EntryPoint); // (Final|UbergraphFunction)
};

