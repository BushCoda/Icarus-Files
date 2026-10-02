// WidgetBlueprintGeneratedClass UMG_InWorld_Manufacturer.UMG_InWorld_Manufacturer_C
struct UUMG_InWorld_Manufacturer_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Background; 
	struct UOverlay* CraftingOverlay; 
	struct UImage* ItemImage; 
	struct UTextBlock* ItemName; 
	struct UOverlay* MainOverlay; 
	struct UProgressBar* ProgressBar_99; 
	struct AActor* LinkedActor; 
	float SingleCraftTime; 
	struct FProcessingItem CachedRecipe; 

	void Initialise(struct AActor* LinkedActor); // (BlueprintCallable|BlueprintEvent)
	void ProcessingItemUpdated(struct FProcessingItem Item); // (BlueprintCallable|BlueprintEvent)
	void CalculateCraftTIme(); // (BlueprintCallable|BlueprintEvent)
	void Update(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_InWorld_Manufacturer(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

