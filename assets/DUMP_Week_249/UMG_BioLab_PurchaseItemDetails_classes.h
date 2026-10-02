// WidgetBlueprintGeneratedClass UMG_BioLab_PurchaseItemDetails.UMG_BioLab_PurchaseItemDetails_C
struct UUMG_BioLab_PurchaseItemDetails_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UHorizontalBox* CostHBox; 
	struct UImage* ItemIcon; 
	struct UTextBlock* ItemNameText; 
	struct FText ItemName; 
	struct TSoftObjectPtr<UTexture2D> Icon; 
	struct TArray<struct FWorkshopCost> Cost; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_BioLab_PurchaseItemDetails(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};

