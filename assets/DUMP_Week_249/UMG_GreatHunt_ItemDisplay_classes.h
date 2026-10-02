// WidgetBlueprintGeneratedClass UMG_GreatHunt_ItemDisplay.UMG_GreatHunt_ItemDisplay_C
struct UUMG_GreatHunt_ItemDisplay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Item; 
	struct UTextBlock* ItemDescription; 
	struct UTextBlock* ItemName; 
	struct UImage* Pointer; 
	struct FText ItemNameText; 
	struct FText ItemDescriptionText; 
	struct UTexture2D* Texture; 

	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_GreatHunt_ItemDisplay(int32_t EntryPoint); // (Final|UbergraphFunction)
};

