// WidgetBlueprintGeneratedClass UMG_T4TroughInventory.UMG_T4TroughInventory_C
struct UUMG_T4TroughInventory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_Inventory_C* Inventory; 
	struct UOverlay* InventoryOverlay; 
	struct UOverlay* Overlay_Sort; 
	struct UUMG_IconTextButton_C* TakeAllButtonInput; 
	struct UTextBlock* TextBlock_Capacity; 
	struct UUMG_DarkTitlebar_C* UMG_DarkTitlebar; 
	struct UUMG_FillableProgressBar_C* UMG_FillableProgressBar; 
	struct UUMG_Sort_C* UMG_Sort; 
	struct AActor* LinkedActor; 
	struct FInventoryIDEnum Inventory ID; 
	bool ShowTakeAll; 
	struct FMulticastInlineDelegate LootAll; 
	struct FTimerHandle UpdateFillableTimer; 

	void GetDisplayInventory(struct UInventory*& Inventory); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Initialise(struct AActor* LinkedActor); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__TakeAllButtonInput_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // (BlueprintEvent)
	void LootAllKeyPress(); // (BlueprintCallable|BlueprintEvent)
	void Destruct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateFillable(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_T4TroughInventory(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void LootAll__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};

