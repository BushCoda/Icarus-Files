// WidgetBlueprintGeneratedClass UMG_BeehiveUpgrades.UMG_BeehiveUpgrades_C
struct UUMG_BeehiveUpgrades_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_InventoryItemWithBackgroundImage_C* Slot1; 
	struct UUMG_InventoryItemWithBackgroundImage_C* Slot2; 
	struct UUMG_InventoryItemWithBackgroundImage_C* Slot3; 
	struct UUMG_InventoryItemWithBackgroundImage_C* Slot4; 
	struct AActor* LinkedActor; 

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Initialize(struct AActor* LinkedActor); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_BeehiveUpgrades(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

