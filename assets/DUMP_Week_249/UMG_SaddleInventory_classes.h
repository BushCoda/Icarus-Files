// WidgetBlueprintGeneratedClass UMG_SaddleInventory.UMG_SaddleInventory_C
struct UUMG_SaddleInventory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_Inventory_C* Inventory_Saddle; 
	struct AActor* LinkedActor; 
	struct FInventoryIDEnum Inventory ID; 
	bool HideTakeAllButton; 
	bool IsItemAttachment; 

	void Initialise(struct AActor* LinkedActor); // (BlueprintCallable|BlueprintEvent)
	void OnItemUpdated(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_SaddleInventory(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

