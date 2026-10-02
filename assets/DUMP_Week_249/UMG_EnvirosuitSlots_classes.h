// WidgetBlueprintGeneratedClass UMG_EnvirosuitSlots.UMG_EnvirosuitSlots_C
struct UUMG_EnvirosuitSlots_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_SurvivalProgress_C* Food; 
	struct UUniformGridPanel* FoodLayout; 
	struct UTextBlock* FoodProgressText; 
	struct UUMG_SurvivalProgress_C* Oxygen; 
	struct UUniformGridPanel* OxygenLayout; 
	struct UTextBlock* OxygenProgressText; 
	struct UUMG_SurvivalProgress_C* Water; 
	struct UUniformGridPanel* WaterLayout; 
	struct UTextBlock* WaterProgressText; 
	struct UInventory* EquipmentInventory; 
	struct AIcarusPlayerCharacter* Player; 
	struct UUMG_WidgetHighlightBase_C* CachedHighlightWidget; 

	void SlotCountChanged(struct UInventory* Inventory); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateInventorySlots(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void QuickShiftInventoryHandler(int32_t Location, struct UInventory* Inventory); // (Public|BlueprintCallable|BlueprintEvent)
	struct FText UpdateWater(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText UpdateFood(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText UpdateOxygen(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Initialise(struct UInventory* BoundInventory, struct AIcarusPlayerCharacter* Player); // (Public|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_EnvirosuitSlots(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

