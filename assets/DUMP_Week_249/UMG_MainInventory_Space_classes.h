// WidgetBlueprintGeneratedClass UMG_MainInventory_Space.UMG_MainInventory_Space_C
struct UUMG_MainInventory_Space_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* AnimatePointers; 
	struct UHorizontalBox* FiltersBox; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_93; 
	struct UUMG_Inventory_C* MainInventory; 
	struct UUMG_InventoryDropZone_C* UMG_InventoryDropZone; 
	struct UInventory* Inventory; 
	bool Initialised; 

	void Initialise(struct UInventory* Main, struct UInventory* Loadout); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_MainInventory_Space(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

