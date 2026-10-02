// WidgetBlueprintGeneratedClass UMG_SlottableInventory.UMG_SlottableInventory_C
struct UUMG_SlottableInventory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Background; 
	struct UUMG_InventoryGrid_C* InventoryGrid; 
	struct UTextBlock* SlottableType; 
	int32_t InventoryWidth; 
	struct FTagQueriesRowHandle Query; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_SlottableInventory(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

